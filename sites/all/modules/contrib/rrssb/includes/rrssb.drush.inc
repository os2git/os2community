<?php
/**
 * @file
 * Provides drush commands for Ridiculously Responsive Social Share Buttons.
 *
 * Courtesy of cluke009 at https://drupal.org/node/1231378 .
 */

/**
 * Define the RRSSB library location.
 */
define('RRSSB_LIBRARY_URI', 'https://github.com/kni-labs/rrssb/archive/master.zip');
/**
 * Implements hook_drush_command().
 */
function rrssb_drush_command() {
  $items['rrssb-plugin'] = array(
    'callback' => 'drush_rrssb_plugin',
    'description' => dt("Downloads the Ridiculously Responsive Social Share Buttons library from Github."),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
    'arguments' => array(
      'path' => dt('Path is optional. Will use default location if omitted. Default location is sites/all/libraries.')
    ),
    'aliases' => array('rrssbdl'),
  );

  return $items;
}

/**
 * Implements hook_drush_help().
 */
function rrssb_drush_help($section) {
  switch ($section) {
    case 'drush:rrssb-plugin':
      return dt("Downloads the Ridiculously Responsive Social Share Buttons library from Github. Downloads to sites/all/libraries unless a location is provided.");
  }
}

/**
 * Implements drush_MODULE_post_pm_enable().
 */
 function drush_rrssb_post_pm_enable() {
   $modules = func_get_args();
   if (in_array('rrssb', $modules)) {
     drush_rrssb_plugin();
   }
 }

/**
 * Callback for the drush command to download the RRSSB library.
 */
function drush_rrssb_plugin() {
  if (!drush_shell_exec('type unzip')) {
    return drush_set_error(dt('Missing dependency: unzip. Install it before using this command.'));
  }
  $args = func_get_args();
  if ($args[0]) {
    $path = $args[0];
  }
  else {
    $path = 'sites/all/libraries';
  }
  $olddir = getcwd();
  if (file_exists($path)) {
    chdir($path);
    drush_log('Switched to Libraries directory');
  }
  else {
    mkdir($path);
    chdir($path);
    drush_log('Created and moved to libraries');
  }

  $filename = basename(RRSSB_LIBRARY_URI);
  drush_log($filename);
  $dirname = 'rrssb';
  // Remove any existing RRSSB plugin directory.
  if (is_dir($dirname)) {
    drush_log(dt('An existing version of the RRSSB library was overwritten at @path', array('@path' => $path)), 'notice');
    $objects = scandir($dirname);
    foreach ($objects as $object) {
      if ($object != "." && $object != "..") {
        if (filetype($dirname . "/" . $object) !== 'dir') {
          unlink($dirname . "/" . $object);
        }
        else {
          rmdir($dirname."/".$object);
        }
      }
    }
    reset($objects);
    rmdir($dirname);
  }
  // Remove any existing RRSSB plugin zip archive.
  if (is_file($filename)) {
    drush_op('unlink', $filename);
  }
  // Download the zip archive.
  if (!drush_shell_exec('wget ' . RRSSB_LIBRARY_URI)) {
    drush_shell_exec('curl -O ' . RRSSB_LIBRARY_URI);
  }
  if (is_file($filename)) {
    // Decompress the zip archive.
    drush_shell_exec('unzip -qq -o ' . $filename);
    // Remove the zip archive
    drush_op('unlink', $filename);
    drush_log('Unzipped the file.');
  }
  if (file_exists('rrssb-master')) {
    rename('rrssb-master', 'rrssb');
  }
  // Set working directory back to the previous working directory.
  chdir($olddir);
  if (is_dir($path . '/' . $dirname)) {
    drush_log(dt('The RRSSB library has been downloaded to @path', array('@path' => $path)), 'success');
  }
  else {
    drush_log(dt('Drush was unable to download the RRSSB library to @path', array('@path' => $path)), 'error');
  }
}
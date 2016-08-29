<?php
/**
 * @file
 * ostoweb_slideshow.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ostoweb_slideshow_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-ting_slideshow-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ting_slideshow-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -24,
      ),
      'osto_web' => array(
        'region' => 'slideshow',
        'status' => 1,
        'theme' => 'osto_web',
        'weight' => -45,
      ),
      'ting' => array(
        'region' => 'slideshow',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -24,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}

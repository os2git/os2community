<?php
/**
 * @file
 * ostoweb_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ostoweb_slideshow_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function ostoweb_slideshow_image_default_styles() {
  $styles = array();

  // Exported image style: slideshow_extra.
  $styles['slideshow_extra'] = array(
    'label' => 'Slideshow Extra',
    'effects' => array(
      22 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: slideshow_large.
  $styles['slideshow_large'] = array(
    'label' => 'Slideshow Large',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1920,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function ostoweb_slideshow_node_info() {
  $items = array(
    'slide' => array(
      'name' => t('Slide'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

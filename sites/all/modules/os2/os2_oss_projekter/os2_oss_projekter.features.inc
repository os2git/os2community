<?php
/**
 * @file
 * os2_oss_projekter.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2_oss_projekter_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os2_oss_projekter_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function os2_oss_projekter_node_info() {
  $items = array(
    'oss_projekt' => array(
      'name' => t('OSS projekt'),
      'base' => 'node_content',
      'description' => t('En indholdstype til at oprette en beskrivelse og henvisning til et 3. parts open source projekt.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

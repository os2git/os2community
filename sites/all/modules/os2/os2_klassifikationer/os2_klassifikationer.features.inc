<?php
/**
 * @file
 * os2_klassifikationer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2_klassifikationer_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os2_klassifikationer_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function os2_klassifikationer_node_info() {
  $items = array(
    'os2klassifikation' => array(
      'name' => t('OS2klassifikation'),
      'base' => 'node_content',
      'description' => t('En indholdstype til at oprette klassifikationer under projektet OS2klassifikation og til visning i klassifikationslisten for projektet.'),
      'has_title' => '1',
      'title_label' => t('Navn'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

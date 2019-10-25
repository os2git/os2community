<?php
/**
 * @file
 * os2_approved_products.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2_approved_products_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function os2_approved_products_node_info() {
  $items = array(
    'os2approved_product' => array(
      'name' => t('OS2Godkendt produkt'),
      'base' => 'node_content',
      'description' => t('En indholdstype til præsentere eksterne produkter godkendt af os2.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

<?php
/**
 * @file
 * osto_contact.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function osto_contact_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

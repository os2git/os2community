<?php
/**
 * @file
 * osto_web_modifications.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function osto_web_modifications_ctools_plugin_api($module = NULL, $api = NULL) {
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

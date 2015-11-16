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
}

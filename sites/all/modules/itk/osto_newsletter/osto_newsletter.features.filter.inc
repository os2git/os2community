<?php
/**
 * @file
 * osto_newsletter.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function osto_newsletter_filter_default_formats() {
  $formats = array();

  // Exported format: Custom Full HTML.
  $formats['custom_full_html'] = array(
    'format' => 'custom_full_html',
    'name' => 'Custom Full HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(),
  );

  return $formats;
}

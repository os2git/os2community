<?php
/**
 * @file
 * os2_oss_projekter.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function os2_oss_projekter_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'oss_project_page_overview';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'oss_projekt' => 'oss_projekt',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => array(
      0 => 'main-menu:oss-projekter',
    ),
  );
  $context->condition_mode = 0;
  $export['oss_project_page_overview'] = $context;

  return $export;
}

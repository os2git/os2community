<?php
/**
 * @file
 * os2_vejledninger.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function os2_vejledninger_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'vejledning_page_overview';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'vejledning' => 'vejledning',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => array(
      0 => 'main-menu:vejledninger',
    ),
  );
  $context->condition_mode = 0;
  $export['vejledning_page_overview'] = $context;

  return $export;
}

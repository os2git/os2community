<?php
/**
 * @file
 * osto_web_modifications.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function osto_web_modifications_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'community_blocks';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'community' => 'community',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 1;
  $export['community_blocks'] = $context;

  return $export;
}

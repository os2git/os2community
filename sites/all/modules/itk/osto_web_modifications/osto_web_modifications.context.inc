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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'event_page_or_overview';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'event' => 'event',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'begivenheder' => 'begivenheder',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;
  $export['event_page_or_overview'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'forum_page_or_overview';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'forum' => 'forum',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'forum' => 'forum',
        'forum/*' => 'forum/*',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;
  $export['forum_page_or_overview'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_page_or_overview';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'news_article' => 'news_article',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'nyheder' => 'nyheder',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;
  $export['news_page_or_overview'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'partner_page_or_overview';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'public_partner' => 'public_partner',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'offentlige-partnere' => 'offentlige-partnere',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;
  $export['partner_page_or_overview'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'product_page_or_overview';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'product' => 'product',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'produkter' => 'produkter',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;
  $export['product_page_or_overview'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'supplier_page_or_overview';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'supplier' => 'supplier',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'leverandoerer' => 'leverandoerer',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;
  $export['supplier_page_or_overview'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'team_page_or_overview';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'team' => 'team',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'teams' => 'teams',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;
  $export['team_page_or_overview'] = $context;

  return $export;
}

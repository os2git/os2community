<?php

/**
 * @file
 * Views definitions for yoast_seo.
 */

/**
 * Implements hook_views_data().
 */
function yoast_seo_views_data() {
  $data = array();

  $data['yoast_seo'] = array(
    'table' => array(
      'group' => t('Yoast SEO'),
      'base' => array(
        'field' => 'entity_id',
        'title' => t('Entity ID'),
        'help' => t('The Entity ID the Real-time SEO data is attached to.'),
      ),
      'join' => array(
        'node' => array(
          'left_field' => 'nid',
          'field' => 'entity_id',
        ),
      ),
    ),
    'entity_id' => array(
      'title' => t('Entity ID'),
      'help' => t('The Entity ID the Real-time SEO data is attached to.'),
      'relationship' => array(
        'base' => 'node',
        'field' => 'nid',
        'handler' => 'views_handler_relationship',
        'label' => t('Node'),
      ),
    ),
    'focus_keyword' => array(
      'title' => t('Focus Keyword'),
      'help' => t('The focus keyword for the entity'),
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
      ),
    ),
    'seo_status' => array(
      'title' => t('SEO Score'),
      'help' => t('Real-time SEO Score represented as a numeric value.'),
      'field' => array(
        'handler' => 'views_handler_field_numeric',
        'click sortable' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
      ),
    ),
    'seo_rating' => array(
      'title' => t('SEO Rating'),
      'help' => t('Real-time SEO Rating represented using a traffic light system.'),
      'field' => array(
        'handler' => 'yoast_seo_handler_rating',
      ),
    ),
  );
  return $data;
}

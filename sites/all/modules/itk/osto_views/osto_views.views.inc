<?php

/**
 * Implements hook_views_data_alter().
 *
 * Defines a new field with content built by the module_name_handler_field_custom_field class.
 * @see hook_views_data()
 */
function osto_views_views_data() {
  $data = array();
  $data['read_time']['table']['group'] = t('Read time');
  $data['read_time']['table']['join'] = array(
    // #global is a special flag which let's a table appear all the time.
    'node' => array(
      'left_field' => 'nid',
      'field' => 'nid',
    ),
  );
  $data['read_time']['read_time'] = array(
    'title' => t('Read time'),
    'help' => t('Read time display'),
    'real field' => 'read_time', // Enter the base fields system name here.
    'field' => array(
      'handler' => 'views_handler_field_node',
    ),
  );

  return $data;
}
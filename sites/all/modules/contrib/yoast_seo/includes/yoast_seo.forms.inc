<?php

/**
 * @file
 * Contains node form alters.
 */

/**
 * Adds extra settings to the node content type edit page.
 *
 * @param array $form
 *   Node settings form.
 */
function _yoast_seo_process_node_settings_form(&$form) {

  // Do not process node form if it do not contain node type.
  if (isset($form['type'])) {
    $form['yoast_seo'] = array(
      '#type' => 'fieldset',
      '#title' => t('Real-time SEO for Drupal settings'),
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
      '#group' => 'additional_settings',
    );

    $node_type = $form['#node_type']->type;

    // Get the fields belonging to this content type. Let's check if we have a
    // body field. This is necessary for Yoast SEO for Drupal to work.
    $fields = field_info_instances('node', $node_type);
    // Collect all text fields.
    $text_fields = array(0 => t('- None -'));
    foreach ($fields as $field_name => $field_instance) {
      if ($field_name === 'body') {
        continue;
      }
      if ($field_instance['widget']['module'] === 'text') {
        $text_fields[$field_name] = $field_instance['label'] . ' (' . $field_name . ')';
      }
    }

    /*
     * @todo remove this after https://www.drupal.org/node/1149078 was fixed
     * and use
     * $states = array(
     * 'disabled' => array(
     * ':input[name=yoast_seo_body_fields[]]' => array('value' => array('0')),
     * ),
     * );
     */
    $conditions = array();

    unset($text_fields[0]);
    $field_names = array_keys($text_fields);
    foreach ($field_names as $label) {
      $conditions[][':input[name="yoast_seo_body_fields[' . $label . ']"]'] = array('checked' => TRUE);
    }

    $body_fields = variable_get('yoast_seo_body_fields_' . $node_type, array());
    if (!isset($fields['body']) && !empty($node_type) && empty($body_fields)) {
      $default = FALSE;
      $description = t('Real-time SEO for Drupal cannot be enabled, because this content type does not have a body field. Add a body field !url.', array('!url' => l(t('here'), 'admin/structure/types/manage/' . $form['#node_type']->type . '/fields')));
      $disabled = TRUE;
      $states = array(
        'enabled' => array(
          $conditions,
        ),
      );
    }
    else {
      if (isset($fields['body'])) {
        // If we have body we skip conditions.
        $conditions = array();
      }
      $default = variable_get('yoast_seo_enable_node__' . $node_type, TRUE);
      $description = t('Enable Real-time SEO for Drupal for this content type.');
      $disabled = FALSE;
      $states = array(
        'enabled' => array(
          $conditions,
        ),
      );
    }

    $form['yoast_seo']['yoast_seo_enable_node_'] = array(
      '#type' => 'checkbox',
      '#title' => t('Enable'),
      '#default_value' => $default,
      '#disabled' => $disabled,
      '#description' => $description,
      '#states' => $states,
    );

    /*
     * Here we allow users to use different fields or multiple for using
     * instead of body.
     * @todo change this to multiselect after
     * https://www.drupal.org/node/1149078 was fixed
     * '#type' => 'select',
     * '#multiple' => TRUE,
     */
    if (empty($body_fields)) {
      $description = t('There are no other text fields that could be used instead of the Body field.');
    }
    else {
      $description = t('Select fields to use instead, or in addition to body for Real-time SEO. Access to all fields must be allowed.');
    }

    $form['yoast_seo']['yoast_seo_body']['yoast_seo_body_fields'] = array(
      '#type' => 'checkboxes',
      '#title' => t('Additional body source'),
      '#description' => $description,
      '#options' => $text_fields,
      '#default_value' => $body_fields,
    );
  }
}

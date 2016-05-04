<?php
/**
 * @file
 * osto_web_modifications.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function osto_web_modifications_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col_first|bean|front_signup_partner|default';
  $field_group->group_name = 'group_col_first';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'front_signup_partner';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '2',
    'children' => array(
      0 => 'field_signup_image_first',
      1 => 'field_signup_body_first',
      2 => 'field_signup_link_first',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'col-first',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
        'required_fields' => 1,
      ),
      'formatter' => '',
    ),
  );
  $export['group_col_first|bean|front_signup_partner|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col_second|bean|front_signup_partner|default';
  $field_group->group_name = 'group_col_second';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'front_signup_partner';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '3',
    'children' => array(
      0 => 'field_signup_image_second',
      1 => 'field_signup_body_second',
      2 => 'field_signup_link_second',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'col-second',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_col_second|bean|front_signup_partner|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_signu_first|bean|front_partner_signup|form';
  $field_group->group_name = 'group_signu_first';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'front_partner_signup';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Første kolonne',
    'weight' => '3',
    'children' => array(
      0 => 'field_signup_body_first',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-signu-first field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_signu_first|bean|front_partner_signup|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_signu_first|bean|front_signup_partner|form';
  $field_group->group_name = 'group_signu_first';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'front_signup_partner';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Første kolonne',
    'weight' => '3',
    'children' => array(
      0 => 'field_signup_image_first',
      1 => 'field_signup_body_first',
      2 => 'field_signup_link_first',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-signu-first field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_signu_first|bean|front_signup_partner|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_signup_first|bean|front_partner_signup|default';
  $field_group->group_name = 'group_signup_first';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'front_partner_signup';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '2',
    'children' => array(
      0 => 'field_signup_body_first',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'col-first',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_signup_first|bean|front_partner_signup|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_signup_footer|bean|front_partner_signup|default';
  $field_group->group_name = 'group_signup_footer';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'front_partner_signup';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '5',
    'children' => array(
      0 => 'field_signup_link',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'footer',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_signup_footer|bean|front_partner_signup|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_signup_footer|bean|front_partner_signup|form';
  $field_group->group_name = 'group_signup_footer';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'front_partner_signup';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Footer',
    'weight' => '5',
    'children' => array(
      0 => 'field_signup_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-signup-footer field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_signup_footer|bean|front_partner_signup|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_signup_second|bean|front_signup_partner|form';
  $field_group->group_name = 'group_signup_second';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'front_signup_partner';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Anden kolonne',
    'weight' => '4',
    'children' => array(
      0 => 'field_signup_image_second',
      1 => 'field_signup_body_second',
      2 => 'field_signup_link_second',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-signup-second field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_signup_second|bean|front_signup_partner|form'] = $field_group;

  return $export;
}

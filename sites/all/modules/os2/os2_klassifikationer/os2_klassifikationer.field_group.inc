<?php
/**
 * @file
 * os2_klassifikationer.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function os2_klassifikationer_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_os2klass_meta|node|os2klassifikation|default';
  $field_group->group_name = 'group_os2klass_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2klassifikation';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Yderligere information',
    'weight' => '5',
    'children' => array(
      0 => 'field_os2klass_anvendes_i_system',
      1 => 'field_os2klass_dokumentation',
      2 => 'field_os2klass_form_hovedniveau',
      3 => 'field_os2klass_format',
      4 => 'field_os2klass_http_uri',
      5 => 'field_os2klass_kle_dom_nemodel',
      6 => 'field_os2klass_licens',
      7 => 'field_os2klass_opd_frekvens',
      8 => 'field_os2klass_retskilde',
      9 => 'field_os2klass_standard',
      10 => 'field_os2klass_version',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Yderligere information',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_os2klass_meta|node|os2klassifikation|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_os2klass_meta|node|os2klassifikation|form';
  $field_group->group_name = 'group_os2klass_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2klassifikation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Yderligere information',
    'weight' => '7',
    'children' => array(
      0 => 'field_os2klass_anvendes_i_system',
      1 => 'field_os2klass_dokumentation',
      2 => 'field_os2klass_form_hovedniveau',
      3 => 'field_os2klass_format',
      4 => 'field_os2klass_http_uri',
      5 => 'field_os2klass_kle_dom_nemodel',
      6 => 'field_os2klass_licens',
      7 => 'field_os2klass_opd_frekvens',
      8 => 'field_os2klass_retskilde',
      9 => 'field_os2klass_standard',
      10 => 'field_os2klass_version',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-os2klass-meta field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_os2klass_meta|node|os2klassifikation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_os2klass_meta|node|os2klassifikation|teaser';
  $field_group->group_name = 'group_os2klass_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2klassifikation';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '4',
    'children' => array(
      0 => 'field_os2klass_anvendes_i_system',
      1 => 'field_os2klass_form_hovedniveau',
      2 => 'field_os2klass_kle_dom_nemodel',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Metadata',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-os2klass-meta field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_os2klass_meta|node|os2klassifikation|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Metadata');
  t('Yderligere information');

  return $field_groups;
}

<?php
/**
 * @file
 * osto_content_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function osto_content_types_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cooperators|node|product|form';
  $field_group->group_name = 'group_cooperators';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Samarbejdspartnere',
    'weight' => '11',
    'children' => array(
      0 => 'field_main_partners',
      1 => 'field_main_suppliers',
      2 => 'field_product_project',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-cooperators field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_cooperators|node|product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cooperators|node|project|form';
  $field_group->group_name = 'group_cooperators';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Samarbejdspartnere',
    'weight' => '10',
    'children' => array(
      0 => 'field_main_suppliers',
      1 => 'field_main_partners',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-cooperators field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_cooperators|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_metadata|node|event|form';
  $field_group->group_name = 'group_event_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Begivenhed',
    'weight' => '5',
    'children' => array(
      0 => 'field_event_date',
      1 => 'field_event_address',
      2 => 'field_event_price',
      3 => 'field_attendee_organizer',
      4 => 'field_event_email',
      5 => 'field_event_contact_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-metadata field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_event_metadata|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fact_grp|node|public_partner|form';
  $field_group->group_name = 'group_fact_grp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'public_partner';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sidebar_grp';
  $field_group->data = array(
    'label' => 'Fakta blok',
    'weight' => '3',
    'children' => array(
      0 => 'field_pub_part_upload_logo',
      1 => 'field_pub_part_organisation',
      2 => 'field_pub_part_partner_since',
      3 => 'field_pub_part_partner_contract',
      4 => 'field_pub_part_address',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Fakta blok',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-fact-grp field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_fact_grp|node|public_partner|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fact_grp|node|supplier|form';
  $field_group->group_name = 'group_fact_grp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'supplier';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sidebar_grp';
  $field_group->data = array(
    'label' => 'Fakta blok',
    'weight' => '43',
    'children' => array(
      0 => 'field_supp_num_employees',
      1 => 'field_pub_part_partner_contract',
      2 => 'field_pub_part_address',
      3 => 'field_supp_company',
      4 => 'field_supp_supplier_since',
      5 => 'field_website',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-fact-grp field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_fact_grp|node|supplier|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_facts|node|product|form';
  $field_group->group_name = 'group_facts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Fakta',
    'weight' => '10',
    'children' => array(
      0 => 'field_product_version',
      1 => 'field_product_download',
      2 => 'field_product_license',
      3 => 'field_projekttype',
      4 => 'field_m_lgruppe',
      5 => 'field_programmeringssprog',
      6 => 'field_operativsystemer',
      7 => 'field_kompatibilitet',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-facts field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_facts|node|product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta_info|node|product|form';
  $field_group->group_name = 'group_meta_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metainfo',
    'weight' => '9',
    'children' => array(
      0 => 'field_product_features',
      1 => 'field_links',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Metainfo',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-meta-info field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_meta_info|node|product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_images|node|product|form';
  $field_group->group_name = 'group_product_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Billeder',
    'weight' => '6',
    'children' => array(
      0 => 'field_product_image',
      1 => 'field_product_logo',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-product-images field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_product_images|node|product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_res|node|project|form';
  $field_group->group_name = 'group_project_res';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Ressourcer',
    'weight' => '9',
    'children' => array(
      0 => 'field_project_github',
      1 => 'field_project_files',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-project-res field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_project_res|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sidebar_grp|node|public_partner|form';
  $field_group->group_name = 'group_sidebar_grp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'public_partner';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sidebar',
    'weight' => '9',
    'children' => array(
      0 => 'group_fact_grp',
      1 => 'group_user_grp',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'Sidebar',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $field_groups['group_sidebar_grp|node|public_partner|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sidebar_grp|node|supplier|form';
  $field_group->group_name = 'group_sidebar_grp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'supplier';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sidebar',
    'weight' => '10',
    'children' => array(
      0 => 'field_produkter',
      1 => 'field_main_partners',
      2 => 'group_fact_grp',
      3 => 'group_user_grp',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $field_groups['group_sidebar_grp|node|supplier|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sidebar|node|page|form';
  $field_group->group_name = 'group_sidebar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sidebar',
    'weight' => '3',
    'children' => array(
      0 => 'field_main_links',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-sidebar field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_sidebar|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_team_res|node|team|form';
  $field_group->group_name = 'group_team_res';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'team';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Ressourcer',
    'weight' => '7',
    'children' => array(
      0 => 'field_project_files',
      1 => 'field_project_github',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-team-res field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_team_res|node|team|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_grp|node|public_partner|form';
  $field_group->group_name = 'group_user_grp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'public_partner';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sidebar_grp';
  $field_group->data = array(
    'label' => 'Brugere blok',
    'weight' => '5',
    'children' => array(
      0 => 'field_pub_part_user_contact',
      1 => 'field_pub_part_other_users',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-user-grp field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_user_grp|node|public_partner|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_grp|node|supplier|form';
  $field_group->group_name = 'group_user_grp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'supplier';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sidebar_grp';
  $field_group->data = array(
    'label' => 'Bruger blok',
    'weight' => '44',
    'children' => array(
      0 => 'field_pub_part_user_contact',
      1 => 'field_pub_part_other_users',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-user-grp field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_user_grp|node|supplier|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Begivenhed');
  t('Billeder');
  t('Bruger blok');
  t('Brugere blok');
  t('Fakta');
  t('Fakta blok');
  t('Metainfo');
  t('Ressourcer');
  t('Samarbejdspartnere');
  t('Sidebar');

  return $field_groups;
}

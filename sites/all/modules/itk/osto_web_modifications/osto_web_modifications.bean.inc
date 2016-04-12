<?php
/**
 * @file
 * osto_web_modifications.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function osto_web_modifications_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'community_forside_signup';
  $bean_type->label = 'Community forside signup';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['community_forside_signup'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'front_partner_signup';
  $bean_type->label = 'Forside partner signup';
  $bean_type->options = '';
  $bean_type->description = 'Signup blok til forsiden med henblik på partnere.';
  $export['front_partner_signup'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'front_signup_partner';
  $bean_type->label = 'Forside leverandør signup';
  $bean_type->options = '';
  $bean_type->description = 'Signup blok til forsiden med henblik på leverandører.';
  $export['front_signup_partner'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'header';
  $bean_type->label = 'Header';
  $bean_type->options = '';
  $bean_type->description = 'Overskrifter til den grønne header i toppen af siden.';
  $export['header'] = $bean_type;

  return $export;
}

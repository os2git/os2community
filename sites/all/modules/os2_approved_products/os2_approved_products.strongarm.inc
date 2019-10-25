<?php
/**
 * @file
 * os2_approved_products.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function os2_approved_products_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_os2approved_product';
  $strongarm->value = 'edit-comment';
  $export['additional_settings__active_tab_os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_os2approved_product';
  $strongarm->value = 0;
  $export['comment_anonymous_os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_os2approved_product';
  $strongarm->value = 1;
  $export['comment_default_mode_os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_os2approved_product';
  $strongarm->value = '50';
  $export['comment_default_per_page_os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_os2approved_product';
  $strongarm->value = 1;
  $export['comment_form_location_os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_os2approved_product';
  $strongarm->value = '1';
  $export['comment_os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_os2approved_product';
  $strongarm->value = '0';
  $export['comment_preview_os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_os2approved_product';
  $strongarm->value = 1;
  $export['comment_subject_field_os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_os2approved_product';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_os2approved_product';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_os2approved_product';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__os2approved_product';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '11',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '10',
        ),
        'redirect' => array(
          'weight' => '9',
        ),
      ),
      'display' => array(
        'read_time' => array(
          'default' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_os2approved_product';
  $strongarm->value = '0';
  $export['language_content_type_os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'linkchecker_scan_comment_os2approved_product';
  $strongarm->value = 0;
  $export['linkchecker_scan_comment_os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'linkchecker_scan_node_os2approved_product';
  $strongarm->value = 0;
  $export['linkchecker_scan_node_os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_os2approved_product';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_os2approved_product';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__os2approved_product';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_os2approved_product';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_os2approved_product';
  $strongarm->value = '0';
  $export['node_preview_os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_os2approved_product';
  $strongarm->value = 1;
  $export['node_submitted_os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'read_time_display_os2approved_product';
  $strongarm->value = 'Ca. læsetid: %read_time';
  $export['read_time_display_os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'read_time_fields_os2approved_product';
  $strongarm->value = array();
  $export['read_time_fields_os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'read_time_format_os2approved_product';
  $strongarm->value = 'hour_short';
  $export['read_time_format_os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'read_time_wpm_os2approved_product';
  $strongarm->value = '225';
  $export['read_time_wpm_os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rrssb_os2approved_product';
  $strongarm->value = 0;
  $export['rrssb_os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_os2approved_product';
  $strongarm->value = 'Gem og tilføj felter';
  $export['save_continue_os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_expand_fieldset_os2approved_product';
  $strongarm->value = '0';
  $export['scheduler_expand_fieldset_os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_os2approved_product';
  $strongarm->value = 0;
  $export['scheduler_publish_enable_os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_past_date_os2approved_product';
  $strongarm->value = 'error';
  $export['scheduler_publish_past_date_os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_os2approved_product';
  $strongarm->value = 0;
  $export['scheduler_publish_required_os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_os2approved_product';
  $strongarm->value = 0;
  $export['scheduler_publish_revision_os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_os2approved_product';
  $strongarm->value = 0;
  $export['scheduler_publish_touch_os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_os2approved_product';
  $strongarm->value = 0;
  $export['scheduler_unpublish_enable_os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_os2approved_product';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_os2approved_product';
  $strongarm->value = 0;
  $export['scheduler_unpublish_revision_os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_use_vertical_tabs_os2approved_product';
  $strongarm->value = '1';
  $export['scheduler_use_vertical_tabs_os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_os2approved_product';
  $strongarm->value = 0;
  $export['show_os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_no_approval_required_body';
  $strongarm->value = 'Hej [user:name]

Tak fordi du har oprettet dig som bruger på [site:name]. Du kan nu logge ind ved at klikke på linket eller ved at kopiere og indsætte det i din browser:

[user:one-time-login-url]

Dette link kan kun bruges til at logge ind, og det sender dig til en side hvor du kan vælge en adgangskode.

Når du har valgt en adgangskode kan du logge ind på [site:login-url] med:

Brugernavn: [user:name-raw]
Adgangskode: Din adgangskode

---
Med venlig hilsen

OS2 - Offentlig Digitaliseringsfællesskab
Læs vores privatlivspolitik her: https://os2.eu/side/privatlivspolitik';
  $export['user_mail_register_no_approval_required_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_no_approval_required_subject';
  $strongarm->value = 'Kontodetaljer for [user:name] på [site:name]';
  $export['user_mail_register_no_approval_required_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_pending_approval_body';
  $strongarm->value = 'Hej [user:name]

Tak fordi du har oprettet dig på [site:name]. Din ansøgning om en konto afventer godkendelse. Når den er blevet godkendt modtager du en e-mail med information om hvordan du logger ind, vælger en adgangskode og andre detaljer.

---
Med venlig hilsen

OS2 - Offentlig Digitaliseringsfællesskab
Læs vores privatlivspolitik her: https://os2.eu/side/privatlivspolitik';
  $export['user_mail_register_pending_approval_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_pending_approval_subject';
  $strongarm->value = 'Kontoinformation for [user:name] på [site:name] (afventer godkendelse af administrator)';
  $export['user_mail_register_pending_approval_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_node_os2approved_product';
  $strongarm->value = 0;
  $export['webform_node_os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'yoast_seo_body_fields_os2approved_product';
  $strongarm->value = array();
  $export['yoast_seo_body_fields_os2approved_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'yoast_seo_enable_node__os2approved_product';
  $strongarm->value = 1;
  $export['yoast_seo_enable_node__os2approved_product'] = $strongarm;

  return $export;
}

<?php
/**
 * @file
 * osto_newsletter.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function osto_newsletter_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_mailchimp_signup().
 */
function osto_newsletter_default_mailchimp_signup() {
  $items = array();
  $items['nyhedsbrev'] = entity_import('mailchimp_signup', '{
    "name" : "nyhedsbrev",
    "mc_lists" : { "971cbdb77b" : "971cbdb77b" },
    "mode" : "1",
    "title" : "Nyhedsbrev",
    "settings" : {
      "path" : "",
      "submit_button" : "Tilmeld",
      "confirmation_message" : "Du er nu oprettet som abonnent.",
      "destination" : "newsletter-confirm",
      "mergefields" : {
        "EMAIL" : {
          "name" : "Email",
          "req" : true,
          "field_type" : "email",
          "public" : true,
          "show" : true,
          "order" : "1",
          "default" : "",
          "helptext" : "",
          "size" : "25",
          "tag" : "EMAIL",
          "id" : 0
        },
        "NAME" : {
          "name" : "Navn",
          "req" : false,
          "field_type" : "text",
          "public" : true,
          "show" : true,
          "order" : "2",
          "default" : "",
          "helptext" : "",
          "size" : "25",
          "tag" : "NAME",
          "id" : 1
        },
        "TYPE" : {
          "name" : "Jeg repr\\u00e6sentere en:",
          "req" : false,
          "field_type" : "dropdown",
          "public" : true,
          "show" : true,
          "order" : "3",
          "default" : "",
          "helptext" : "",
          "size" : "25",
          "choices" : [ "", "Kommune", "Anden offentlig myndighed", "Leverand\\u00f8r", "Anden" ],
          "tag" : "TYPE",
          "id" : 2
        }
      },
      "description" : "",
      "doublein" : 0,
      "send_welcome" : 0,
      "include_interest_groups" : 1
    },
    "rdf_mapping" : []
  }');
  $items['nyhedsbrev_mail_only'] = entity_import('mailchimp_signup', '{
    "name" : "nyhedsbrev_mail_only",
    "mc_lists" : { "971cbdb77b" : "971cbdb77b" },
    "mode" : "1",
    "title" : "Nyhedsbrev",
    "settings" : {
      "path" : "",
      "submit_button" : "Tilmeld",
      "confirmation_message" : "Du er nu oprettet som abonnent.",
      "destination" : "newsletter-confirm",
      "mergefields" : {
        "EMAIL" : {
          "name" : "Email",
          "req" : true,
          "field_type" : "email",
          "public" : true,
          "show" : true,
          "order" : "1",
          "default" : "",
          "helptext" : "",
          "size" : "25",
          "tag" : "EMAIL",
          "id" : 0
        },
        "NAME" : 0,
        "TYPE" : 0
      },
      "description" : "",
      "doublein" : 0,
      "send_welcome" : 0,
      "include_interest_groups" : 0
    },
    "rdf_mapping" : []
  }');
  return $items;
}

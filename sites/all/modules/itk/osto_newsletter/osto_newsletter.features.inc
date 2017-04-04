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
      "destination" : "node\\/247",
      "mergefields" : {
        "EMAIL" : {"tag":"EMAIL","name":"Email Address","type":"email","required":true,"default_value":"","public":true,"display_order":1,"options":{"size":25}},
        "NAME" : {"merge_id":1,"tag":"NAME","name":"Navn","type":"text","required":false,"default_value":"","public":true,"display_order":2,"options":{"size":25},"help_text":"","list_id":"971cbdb77b","_links":[{"rel":"self","href":"https:\\/\\/us13.api.mailchimp.com\\/3.0\\/lists\\/971cbdb77b\\/merge-fields\\/1","method":"GET","targetSchema":"https:\\/\\/us13.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/Merge-Fields\\/Response.json"},{"rel":"parent","href":"https:\\/\\/us13.api.mailchimp.com\\/3.0\\/lists\\/971cbdb77b\\/merge-fields","method":"GET","targetSchema":"https:\\/\\/us13.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/Merge-Fields\\/CollectionResponse.json","schema":"https:\\/\\/us13.api.mailchimp.com\\/schema\\/3.0\\/CollectionLinks\\/Lists\\/MergeFields.json"},{"rel":"update","href":"https:\\/\\/us13.api.mailchimp.com\\/3.0\\/lists\\/971cbdb77b\\/merge-fields\\/1","method":"PATCH","targetSchema":"https:\\/\\/us13.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/Merge-Fields\\/Response.json","schema":"https:\\/\\/us13.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/Merge-Fields\\/PATCH.json"},{"rel":"delete","href":"https:\\/\\/us13.api.mailchimp.com\\/3.0\\/lists\\/971cbdb77b\\/merge-fields\\/1","method":"DELETE"}]},
        "TYPE" : {"merge_id":2,"tag":"TYPE","name":"Jeg repr\\u00e6senterer en:","type":"dropdown","required":false,"default_value":"","public":true,"display_order":3,"options":{"choices":["","Kommune","Anden offentlig myndighed","Leverand\\u00f8r","Anden"]},"help_text":"","list_id":"971cbdb77b","_links":[{"rel":"self","href":"https:\\/\\/us13.api.mailchimp.com\\/3.0\\/lists\\/971cbdb77b\\/merge-fields\\/2","method":"GET","targetSchema":"https:\\/\\/us13.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/Merge-Fields\\/Response.json"},{"rel":"parent","href":"https:\\/\\/us13.api.mailchimp.com\\/3.0\\/lists\\/971cbdb77b\\/merge-fields","method":"GET","targetSchema":"https:\\/\\/us13.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/Merge-Fields\\/CollectionResponse.json","schema":"https:\\/\\/us13.api.mailchimp.com\\/schema\\/3.0\\/CollectionLinks\\/Lists\\/MergeFields.json"},{"rel":"update","href":"https:\\/\\/us13.api.mailchimp.com\\/3.0\\/lists\\/971cbdb77b\\/merge-fields\\/2","method":"PATCH","targetSchema":"https:\\/\\/us13.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/Merge-Fields\\/Response.json","schema":"https:\\/\\/us13.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/Merge-Fields\\/PATCH.json"},{"rel":"delete","href":"https:\\/\\/us13.api.mailchimp.com\\/3.0\\/lists\\/971cbdb77b\\/merge-fields\\/2","method":"DELETE"}]}
      },
      "description" : "",
      "doublein" : 0,
      "include_interest_groups" : 0
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
      "destination" : "node\\/247",
      "mergefields" : { "EMAIL" : {"tag":"EMAIL","name":"Email","type":"email","required":true,"default_value":"","public":true,"display_order":"1","options":{"size":"25"}} },
      "description" : "",
      "doublein" : 0,
      "send_welcome" : 0,
      "include_interest_groups" : 0
    },
    "rdf_mapping" : []
  }');
  return $items;
}

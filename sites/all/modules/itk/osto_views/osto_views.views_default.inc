<?php
/**
 * @file
 * osto_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function osto_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ting_active_registration';
  $view->description = 'List attendees for a given event.';
  $view->tag = 'commons_events';
  $view->base_table = 'registration';
  $view->human_name = 'Ting: Active registration';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'event-registration';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Forbindelse: Tilmelding: Registration to Indholdselement */
  $handler->display->display_options['relationships']['registration_related_node']['id'] = 'registration_related_node';
  $handler->display->display_options['relationships']['registration_related_node']['table'] = 'registration';
  $handler->display->display_options['relationships']['registration_related_node']['field'] = 'registration_related_node';
  $handler->display->display_options['relationships']['registration_related_node']['label'] = 'Begivenhed';
  /* Forbindelse: Tilmelding: Bruger */
  $handler->display->display_options['relationships']['user_uid']['id'] = 'user_uid';
  $handler->display->display_options['relationships']['user_uid']['table'] = 'registration';
  $handler->display->display_options['relationships']['user_uid']['field'] = 'user_uid';
  $handler->display->display_options['relationships']['user_uid']['required'] = TRUE;
  /* Felt: Tilmelding: Slet-link */
  $handler->display->display_options['fields']['delete_registration']['id'] = 'delete_registration';
  $handler->display->display_options['fields']['delete_registration']['table'] = 'registration';
  $handler->display->display_options['fields']['delete_registration']['field'] = 'delete_registration';
  $handler->display->display_options['fields']['delete_registration']['label'] = '';
  $handler->display->display_options['fields']['delete_registration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_registration']['text'] = 'Afmeld';
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'registration_related_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Kontekstuelt filter: Bruger: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'user_uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pane_title'] = 'Ting: Active registration';
  $handler->display->display_options['pane_category']['name'] = 'Ting';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'null' => array(
      'type' => 'fixed',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => 'node',
      'label' => 'Global: Null',
    ),
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $translatables['ting_active_registration'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Begivenhed'),
    t('Bruger'),
    t('Afmeld'),
    t('Alle'),
    t('Content pane'),
    t('Ting: Active registration'),
    t('Ting'),
  );
  $export['ting_active_registration'] = $view;

  $view = new view();
  $view->name = 'ting_basic_page_links';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ting: Basic page links';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Læs mere';
  $handler->display->display_options['css_class'] = 'read-more-links';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Indhold: Links */
  $handler->display->display_options['fields']['field_main_links']['id'] = 'field_main_links';
  $handler->display->display_options['fields']['field_main_links']['table'] = 'field_data_field_main_links';
  $handler->display->display_options['fields']['field_main_links']['field'] = 'field_main_links';
  $handler->display->display_options['fields']['field_main_links']['label'] = '';
  $handler->display->display_options['fields']['field_main_links']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_main_links']['alter']['text'] = '<a href="[field_main_links]">[field_main_links-title] &raquo;</a>';
  $handler->display->display_options['fields']['field_main_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_links']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_main_links']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_main_links']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_main_links']['multi_type'] = 'ul';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'page' => 'page',
  );
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Links (field_main_links:url) */
  $handler->display->display_options['filters']['field_main_links_url']['id'] = 'field_main_links_url';
  $handler->display->display_options['filters']['field_main_links_url']['table'] = 'field_data_field_main_links';
  $handler->display->display_options['filters']['field_main_links_url']['field'] = 'field_main_links_url';
  $handler->display->display_options['filters']['field_main_links_url']['operator'] = 'not empty';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Read more links';
  $translatables['ting_basic_page_links'] = array(
    t('Master'),
    t('Læs mere'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('<a href="[field_main_links]">[field_main_links-title] &raquo;</a>'),
    t('Alle'),
    t('Block'),
    t('Read more links'),
  );
  $export['ting_basic_page_links'] = $view;

  $view = new view();
  $view->name = 'ting_community_entrances';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Ting: Community entrances';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'community-entrances';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Ord i ordforråd: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Felt: Ord i ordforråd: Beskrivelse af term */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Felt: Ord i ordforråd: Link */
  $handler->display->display_options['fields']['field_com_entrance_link']['id'] = 'field_com_entrance_link';
  $handler->display->display_options['fields']['field_com_entrance_link']['table'] = 'field_data_field_com_entrance_link';
  $handler->display->display_options['fields']['field_com_entrance_link']['field'] = 'field_com_entrance_link';
  $handler->display->display_options['fields']['field_com_entrance_link']['label'] = '';
  $handler->display->display_options['fields']['field_com_entrance_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_com_entrance_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_com_entrance_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_com_entrance_link']['type'] = 'link_plain';
  /* Felt: Ord i ordforråd: Ikon */
  $handler->display->display_options['fields']['field_com_entrance_icon']['id'] = 'field_com_entrance_icon';
  $handler->display->display_options['fields']['field_com_entrance_icon']['table'] = 'field_data_field_com_entrance_icon';
  $handler->display->display_options['fields']['field_com_entrance_icon']['field'] = 'field_com_entrance_icon';
  $handler->display->display_options['fields']['field_com_entrance_icon']['label'] = '';
  $handler->display->display_options['fields']['field_com_entrance_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_com_entrance_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_com_entrance_icon']['type'] = 'text_plain';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[field_com_entrance_link]">
<h3><span class="[field_com_entrance_icon]"></span> [name]</h3> 
<p>[description]</p>
</a>';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'com-entrance-item';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Sorteringskriterie: Ord i ordforråd: Vægt */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Filterkriterie: Ordforråd: Internt navn */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'community_entrances' => 'community_entrances',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Community Indgange';
  $translatables['ting_community_entrances'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('<a href="[field_com_entrance_link]">
<h3><span class="[field_com_entrance_icon]"></span> [name]</h3> 
<p>[description]</p>
</a>'),
    t('Block'),
    t('Community Indgange'),
  );
  $export['ting_community_entrances'] = $view;

  $view = new view();
  $view->name = 'ting_community_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ting: Community slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Ting: Community slideshow';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = 'NYHED // [created]';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'created';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd. F Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_class'] = 'read-more';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Læs mere &raquo;';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_article' => 'news_article',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['ting_community_slideshow'] = array(
    t('Master'),
    t('Ting: Community slideshow'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('NYHED // [created]'),
    t('Læs mere &raquo;'),
    t('Block'),
  );
  $export['ting_community_slideshow'] = $view;

  $view = new view();
  $view->name = 'ting_communiy_latest_activity';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ting: Communiy latest activity';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Nyheder';
  $handler->display->display_options['css_class'] = 'latest-activity';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<a href="/nyheder" class="btn-link">Gå til nyheder &raquo;</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="views-row">Ingen kommende begivenheder</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'date';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_article' => 'news_article',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';

  /* Display: Nyheder */
  $handler = $view->new_display('block', 'Nyheder', 'block_1');
  $handler->display->display_options['block_description'] = 'Community forside: Seneste nyheder';

  /* Display: Forumindlæg */
  $handler = $view->new_display('block', 'Forumindlæg', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Forumindlæg';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<a href="/forum" class="btn-link">Gå til forum &raquo;</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Forfatter af seneste kommentar */
  $handler->display->display_options['fields']['last_comment_name']['id'] = 'last_comment_name';
  $handler->display->display_options['fields']['last_comment_name']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_comment_name']['field'] = 'last_comment_name';
  $handler->display->display_options['fields']['last_comment_name']['label'] = '';
  $handler->display->display_options['fields']['last_comment_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['last_comment_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['last_comment_name']['alter']['text'] = 'Af: [last_comment_name]';
  $handler->display->display_options['fields']['last_comment_name']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = '[created] / [last_comment_name]';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'date';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['block_description'] = 'Community forside: Seneste forumindlæg';

  /* Display: Begivenheder */
  $handler = $view->new_display('block', 'Begivenheder', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Begivenheder';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<a href="/begivenheder" class="btn-link">Gå til events &raquo;</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Dato */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['element_wrapper_class'] = 'date';
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filterkriterie: Indhold: Dato - slutdato (field_event_date:value2) */
  $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '>';
  $handler->display->display_options['filters']['field_event_date_value2']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';
  $handler->display->display_options['block_description'] = 'Community forside: Seneste events';
  $translatables['ting_communiy_latest_activity'] = array(
    t('Master'),
    t('Nyheder'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('<a href="/nyheder" class="btn-link">Gå til nyheder &raquo;</a>'),
    t('<div class="views-row">Ingen kommende begivenheder</div>'),
    t('Type'),
    t('Community forside: Seneste nyheder'),
    t('Forumindlæg'),
    t('<a href="/forum" class="btn-link">Gå til forum &raquo;</a>'),
    t('Af: [last_comment_name]'),
    t('[created] / [last_comment_name]'),
    t('Community forside: Seneste forumindlæg'),
    t('Begivenheder'),
    t('<a href="/begivenheder" class="btn-link">Gå til events &raquo;</a>'),
    t('Community forside: Seneste events'),
  );
  $export['ting_communiy_latest_activity'] = $view;

  $view = new view();
  $view->name = 'ting_eva_primary_contacts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ting: EVA - primary contacts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Primære kontaktpersoner:';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Forbindelse: Entity Reference: Refereret entity */
  $handler->display->display_options['relationships']['field_pub_part_user_contact_target_id']['id'] = 'field_pub_part_user_contact_target_id';
  $handler->display->display_options['relationships']['field_pub_part_user_contact_target_id']['table'] = 'field_data_field_pub_part_user_contact';
  $handler->display->display_options['relationships']['field_pub_part_user_contact_target_id']['field'] = 'field_pub_part_user_contact_target_id';
  /* Felt: Bruger: Billede */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'field_pub_part_user_contact_target_id';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['picture']['element_wrapper_class'] = 'user-image';
  $handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'sidebar_profile_image';
  /* Felt: Bruger: Efternavn */
  $handler->display->display_options['fields']['field_user_lastname']['id'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['field'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['relationship'] = 'field_pub_part_user_contact_target_id';
  $handler->display->display_options['fields']['field_user_lastname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lastname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lastname']['element_label_colon'] = FALSE;
  /* Felt: Bruger: Jobtitel */
  $handler->display->display_options['fields']['field_user_job_title']['id'] = 'field_user_job_title';
  $handler->display->display_options['fields']['field_user_job_title']['table'] = 'field_data_field_user_job_title';
  $handler->display->display_options['fields']['field_user_job_title']['field'] = 'field_user_job_title';
  $handler->display->display_options['fields']['field_user_job_title']['relationship'] = 'field_pub_part_user_contact_target_id';
  $handler->display->display_options['fields']['field_user_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_user_job_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_job_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_job_title']['alter']['text'] = '<div class="jobtitle">[field_user_job_title]</div>';
  $handler->display->display_options['fields']['field_user_job_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_job_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_job_title']['hide_empty'] = TRUE;
  /* Felt: Bruger: Fornavn */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['relationship'] = 'field_pub_part_user_contact_target_id';
  $handler->display->display_options['fields']['field_user_firstname']['label'] = '';
  $handler->display->display_options['fields']['field_user_firstname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_firstname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_firstname']['alter']['text'] = '<div class="user-name">[field_user_firstname] [field_user_lastname]</div>
[field_user_job_title]';
  $handler->display->display_options['fields']['field_user_firstname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_firstname']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_firstname']['element_wrapper_class'] = 'user';
  $handler->display->display_options['fields']['field_user_firstname']['element_default_classes'] = FALSE;
  /* Felt: Bruger: Link */
  $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['table'] = 'users';
  $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['relationship'] = 'field_pub_part_user_contact_target_id';
  $handler->display->display_options['fields']['view_user']['label'] = '';
  $handler->display->display_options['fields']['view_user']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_user']['alter']['text'] = '[field_user_firstname] ';
  $handler->display->display_options['fields']['view_user']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_user']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['view_user']['element_wrapper_class'] = 'user';
  $handler->display->display_options['fields']['view_user']['element_default_classes'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Kontaktpersoner (field_pub_part_user_contact) */
  $handler->display->display_options['filters']['field_pub_part_user_contact_target_id']['id'] = 'field_pub_part_user_contact_target_id';
  $handler->display->display_options['filters']['field_pub_part_user_contact_target_id']['table'] = 'field_data_field_pub_part_user_contact';
  $handler->display->display_options['filters']['field_pub_part_user_contact_target_id']['field'] = 'field_pub_part_user_contact_target_id';
  $handler->display->display_options['filters']['field_pub_part_user_contact_target_id']['operator'] = 'not empty';

  /* Display: EVA Field */
  $handler = $view->new_display('entity_view', 'EVA Field', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'supplier',
    1 => 'public_partner',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['ting_eva_primary_contacts'] = array(
    t('Master'),
    t('Primære kontaktpersoner:'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Bruger entity refereret fra field_pub_part_user_contact'),
    t('<div class="jobtitle">[field_user_job_title]</div>'),
    t('<div class="user-name">[field_user_firstname] [field_user_lastname]</div>
[field_user_job_title]'),
    t('[field_user_firstname] '),
    t('Alle'),
    t('EVA Field'),
  );
  $export['ting_eva_primary_contacts'] = $view;

  $view = new view();
  $view->name = 'ting_event_attendees';
  $view->description = 'List attendees for a given event.';
  $view->tag = 'commons_events';
  $view->base_table = 'registration';
  $view->human_name = 'Commons Events - Event Attendee List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Deltagere';
  $handler->display->display_options['css_class'] = 'event-attendees';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '4';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Forbindelse: Tilmelding: Registration to Indholdselement */
  $handler->display->display_options['relationships']['registration_related_node']['id'] = 'registration_related_node';
  $handler->display->display_options['relationships']['registration_related_node']['table'] = 'registration';
  $handler->display->display_options['relationships']['registration_related_node']['field'] = 'registration_related_node';
  /* Forbindelse: Tilmelding: Bruger */
  $handler->display->display_options['relationships']['user_uid']['id'] = 'user_uid';
  $handler->display->display_options['relationships']['user_uid']['table'] = 'registration';
  $handler->display->display_options['relationships']['user_uid']['field'] = 'user_uid';
  $handler->display->display_options['relationships']['user_uid']['required'] = TRUE;
  /* Felt: Bruger: Billede */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'user_uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_wrapper_class'] = 'picture';
  $handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
  /* Felt: Bruger: Arbejdsgiver */
  $handler->display->display_options['fields']['field_user_employer']['id'] = 'field_user_employer';
  $handler->display->display_options['fields']['field_user_employer']['table'] = 'field_data_field_user_employer';
  $handler->display->display_options['fields']['field_user_employer']['field'] = 'field_user_employer';
  $handler->display->display_options['fields']['field_user_employer']['relationship'] = 'user_uid';
  $handler->display->display_options['fields']['field_user_employer']['label'] = '';
  $handler->display->display_options['fields']['field_user_employer']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_employer']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_employer']['type'] = 'text_plain';
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'user_uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]
<div class="employer">[field_user_employer]</div>';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'name';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'registration_related_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pane_title'] = 'Ting: Event attendees';
  $handler->display->display_options['pane_category']['name'] = 'Ting';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'null' => array(
      'type' => 'fixed',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => 'node',
      'label' => 'Global: Null',
    ),
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $translatables['ting_event_attendees'] = array(
    t('Master'),
    t('Deltagere'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('node from Registration'),
    t('Bruger'),
    t('[name]
<div class="employer">[field_user_employer]</div>'),
    t('Alle'),
    t('Content pane'),
    t('Ting: Event attendees'),
    t('Ting'),
  );
  $export['ting_event_attendees'] = $view;

  $view = new view();
  $view->name = 'ting_event_metadata';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ting: Event metadata';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Information om begivenhed';
  $handler->display->display_options['css_class'] = 'event-metadata';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Forbindelse: Registration Settings: Indholdselement to Registration Settings */
  $handler->display->display_options['relationships']['registration_settings_rel']['id'] = 'registration_settings_rel';
  $handler->display->display_options['relationships']['registration_settings_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['registration_settings_rel']['field'] = 'registration_settings_rel';
  $handler->display->display_options['relationships']['registration_settings_rel']['label'] = 'Indstillinger for tilmelding';
  /* Felt: Indhold: Dato */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_event_date']['element_class'] = 'content';
  $handler->display->display_options['fields']['field_event_date']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_event_date']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['field_event_date']['element_wrapper_class'] = 'date';
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Registration Settings: Close Date */
  $handler->display->display_options['fields']['close']['id'] = 'close';
  $handler->display->display_options['fields']['close']['table'] = 'registration_entity';
  $handler->display->display_options['fields']['close']['field'] = 'close';
  $handler->display->display_options['fields']['close']['relationship'] = 'registration_settings_rel';
  $handler->display->display_options['fields']['close']['element_type'] = 'span';
  $handler->display->display_options['fields']['close']['element_class'] = 'content';
  $handler->display->display_options['fields']['close']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['close']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['close']['element_wrapper_class'] = 'due-date';
  $handler->display->display_options['fields']['close']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['close']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['close']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['close']['date_format'] = 'long';
  $handler->display->display_options['fields']['close']['second_date_format'] = 'long';
  /* Felt: Indhold: Email */
  $handler->display->display_options['fields']['field_event_email']['id'] = 'field_event_email';
  $handler->display->display_options['fields']['field_event_email']['table'] = 'field_data_field_event_email';
  $handler->display->display_options['fields']['field_event_email']['field'] = 'field_event_email';
  $handler->display->display_options['fields']['field_event_email']['label'] = '';
  $handler->display->display_options['fields']['field_event_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_email']['type'] = 'email_plain';
  /* Felt: Indhold: Arrangør */
  $handler->display->display_options['fields']['field_attendee_organizer']['id'] = 'field_attendee_organizer';
  $handler->display->display_options['fields']['field_attendee_organizer']['table'] = 'field_data_field_attendee_organizer';
  $handler->display->display_options['fields']['field_attendee_organizer']['field'] = 'field_attendee_organizer';
  $handler->display->display_options['fields']['field_attendee_organizer']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_attendee_organizer']['element_class'] = 'content';
  $handler->display->display_options['fields']['field_attendee_organizer']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_attendee_organizer']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['field_attendee_organizer']['element_wrapper_class'] = 'organizer field';
  $handler->display->display_options['fields']['field_attendee_organizer']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_attendee_organizer']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_attendee_organizer']['empty_zero'] = TRUE;
  /* Felt: Indhold: Kontaktperson */
  $handler->display->display_options['fields']['field_event_contact_name']['id'] = 'field_event_contact_name';
  $handler->display->display_options['fields']['field_event_contact_name']['table'] = 'field_data_field_event_contact_name';
  $handler->display->display_options['fields']['field_event_contact_name']['field'] = 'field_event_contact_name';
  $handler->display->display_options['fields']['field_event_contact_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_contact_name']['alter']['text'] = '<a href="mailto:[field_event_email]">[field_event_contact_name]</a>';
  $handler->display->display_options['fields']['field_event_contact_name']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_event_contact_name']['element_class'] = 'content';
  $handler->display->display_options['fields']['field_event_contact_name']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_event_contact_name']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['field_event_contact_name']['element_wrapper_class'] = 'contact';
  $handler->display->display_options['fields']['field_event_contact_name']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Pris */
  $handler->display->display_options['fields']['field_event_price']['id'] = 'field_event_price';
  $handler->display->display_options['fields']['field_event_price']['table'] = 'field_data_field_event_price';
  $handler->display->display_options['fields']['field_event_price']['field'] = 'field_event_price';
  $handler->display->display_options['fields']['field_event_price']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_event_price']['element_class'] = 'content';
  $handler->display->display_options['fields']['field_event_price']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_event_price']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['field_event_price']['element_wrapper_class'] = 'price';
  $handler->display->display_options['fields']['field_event_price']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_price']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_event_price']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_event_price']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Felt: Registration Settings: Slots Total */
  $handler->display->display_options['fields']['capacity_total']['id'] = 'capacity_total';
  $handler->display->display_options['fields']['capacity_total']['table'] = 'registration_entity';
  $handler->display->display_options['fields']['capacity_total']['field'] = 'capacity_total';
  $handler->display->display_options['fields']['capacity_total']['relationship'] = 'registration_settings_rel';
  $handler->display->display_options['fields']['capacity_total']['label'] = 'Antal pladser';
  $handler->display->display_options['fields']['capacity_total']['element_type'] = 'span';
  $handler->display->display_options['fields']['capacity_total']['element_class'] = 'content';
  $handler->display->display_options['fields']['capacity_total']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['capacity_total']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['capacity_total']['element_wrapper_class'] = 'spots';
  $handler->display->display_options['fields']['capacity_total']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['capacity_total']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['capacity_total']['empty_zero'] = TRUE;
  /* Felt: Registration Settings: Spaces used */
  $handler->display->display_options['fields']['capacity_used']['id'] = 'capacity_used';
  $handler->display->display_options['fields']['capacity_used']['table'] = 'node';
  $handler->display->display_options['fields']['capacity_used']['field'] = 'capacity_used';
  $handler->display->display_options['fields']['capacity_used']['label'] = 'Antal tilmeldte';
  $handler->display->display_options['fields']['capacity_used']['element_type'] = 'span';
  $handler->display->display_options['fields']['capacity_used']['element_class'] = 'content';
  $handler->display->display_options['fields']['capacity_used']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['capacity_used']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['capacity_used']['element_wrapper_class'] = 'spots-used';
  $handler->display->display_options['fields']['capacity_used']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['capacity_used']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['capacity_used']['empty_zero'] = TRUE;
  /* Felt: Indhold: Adresse */
  $handler->display->display_options['fields']['field_event_address']['id'] = 'field_event_address';
  $handler->display->display_options['fields']['field_event_address']['table'] = 'field_data_field_event_address';
  $handler->display->display_options['fields']['field_event_address']['field'] = 'field_event_address';
  $handler->display->display_options['fields']['field_event_address']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_event_address']['element_class'] = 'content';
  $handler->display->display_options['fields']['field_event_address']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_event_address']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['field_event_address']['element_wrapper_class'] = 'address';
  $handler->display->display_options['fields']['field_event_address']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_address']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_event_address']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_event_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_event_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Felt: Indhold: Tilmelding */
  $handler->display->display_options['fields']['field_event_registration']['id'] = 'field_event_registration';
  $handler->display->display_options['fields']['field_event_registration']['table'] = 'field_data_field_event_registration';
  $handler->display->display_options['fields']['field_event_registration']['field'] = 'field_event_registration';
  $handler->display->display_options['fields']['field_event_registration']['label'] = '';
  $handler->display->display_options['fields']['field_event_registration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_registration']['element_wrapper_class'] = 'register';
  $handler->display->display_options['fields']['field_event_registration']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_registration']['type'] = 'registration_link';
  $handler->display->display_options['fields']['field_event_registration']['settings'] = array(
    'label' => ' Tilmeld',
  );
  /* Felt: Global: Vis */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['element_wrapper_class'] = 'unregister';
  $handler->display->display_options['fields']['view']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'ting_active_registration';
  $handler->display->display_options['fields']['view']['arguments'] = '!1';
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'Ting: Event metadata';
  $handler->display->display_options['pane_category']['name'] = 'Ting';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Nid',
    ),
  );
  $translatables['ting_event_metadata'] = array(
    t('Master'),
    t('Information om begivenhed'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Indstillinger for tilmelding'),
    t('Dato'),
    t('Close Date'),
    t('Arrangør'),
    t('Kontaktperson'),
    t('<a href="mailto:[field_event_email]">[field_event_contact_name]</a>'),
    t('Pris'),
    t('Antal pladser'),
    t('Antal tilmeldte'),
    t('.'),
    t(','),
    t('Adresse'),
    t('Alle'),
    t('Content pane'),
    t('Ting: Event metadata'),
    t('Ting'),
  );
  $export['ting_event_metadata'] = $view;

  $view = new view();
  $view->name = 'ting_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ting: Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Kommende begivenheder';
  $handler->display->display_options['css_class'] = 'events-overview';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Avancerede indstillinger',
    ),
    'field_main_category_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Alle',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p><em>Ingen resultater.</em></p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Felt: Indhold: Dato */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'weekday_long',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Dato */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'day',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Dato */
  $handler->display->display_options['fields']['field_event_date_2']['id'] = 'field_event_date_2';
  $handler->display->display_options['fields']['field_event_date_2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_2']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_2']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_2']['settings'] = array(
    'format_type' => 'month_short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="week-day">[field_event_date]</span>
<span class="month-day">[field_event_date_1]</span>
<span class="month">[field_event_date_2]</span>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'date';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Brødtekst */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '175';
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Læs mere';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'resume';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Felt: Indhold: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_class'] = 'read-more';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Læs mere &raquo;';
  /* Sorteringskriterie: Indhold: Dato -  startdato (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filterkriterie: Indhold: Dato -  startdato (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_event_date_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  /* Filterkriterie: Indhold: Kategori (field_main_category) */
  $handler->display->display_options['filters']['field_main_category_tid']['id'] = 'field_main_category_tid';
  $handler->display->display_options['filters']['field_main_category_tid']['table'] = 'field_data_field_main_category';
  $handler->display->display_options['filters']['field_main_category_tid']['field'] = 'field_main_category_tid';
  $handler->display->display_options['filters']['field_main_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_main_category_tid']['expose']['operator_id'] = 'field_main_category_tid_op';
  $handler->display->display_options['filters']['field_main_category_tid']['expose']['operator'] = 'field_main_category_tid_op';
  $handler->display->display_options['filters']['field_main_category_tid']['expose']['identifier'] = 'field_main_category_tid';
  $handler->display->display_options['filters']['field_main_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_main_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_main_category_tid']['vocabulary'] = 'content_categories';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'begivenheder';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Events';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['ting_events'] = array(
    t('Master'),
    t('Kommende begivenheder'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Vælg et filter og klik på Anvend for at se resultater'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('<p><em>Ingen resultater.</em></p>'),
    t('<span class="week-day">[field_event_date]</span>
<span class="month-day">[field_event_date_1]</span>
<span class="month">[field_event_date_2]</span>'),
    t('Læs mere'),
    t('Læs mere &raquo;'),
    t('Page'),
  );
  $export['ting_events'] = $view;

  $view = new view();
  $view->name = 'ting_events_popular';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ting: Events popular';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mest populære events';
  $handler->display->display_options['css_class'] = 'events-popular';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Forbindelse: Registration Settings: Indholdselement to Registration Settings */
  $handler->display->display_options['relationships']['registration_settings_rel']['id'] = 'registration_settings_rel';
  $handler->display->display_options['relationships']['registration_settings_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['registration_settings_rel']['field'] = 'registration_settings_rel';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Dato */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['element_wrapper_class'] = 'date';
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Registration Settings: Spaces used */
  $handler->display->display_options['fields']['capacity_used']['id'] = 'capacity_used';
  $handler->display->display_options['fields']['capacity_used']['table'] = 'node';
  $handler->display->display_options['fields']['capacity_used']['field'] = 'capacity_used';
  $handler->display->display_options['fields']['capacity_used']['label'] = '';
  $handler->display->display_options['fields']['capacity_used']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['capacity_used']['element_wrapper_class'] = 'participants';
  $handler->display->display_options['fields']['capacity_used']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['capacity_used']['suffix'] = ' tilmeldte';
  /* Sorteringskriterie: Indholdsstatistik: Totale visninger */
  $handler->display->display_options['sorts']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['order'] = 'DESC';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Mest populære events';
  $translatables['ting_events_popular'] = array(
    t('Master'),
    t('Mest populære events'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('node being the Registration'),
    t('.'),
    t(','),
    t(' tilmeldte'),
    t('Block'),
  );
  $export['ting_events_popular'] = $view;

  $view = new view();
  $view->name = 'ting_group_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ting: Group Content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'group-content';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p><em>Der er endnu ikke oprettet indhold af denne type.</em></p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Oprettet';
  $handler->display->display_options['fields']['created']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'created';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd. M, Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Felt: Indhold: Brødtekst */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'resume';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'post' => 'post',
  );

  /* Display: Blog */
  $handler = $view->new_display('panel_pane', 'Blog', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'Group Blog';
  $handler->display->display_options['pane_category']['name'] = 'Ting';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Events */
  $handler = $view->new_display('panel_pane', 'Events', 'panel_pane_2');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['pane_title'] = 'Group Events';
  $handler->display->display_options['pane_category']['name'] = 'Ting';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Documents */
  $handler = $view->new_display('panel_pane', 'Documents', 'panel_pane_3');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['pane_title'] = 'Group Documents';
  $handler->display->display_options['pane_category']['name'] = 'Ting';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Wikis */
  $handler = $view->new_display('panel_pane', 'Wikis', 'panel_pane_4');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'wiki' => 'wiki',
  );
  $handler->display->display_options['pane_title'] = 'Group Wikis';
  $handler->display->display_options['pane_category']['name'] = 'Ting';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $translatables['ting_group_content'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('<p><em>Der er endnu ikke oprettet indhold af denne type.</em></p>'),
    t('Oprettet'),
    t('Alle'),
    t('Blog'),
    t('Group Blog'),
    t('Ting'),
    t('Events'),
    t('Group Events'),
    t('Documents'),
    t('Group Documents'),
    t('Wikis'),
    t('Group Wikis'),
  );
  $export['ting_group_content'] = $view;

  $view = new view();
  $view->name = 'ting_group_members';
  $view->description = 'Newest group members.';
  $view->tag = 'og';
  $view->base_table = 'users';
  $view->human_name = 'Ting: Group Members';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Medlemmer';
  $handler->display->display_options['css_class'] = 'group-members';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Forbindelse: OG membership: OG membership from Bruger */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Felt: Bruger: Billede */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_wrapper_class'] = 'picture';
  $handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'avatar_thumbnail';
  /* Felt: Bruger: Arbejdsgiver */
  $handler->display->display_options['fields']['field_user_employer']['id'] = 'field_user_employer';
  $handler->display->display_options['fields']['field_user_employer']['table'] = 'field_data_field_user_employer';
  $handler->display->display_options['fields']['field_user_employer']['field'] = 'field_user_employer';
  $handler->display->display_options['fields']['field_user_employer']['label'] = '';
  $handler->display->display_options['fields']['field_user_employer']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_employer']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['field_user_employer']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_user_employer']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_user_employer']['element_label_colon'] = FALSE;
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]
<div class="employer">[field_user_employer]</div>';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'user-name';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Sorteringskriterie: OG membership: Created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'og_membership';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['gid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['gid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['gid']['title'] = '%1 members';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
  /* Filterkriterie: Bruger: Aktiv */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filterkriterie: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'Ting: Group Members';
  $handler->display->display_options['pane_category']['name'] = 'Ting';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'gid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'OG membership: Group ID',
    ),
  );
  $translatables['ting_group_members'] = array(
    t('Defaults'),
    t('Medlemmer'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('OG membership from user'),
    t('[name]
<div class="employer">[field_user_employer]</div>'),
    t('Alle'),
    t('%1 members'),
    t('Content pane'),
    t('Ting: Group Members'),
    t('Ting'),
  );
  $export['ting_group_members'] = $view;

  $view = new view();
  $view->name = 'ting_group_messages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'message';
  $view->human_name = 'Ting: Group messages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Seneste aktivitet';
  $handler->display->display_options['css_class'] = 'messages-user';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Forbindelse: Entity Reference: Refereret entity */
  $handler->display->display_options['relationships']['field_target_node_target_id']['id'] = 'field_target_node_target_id';
  $handler->display->display_options['relationships']['field_target_node_target_id']['table'] = 'field_data_field_target_node';
  $handler->display->display_options['relationships']['field_target_node_target_id']['field'] = 'field_target_node_target_id';
  /* Forbindelse: OG membership: OG membership from Indholdselement */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['relationship'] = 'field_target_node_target_id';
  /* Felt: Meddelelse: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'message';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['type']['alter']['text'] = '<div class="[type]"></div>';
  $handler->display->display_options['fields']['type']['element_type'] = '0';
  $handler->display->display_options['fields']['type']['element_label_type'] = '0';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['type']['element_wrapper_class'] = 'message-icon';
  $handler->display->display_options['fields']['type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Felt: Meddelelse: Rendered Meddelelse */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_message';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['element_wrapper_class'] = 'message';
  $handler->display->display_options['fields']['rendered_entity']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 1;
  /* Felt: Meddelelse: Timestamp */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'message';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['element_wrapper_class'] = 'created';
  $handler->display->display_options['fields']['timestamp']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
  /* Sorteringskriterie: Meddelelse: Timestamp */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'message';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* Kontekstuelt filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['gid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  /* Filterkriterie: Meddelelse: Message category */
  $handler->display->display_options['filters']['type_category']['id'] = 'type_category';
  $handler->display->display_options['filters']['type_category']['table'] = 'message';
  $handler->display->display_options['filters']['type_category']['field'] = 'type_category';
  $handler->display->display_options['filters']['type_category']['value'] = array(
    'message_type' => 'message_type',
  );
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_target_node_target_id';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'Ting: Group messages';
  $handler->display->display_options['pane_category']['name'] = 'Ting';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'gid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'OG membership: Group ID',
    ),
  );
  $translatables['ting_group_messages'] = array(
    t('Master'),
    t('Seneste aktivitet'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Indhold entity refereret fra field_target_node'),
    t('OG membership from node'),
    t('<div class="[type]"></div>'),
    t('Alle'),
    t('Content pane'),
    t('Ting: Group messages'),
    t('Ting'),
  );
  $export['ting_group_messages'] = $view;

  $view = new view();
  $view->name = 'ting_latest_group_content_all_groups';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ting: Latest group content all groups';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Seneste projekt indhold';
  $handler->display->display_options['css_class'] = 'latest-group-content';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Forbindelse: Indhold: Forfatter */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Forbindelse: OG membership: OG membership from Indholdselement */
  $handler->display->display_options['relationships']['og_membership_rel_1']['id'] = 'og_membership_rel_1';
  $handler->display->display_options['relationships']['og_membership_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel_1']['field'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel_1']['required'] = TRUE;
  /* Forbindelse: OG membership: Group Indholdselement from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['relationship'] = 'og_membership_rel_1';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
  /* Felt: Indhold: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = '';
  $handler->display->display_options['fields']['og_group_ref']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['alter']['text'] = '[og_group_ref] / <span>[type]</span>';
  $handler->display->display_options['fields']['og_group_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['element_wrapper_class'] = 'group';
  $handler->display->display_options['fields']['og_group_ref']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Oprettet af';
  $handler->display->display_options['fields']['name']['element_type'] = 'span';
  $handler->display->display_options['fields']['name']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'author';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'created';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  /* Filterkriterie: Indhold: Groups audience (og_group_ref) */
  $handler->display->display_options['filters']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['operator'] = 'not empty';

  /* Display: Projects */
  $handler = $view->new_display('block', 'Projects', 'block');
  $handler->display->display_options['block_description'] = 'Latest project content all projects';

  /* Display: Teams */
  $handler = $view->new_display('block', 'Teams', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Seneste team indhold';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Groups audience (og_group_ref) */
  $handler->display->display_options['filters']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['og_group_ref_target_id']['group'] = 1;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['type']['value'] = array(
    'team' => 'team',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Latest team content all teams';
  $translatables['ting_latest_group_content_all_groups'] = array(
    t('Master'),
    t('Seneste projekt indhold'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('forfatter'),
    t('OG membership from node'),
    t('Group node from OG membership'),
    t('[og_group_ref] / <span>[type]</span>'),
    t('Oprettet af'),
    t('Projects'),
    t('Latest project content all projects'),
    t('Teams'),
    t('Seneste team indhold'),
    t('Latest team content all teams'),
  );
  $export['ting_latest_group_content_all_groups'] = $view;

  $view = new view();
  $view->name = 'ting_latest_products';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ting: Latest products';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Seneste produkter';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Forbindelse: Indhold: Forfatter */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Felt: Indhold: Billede */
  $handler->display->display_options['fields']['field_product_image']['id'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['table'] = 'field_data_field_product_image';
  $handler->display->display_options['fields']['field_product_image']['field'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['label'] = '';
  $handler->display->display_options['fields']['field_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_image']['element_wrapper_class'] = 'image';
  $handler->display->display_options['fields']['field_product_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_image']['settings'] = array(
    'image_style' => 'product_thumbnail',
    'image_link' => 'content',
  );
  /* Felt: Indhold: Kategori */
  $handler->display->display_options['fields']['field_product_category']['id'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['fields']['field_product_category']['field'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['label'] = '';
  $handler->display->display_options['fields']['field_product_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_category']['element_wrapper_class'] = 'category';
  $handler->display->display_options['fields']['field_product_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_product_category']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_product_category']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_product_category']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Udgivet af';
  $handler->display->display_options['fields']['name']['element_type'] = 'span';
  $handler->display->display_options['fields']['name']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'author';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'created';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['ting_latest_products'] = array(
    t('Master'),
    t('Seneste produkter'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('forfatter'),
    t('Udgivet af'),
    t('Block'),
  );
  $export['ting_latest_products'] = $view;

  $view = new view();
  $view->name = 'ting_members';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Ting: Members';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Medlemmer';
  $handler->display->display_options['css_class'] = 'members-overview';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Søg';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '18';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>Ingen resultater.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Felt: Bruger: Billede */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_wrapper_class'] = 'image';
  $handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['picture']['imagecache_preset'] = 'avatar_large';
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Sorteringskriterie: Bruger: Fornavn (field_user_firstname) */
  $handler->display->display_options['sorts']['field_user_firstname_value']['id'] = 'field_user_firstname_value';
  $handler->display->display_options['sorts']['field_user_firstname_value']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['sorts']['field_user_firstname_value']['field'] = 'field_user_firstname_value';
  /* Filterkriterie: Bruger: Aktiv */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '1';
  /* Filterkriterie: Global: Kombinér felter filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'name' => 'name',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'medlemmer';
  $translatables['ting_members'] = array(
    t('Master'),
    t('Medlemmer'),
    t('mere'),
    t('Søg'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('<p>Ingen resultater.</p>'),
    t('Page'),
  );
  $export['ting_members'] = $view;

  $view = new view();
  $view->name = 'ting_news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ting: News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Nyheder';
  $handler->display->display_options['css_class'] = 'news-overview';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Avancerede indstillinger',
    ),
    'field_main_category_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Alle',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p><em>Ingen resultater</em></p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Forbindelse: Indhold: Forfatter */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Forbindelse: Kommentar: Nodens kommentarer */
  $handler->display->display_options['relationships']['cid']['id'] = 'cid';
  $handler->display->display_options['relationships']['cid']['table'] = 'node';
  $handler->display->display_options['relationships']['cid']['field'] = 'cid';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'created';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd. F, Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'author';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Kommentarantal */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Oprettet: [created] / Af: [name] / Kommentarer: [comment_count]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'meta';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Billede */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['element_wrapper_class'] = 'image';
  $handler->display->display_options['fields']['field_main_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'image_style' => 'node_banner',
    'image_link' => 'content',
  );
  /* Felt: Indhold: Brødtekst */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'resume';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Felt: Indhold: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_class'] = 'read-more';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Læs mere';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_article' => 'news_article',
  );
  /* Filterkriterie: Indhold: Kategori (field_main_category) */
  $handler->display->display_options['filters']['field_main_category_tid']['id'] = 'field_main_category_tid';
  $handler->display->display_options['filters']['field_main_category_tid']['table'] = 'field_data_field_main_category';
  $handler->display->display_options['filters']['field_main_category_tid']['field'] = 'field_main_category_tid';
  $handler->display->display_options['filters']['field_main_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_main_category_tid']['expose']['operator_id'] = 'field_main_category_tid_op';
  $handler->display->display_options['filters']['field_main_category_tid']['expose']['operator'] = 'field_main_category_tid_op';
  $handler->display->display_options['filters']['field_main_category_tid']['expose']['identifier'] = 'field_main_category_tid';
  $handler->display->display_options['filters']['field_main_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_main_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_main_category_tid']['vocabulary'] = 'content_categories';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'nyheder';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Nyheder';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $translatables['ting_news'] = array(
    t('Master'),
    t('Nyheder'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Vælg et filter og klik på Anvend for at se resultater'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('<p><em>Ingen resultater</em></p>'),
    t('forfatter'),
    t('Kommentarer'),
    t('.'),
    t(','),
    t('Oprettet: [created] / Af: [name] / Kommentarer: [comment_count]'),
    t('Læs mere'),
    t('Page'),
  );
  $export['ting_news'] = $view;

  $view = new view();
  $view->name = 'ting_news_popular';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ting: News popular';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mest populære nyheder';
  $handler->display->display_options['css_class'] = 'news-popular';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Forbindelse: Registration Settings: Indholdselement to Registration Settings */
  $handler->display->display_options['relationships']['registration_settings_rel']['id'] = 'registration_settings_rel';
  $handler->display->display_options['relationships']['registration_settings_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['registration_settings_rel']['field'] = 'registration_settings_rel';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'date';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Felt: Indhold: Kommentarantal */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['element_wrapper_class'] = 'comments';
  $handler->display->display_options['fields']['comment_count']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['separator'] = '';
  $handler->display->display_options['fields']['comment_count']['suffix'] = ' kommentarer';
  /* Sorteringskriterie: Indholdsstatistik: Totale visninger */
  $handler->display->display_options['sorts']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['order'] = 'DESC';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_article' => 'news_article',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Mest populære nyheder';
  $translatables['ting_news_popular'] = array(
    t('Master'),
    t('Mest populære nyheder'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('node being the Registration'),
    t('.'),
    t(' kommentarer'),
    t('Block'),
  );
  $export['ting_news_popular'] = $view;

  $view = new view();
  $view->name = 'ting_product_metadata';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ting: Product metadata';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Om produktet';
  $handler->display->display_options['css_class'] = 'product-metadata';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Indhold: Version */
  $handler->display->display_options['fields']['field_product_version']['id'] = 'field_product_version';
  $handler->display->display_options['fields']['field_product_version']['table'] = 'field_data_field_product_version';
  $handler->display->display_options['fields']['field_product_version']['field'] = 'field_product_version';
  $handler->display->display_options['fields']['field_product_version']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_product_version']['element_label_type'] = 'strong';
  /* Felt: Indhold: Licens */
  $handler->display->display_options['fields']['field_product_license']['id'] = 'field_product_license';
  $handler->display->display_options['fields']['field_product_license']['table'] = 'field_data_field_product_license';
  $handler->display->display_options['fields']['field_product_license']['field'] = 'field_product_license';
  $handler->display->display_options['fields']['field_product_license']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_product_license']['element_label_type'] = 'strong';
  /* Felt: Indhold: Download */
  $handler->display->display_options['fields']['field_product_download']['id'] = 'field_product_download';
  $handler->display->display_options['fields']['field_product_download']['table'] = 'field_data_field_product_download';
  $handler->display->display_options['fields']['field_product_download']['field'] = 'field_product_download';
  $handler->display->display_options['fields']['field_product_download']['label'] = 'Link til produkt';
  $handler->display->display_options['fields']['field_product_download']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_product_download']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_product_download']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_product_download']['click_sort_column'] = 'url';
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );

  /* Display: Blok */
  $handler = $view->new_display('block', 'Blok', 'block_1');
  $handler->display->display_options['block_description'] = 'Product metadata';
  $translatables['ting_product_metadata'] = array(
    t('Master'),
    t('Om produktet'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Version'),
    t('Licens'),
    t('Link til produkt'),
    t('Alle'),
    t('Blok'),
    t('Product metadata'),
  );
  $export['ting_product_metadata'] = $view;

  $view = new view();
  $view->name = 'ting_product_partners';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ting: Product partners/suppliers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tilknyttede partnere';
  $handler->display->display_options['css_class'] = 'product-cooperators';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Indhold: Offentlige partnere */
  $handler->display->display_options['fields']['field_main_partners']['id'] = 'field_main_partners';
  $handler->display->display_options['fields']['field_main_partners']['table'] = 'field_data_field_main_partners';
  $handler->display->display_options['fields']['field_main_partners']['field'] = 'field_main_partners';
  $handler->display->display_options['fields']['field_main_partners']['label'] = '';
  $handler->display->display_options['fields']['field_main_partners']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_partners']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_main_partners']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_main_partners']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_main_partners']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_main_partners']['multi_type'] = 'ul';
  /* Sorteringskriterie: Indhold: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filterkriterie: Indhold: Offentlige partnere (field_main_partners) */
  $handler->display->display_options['filters']['field_main_partners_target_id']['id'] = 'field_main_partners_target_id';
  $handler->display->display_options['filters']['field_main_partners_target_id']['table'] = 'field_data_field_main_partners';
  $handler->display->display_options['filters']['field_main_partners_target_id']['field'] = 'field_main_partners_target_id';
  $handler->display->display_options['filters']['field_main_partners_target_id']['operator'] = 'not empty';

  /* Display: Partners */
  $handler = $view->new_display('block', 'Partners', 'block');
  $handler->display->display_options['block_description'] = 'Product partners';

  /* Display: Suppliers */
  $handler = $view->new_display('block', 'Suppliers', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Tilknyttede leverandører';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Leverandører */
  $handler->display->display_options['fields']['field_main_suppliers']['id'] = 'field_main_suppliers';
  $handler->display->display_options['fields']['field_main_suppliers']['table'] = 'field_data_field_main_suppliers';
  $handler->display->display_options['fields']['field_main_suppliers']['field'] = 'field_main_suppliers';
  $handler->display->display_options['fields']['field_main_suppliers']['label'] = '';
  $handler->display->display_options['fields']['field_main_suppliers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_suppliers']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_main_suppliers']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_main_suppliers']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_main_suppliers']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_main_suppliers']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filterkriterie: Indhold: Leverandører (field_main_suppliers) */
  $handler->display->display_options['filters']['field_main_suppliers_target_id']['id'] = 'field_main_suppliers_target_id';
  $handler->display->display_options['filters']['field_main_suppliers_target_id']['table'] = 'field_data_field_main_suppliers';
  $handler->display->display_options['filters']['field_main_suppliers_target_id']['field'] = 'field_main_suppliers_target_id';
  $handler->display->display_options['filters']['field_main_suppliers_target_id']['operator'] = 'not empty';
  $handler->display->display_options['block_description'] = 'Product suppliers';
  $translatables['ting_product_partners'] = array(
    t('Master'),
    t('Tilknyttede partnere'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Alle'),
    t('Partners'),
    t('Product partners'),
    t('Suppliers'),
    t('Tilknyttede leverandører'),
    t('Product suppliers'),
  );
  $export['ting_product_partners'] = $view;

  $view = new view();
  $view->name = 'ting_product_related_project';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ting: Product related project';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tilknyttet projektrum';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Forbindelse: Entity Reference: Refereret entity */
  $handler->display->display_options['relationships']['field_product_project_target_id']['id'] = 'field_product_project_target_id';
  $handler->display->display_options['relationships']['field_product_project_target_id']['table'] = 'field_data_field_product_project';
  $handler->display->display_options['relationships']['field_product_project_target_id']['field'] = 'field_product_project_target_id';
  $handler->display->display_options['relationships']['field_product_project_target_id']['label'] = 'Project';
  $handler->display->display_options['relationships']['field_product_project_target_id']['required'] = TRUE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filterkriterie: Indhold: Projekt (field_product_project) */
  $handler->display->display_options['filters']['field_product_project_target_id']['id'] = 'field_product_project_target_id';
  $handler->display->display_options['filters']['field_product_project_target_id']['table'] = 'field_data_field_product_project';
  $handler->display->display_options['filters']['field_product_project_target_id']['field'] = 'field_product_project_target_id';
  $handler->display->display_options['filters']['field_product_project_target_id']['operator'] = 'not empty';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Product related project';
  $translatables['ting_product_related_project'] = array(
    t('Master'),
    t('Tilknyttet projektrum'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Project'),
    t('Alle'),
    t('Block'),
    t('Product related project'),
  );
  $export['ting_product_related_project'] = $view;

  $view = new view();
  $view->name = 'ting_products';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ting: Products';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'product-overview';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'Se alle produkter';
  $handler->display->display_options['link_display'] = 'page';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Søg';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Avancerede indstillinger',
    ),
    'combine' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_product_category_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Vælg kategori',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 id="page-title">Produkter</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p><em>Ingen resultater.</em></p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span class=\'ting-icon-file-xml\'></span> <span class=\'text\'>[title]</span>';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '90';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Offentlige partnere */
  $handler->display->display_options['fields']['field_main_partners']['id'] = 'field_main_partners';
  $handler->display->display_options['fields']['field_main_partners']['table'] = 'field_data_field_main_partners';
  $handler->display->display_options['fields']['field_main_partners']['field'] = 'field_main_partners';
  $handler->display->display_options['fields']['field_main_partners']['label'] = '';
  $handler->display->display_options['fields']['field_main_partners']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_partners']['element_wrapper_class'] = 'partners';
  $handler->display->display_options['fields']['field_main_partners']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_main_partners']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_main_partners']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_main_partners']['delta_offset'] = '0';
  /* Felt: Indhold: Billede */
  $handler->display->display_options['fields']['field_product_image']['id'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['table'] = 'field_data_field_product_image';
  $handler->display->display_options['fields']['field_product_image']['field'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['label'] = '';
  $handler->display->display_options['fields']['field_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_image']['element_wrapper_class'] = 'image';
  $handler->display->display_options['fields']['field_product_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_image']['settings'] = array(
    'image_style' => 'project_large',
    'image_link' => 'content',
  );
  /* Felt: Indhold: Statement */
  $handler->display->display_options['fields']['field_product_resume']['id'] = 'field_product_resume';
  $handler->display->display_options['fields']['field_product_resume']['table'] = 'field_data_field_product_resume';
  $handler->display->display_options['fields']['field_product_resume']['field'] = 'field_product_resume';
  $handler->display->display_options['fields']['field_product_resume']['label'] = '';
  $handler->display->display_options['fields']['field_product_resume']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_product_resume']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_product_resume']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_product_resume']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_resume']['element_wrapper_class'] = 'resume';
  $handler->display->display_options['fields']['field_product_resume']['element_default_classes'] = FALSE;
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'meta';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Sorteringskriterie: Indhold: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Indhold: Kategori (field_product_category) */
  $handler->display->display_options['filters']['field_product_category_tid']['id'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['filters']['field_product_category_tid']['field'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_product_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['operator_id'] = 'field_product_category_tid_op';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['label'] = 'Filtrér produkter:';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['operator'] = 'field_product_category_tid_op';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['identifier'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_product_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_category_tid']['vocabulary'] = 'product_categories';
  /* Filterkriterie: Global: Kombinér felter filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'field_product_resume' => 'field_product_resume',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'produkter';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Produkter';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Forside blok */
  $handler = $view->new_display('block', 'Forside blok', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="produkter" class="btn-link">Se alle produkter</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $translatables['ting_products'] = array(
    t('Master'),
    t('Se alle produkter'),
    t('Søg'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Vælg et filter og klik på Anvend for at se resultater'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('<h2 id="page-title">Produkter</h2>'),
    t('<p><em>Ingen resultater.</em></p>'),
    t('<span class=\'ting-icon-file-xml\'></span> <span class=\'text\'>[title]</span>'),
    t('Filtrér produkter:'),
    t('Page'),
    t('mere'),
    t('Forside blok'),
    t('<a href="produkter" class="btn-link">Se alle produkter</a>'),
  );
  $export['ting_products'] = $view;

  $view = new view();
  $view->name = 'ting_project_ressources';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ting: Project ressources';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Ressourcer';
  $handler->display->display_options['css_class'] = 'proejct-ressources';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Indhold: Filer */
  $handler->display->display_options['fields']['field_project_files']['id'] = 'field_project_files';
  $handler->display->display_options['fields']['field_project_files']['table'] = 'field_data_field_project_files';
  $handler->display->display_options['fields']['field_project_files']['field'] = 'field_project_files';
  $handler->display->display_options['fields']['field_project_files']['label'] = '';
  $handler->display->display_options['fields']['field_project_files']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_files']['element_wrapper_class'] = 'files';
  $handler->display->display_options['fields']['field_project_files']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_project_files']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_project_files']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_project_files']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_files']['type'] = 'file_table';
  $handler->display->display_options['fields']['field_project_files']['delta_offset'] = '0';
  /* Felt: Indhold: Github */
  $handler->display->display_options['fields']['field_project_github']['id'] = 'field_project_github';
  $handler->display->display_options['fields']['field_project_github']['table'] = 'field_data_field_project_github';
  $handler->display->display_options['fields']['field_project_github']['field'] = 'field_project_github';
  $handler->display->display_options['fields']['field_project_github']['label'] = '';
  $handler->display->display_options['fields']['field_project_github']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_project_github']['alter']['text'] = '<a href="[field_project_github-url] ">Download på Github</a>';
  $handler->display->display_options['fields']['field_project_github']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_github']['element_wrapper_class'] = 'github';
  $handler->display->display_options['fields']['field_project_github']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_project_github']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_project_github']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_project_github']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_project_github']['type'] = 'link_plain';
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'project' => 'project',
    'team' => 'team',
  );
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
    'team' => 'team',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Indhold: Github (field_project_github:url) */
  $handler->display->display_options['filters']['field_project_github_url']['id'] = 'field_project_github_url';
  $handler->display->display_options['filters']['field_project_github_url']['table'] = 'field_data_field_project_github';
  $handler->display->display_options['filters']['field_project_github_url']['field'] = 'field_project_github_url';
  $handler->display->display_options['filters']['field_project_github_url']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_project_github_url']['group'] = 2;
  /* Filterkriterie: Indhold: Filer (field_project_files:fid) */
  $handler->display->display_options['filters']['field_project_files_fid']['id'] = 'field_project_files_fid';
  $handler->display->display_options['filters']['field_project_files_fid']['table'] = 'field_data_field_project_files';
  $handler->display->display_options['filters']['field_project_files_fid']['field'] = 'field_project_files_fid';
  $handler->display->display_options['filters']['field_project_files_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_project_files_fid']['group'] = 2;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'Ting: Proejct ressources';
  $handler->display->display_options['pane_category']['name'] = 'Ting';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Nid',
    ),
  );
  $translatables['ting_project_ressources'] = array(
    t('Master'),
    t('Ressourcer'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('<a href="[field_project_github-url] ">Download på Github</a>'),
    t('Alle'),
    t('Content pane'),
    t('Ting: Proejct ressources'),
    t('Ting'),
  );
  $export['ting_project_ressources'] = $view;

  $view = new view();
  $view->name = 'ting_project_status';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ting: Project status';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="status-wrapper">
<strong>Status:</strong>
<p>Ikke udgivet</p><div><span>Projektet er under udvikling</span></div>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Forbindelse: Entity Reference: Refererende entity */
  $handler->display->display_options['relationships']['reverse_field_product_project_node']['id'] = 'reverse_field_product_project_node';
  $handler->display->display_options['relationships']['reverse_field_product_project_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_product_project_node']['field'] = 'reverse_field_product_project_node';
  $handler->display->display_options['relationships']['reverse_field_product_project_node']['label'] = 'Product';
  $handler->display->display_options['relationships']['reverse_field_product_project_node']['required'] = TRUE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_product_project_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="status-wrapper">
<strong>Status:</strong>
<p>Udgivet</p>
<span>Læs mere om produktet her</span>
</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'project' => 'project',
  );
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_field_product_project_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'Ting: Project status';
  $handler->display->display_options['pane_category']['name'] = 'Ting';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $translatables['ting_project_status'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('<div class="status-wrapper">
<strong>Status:</strong>
<p>Ikke udgivet</p><div><span>Projektet er under udvikling</span></div>
</div>'),
    t('Product'),
    t('<div class="status-wrapper">
<strong>Status:</strong>
<p>Udgivet</p>
<span>Læs mere om produktet her</span>
</div>'),
    t('Alle'),
    t('Content pane'),
    t('Ting: Project status'),
    t('Ting'),
  );
  $export['ting_project_status'] = $view;

  $view = new view();
  $view->name = 'ting_projects';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ting: Projects';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Projekter';
  $handler->display->display_options['css_class'] = 'project-overview';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Avancerede indstillinger',
    ),
    'field_project_category_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Vælg kategori',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'combine' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p><a href="/node/add/project">+ Opret projekt</a></p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p><em>Ingen resultater.</em></p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Forbindelse: Flag: subscribe_og */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'subscribe_og';
  /* Forbindelse: Indhold: Forfatter */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span class=\'ting-icon-file-xml\'></span> <span class=\'text\'>[title]</span>';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '85';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Offentlige partnere */
  $handler->display->display_options['fields']['field_main_partners']['id'] = 'field_main_partners';
  $handler->display->display_options['fields']['field_main_partners']['table'] = 'field_data_field_main_partners';
  $handler->display->display_options['fields']['field_main_partners']['field'] = 'field_main_partners';
  $handler->display->display_options['fields']['field_main_partners']['label'] = '';
  $handler->display->display_options['fields']['field_main_partners']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_main_partners']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_partners']['element_wrapper_class'] = 'partners';
  $handler->display->display_options['fields']['field_main_partners']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_main_partners']['empty'] = '-';
  $handler->display->display_options['fields']['field_main_partners']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_main_partners']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_main_partners']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_main_partners']['delta_offset'] = '0';
  /* Felt: Indhold: Projektejer */
  $handler->display->display_options['fields']['field_project_owner']['id'] = 'field_project_owner';
  $handler->display->display_options['fields']['field_project_owner']['table'] = 'field_data_field_project_owner';
  $handler->display->display_options['fields']['field_project_owner']['field'] = 'field_project_owner';
  $handler->display->display_options['fields']['field_project_owner']['label'] = '';
  $handler->display->display_options['fields']['field_project_owner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_owner']['element_wrapper_class'] = 'owner';
  $handler->display->display_options['fields']['field_project_owner']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Billede */
  $handler->display->display_options['fields']['field_group_image']['id'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['table'] = 'field_data_field_group_image';
  $handler->display->display_options['fields']['field_group_image']['field'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['label'] = '';
  $handler->display->display_options['fields']['field_group_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group_image']['element_wrapper_class'] = 'image';
  $handler->display->display_options['fields']['field_group_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_group_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_group_image']['settings'] = array(
    'image_style' => 'project_large',
    'image_link' => 'content',
  );
  /* Felt: Indhold: Resumé */
  $handler->display->display_options['fields']['field_group_resume']['id'] = 'field_group_resume';
  $handler->display->display_options['fields']['field_group_resume']['table'] = 'field_data_field_group_resume';
  $handler->display->display_options['fields']['field_group_resume']['field'] = 'field_group_resume';
  $handler->display->display_options['fields']['field_group_resume']['label'] = '';
  $handler->display->display_options['fields']['field_group_resume']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_group_resume']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_group_resume']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_group_resume']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group_resume']['element_wrapper_class'] = 'resume';
  $handler->display->display_options['fields']['field_group_resume']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'return og_extras_subscriber_count($row->nid);';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php print $value; ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Felt: Flag: Flag-link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['exclude'] = TRUE;
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class=\'members\'><span class=\'ting-icon-user\'></span> [php] medlemmer</div>
<div class=\'flag\'>[ops] </div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'meta';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Indhold: Kategori (field_project_category) */
  $handler->display->display_options['filters']['field_project_category_tid']['id'] = 'field_project_category_tid';
  $handler->display->display_options['filters']['field_project_category_tid']['table'] = 'field_data_field_project_category';
  $handler->display->display_options['filters']['field_project_category_tid']['field'] = 'field_project_category_tid';
  $handler->display->display_options['filters']['field_project_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_project_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project_category_tid']['expose']['operator_id'] = 'field_project_category_tid_op';
  $handler->display->display_options['filters']['field_project_category_tid']['expose']['label'] = 'Filtrér projekter:';
  $handler->display->display_options['filters']['field_project_category_tid']['expose']['operator'] = 'field_project_category_tid_op';
  $handler->display->display_options['filters']['field_project_category_tid']['expose']['identifier'] = 'field_project_category_tid';
  $handler->display->display_options['filters']['field_project_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_project_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_project_category_tid']['vocabulary'] = 'project_categories';
  /* Filterkriterie: Global: Kombinér felter filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'field_group_resume' => 'field_group_resume',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Søg';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Avancerede indstillinger',
    ),
    'field_project_category_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Vælg kategori',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'combine' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['path'] = 'projekter';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Projekter';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Forsideblok */
  $handler = $view->new_display('block', 'Forsideblok', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<p><a href="projekter" class=\'btn-link\'>Se alle projekter</a></p>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['block_description'] = 'Projekter: Forfremmet til forside';

  /* Display: Communityblok */
  $handler = $view->new_display('block', 'Communityblok', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Projekter';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span class=\'ting-icon-file-xml\'></span> <span class=\'text\'>[title]</span>';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '90';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Projektejer */
  $handler->display->display_options['fields']['field_project_owner']['id'] = 'field_project_owner';
  $handler->display->display_options['fields']['field_project_owner']['table'] = 'field_data_field_project_owner';
  $handler->display->display_options['fields']['field_project_owner']['field'] = 'field_project_owner';
  $handler->display->display_options['fields']['field_project_owner']['label'] = '';
  $handler->display->display_options['fields']['field_project_owner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_owner']['element_wrapper_class'] = 'owner-sec';
  $handler->display->display_options['fields']['field_project_owner']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Offentlige partnere */
  $handler->display->display_options['fields']['field_main_partners']['id'] = 'field_main_partners';
  $handler->display->display_options['fields']['field_main_partners']['table'] = 'field_data_field_main_partners';
  $handler->display->display_options['fields']['field_main_partners']['field'] = 'field_main_partners';
  $handler->display->display_options['fields']['field_main_partners']['label'] = '';
  $handler->display->display_options['fields']['field_main_partners']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_main_partners']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_partners']['element_wrapper_class'] = 'partners-sec';
  $handler->display->display_options['fields']['field_main_partners']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_main_partners']['empty'] = '-';
  $handler->display->display_options['fields']['field_main_partners']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_main_partners']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_main_partners']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_main_partners']['delta_offset'] = '0';
  /* Felt: Indhold: Billede */
  $handler->display->display_options['fields']['field_group_image']['id'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['table'] = 'field_data_field_group_image';
  $handler->display->display_options['fields']['field_group_image']['field'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['label'] = '';
  $handler->display->display_options['fields']['field_group_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group_image']['element_wrapper_class'] = 'image';
  $handler->display->display_options['fields']['field_group_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_group_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_group_image']['settings'] = array(
    'image_style' => 'project_large',
    'image_link' => 'content',
  );
  /* Felt: Indhold: Resumé */
  $handler->display->display_options['fields']['field_group_resume']['id'] = 'field_group_resume';
  $handler->display->display_options['fields']['field_group_resume']['table'] = 'field_data_field_group_resume';
  $handler->display->display_options['fields']['field_group_resume']['field'] = 'field_group_resume';
  $handler->display->display_options['fields']['field_group_resume']['label'] = '';
  $handler->display->display_options['fields']['field_group_resume']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_group_resume']['alter']['max_length'] = '75';
  $handler->display->display_options['fields']['field_group_resume']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_group_resume']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_group_resume']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group_resume']['element_wrapper_class'] = 'resume';
  $handler->display->display_options['fields']['field_group_resume']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'return og_extras_subscriber_count($row->nid);';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php print $value; ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Felt: Flag: Flag-link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['exclude'] = TRUE;
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class=\'members\'><span class=\'ting-icon-user\'></span> [php] medlemmer</div>
<div class=\'flag\'>[ops] </div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'meta';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['block_description'] = 'Projekter: Community forside';
  $translatables['ting_projects'] = array(
    t('Master'),
    t('Projekter'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Vælg et filter og klik på Anvend for at se resultater'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('<p><a href="/node/add/project">+ Opret projekt</a></p>'),
    t('<p><em>Ingen resultater.</em></p>'),
    t('flag'),
    t('forfatter'),
    t('<span class=\'ting-icon-file-xml\'></span> <span class=\'text\'>[title]</span>'),
    t('-'),
    t('<div class=\'members\'><span class=\'ting-icon-user\'></span> [php] medlemmer</div>
<div class=\'flag\'>[ops] </div>'),
    t('Filtrér projekter:'),
    t('Page'),
    t('Søg'),
    t('Forsideblok'),
    t('<p><a href="projekter" class=\'btn-link\'>Se alle projekter</a></p>'),
    t('Projekter: Forfremmet til forside'),
    t('Communityblok'),
    t('Projekter: Community forside'),
  );
  $export['ting_projects'] = $view;

  $view = new view();
  $view->name = 'ting_public_partners';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ting: Public Partners';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Partnere';
  $handler->display->display_options['css_class'] = 'partner-overview';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Søg';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Avancerede indstillinger',
    ),
    'combine' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_pub_part_cat_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Vælg kategori',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p><em>Ingen resultater.</em></p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span class=\'ting-icon-file-xml\'></span> <span class=\'text\'>[title]</span>';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '90';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Upload logo */
  $handler->display->display_options['fields']['field_pub_part_upload_logo']['id'] = 'field_pub_part_upload_logo';
  $handler->display->display_options['fields']['field_pub_part_upload_logo']['table'] = 'field_data_field_pub_part_upload_logo';
  $handler->display->display_options['fields']['field_pub_part_upload_logo']['field'] = 'field_pub_part_upload_logo';
  $handler->display->display_options['fields']['field_pub_part_upload_logo']['label'] = '';
  $handler->display->display_options['fields']['field_pub_part_upload_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pub_part_upload_logo']['element_wrapper_class'] = 'image';
  $handler->display->display_options['fields']['field_pub_part_upload_logo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_pub_part_upload_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pub_part_upload_logo']['settings'] = array(
    'image_style' => 'logo_large',
    'image_link' => 'content',
  );
  /* Felt: Indhold: Organisation */
  $handler->display->display_options['fields']['field_pub_part_organisation']['id'] = 'field_pub_part_organisation';
  $handler->display->display_options['fields']['field_pub_part_organisation']['table'] = 'field_data_field_pub_part_organisation';
  $handler->display->display_options['fields']['field_pub_part_organisation']['field'] = 'field_pub_part_organisation';
  $handler->display->display_options['fields']['field_pub_part_organisation']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_pub_part_organisation']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_pub_part_organisation']['element_wrapper_class'] = 'organisation';
  $handler->display->display_options['fields']['field_pub_part_organisation']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Adresse */
  $handler->display->display_options['fields']['field_pub_part_address']['id'] = 'field_pub_part_address';
  $handler->display->display_options['fields']['field_pub_part_address']['table'] = 'field_data_field_pub_part_address';
  $handler->display->display_options['fields']['field_pub_part_address']['field'] = 'field_pub_part_address';
  $handler->display->display_options['fields']['field_pub_part_address']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_pub_part_address']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_pub_part_address']['element_wrapper_class'] = 'address';
  $handler->display->display_options['fields']['field_pub_part_address']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_pub_part_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_pub_part_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Felt: Indhold: Offentlig partner siden */
  $handler->display->display_options['fields']['field_pub_part_partner_since']['id'] = 'field_pub_part_partner_since';
  $handler->display->display_options['fields']['field_pub_part_partner_since']['table'] = 'field_data_field_pub_part_partner_since';
  $handler->display->display_options['fields']['field_pub_part_partner_since']['field'] = 'field_pub_part_partner_since';
  $handler->display->display_options['fields']['field_pub_part_partner_since']['label'] = '';
  $handler->display->display_options['fields']['field_pub_part_partner_since']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pub_part_partner_since']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pub_part_partner_since']['settings'] = array(
    'format_type' => 'fact_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<strong>Partner siden</strong>: [field_pub_part_partner_since]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'meta';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Sorteringskriterie: Indhold: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'public_partner' => 'public_partner',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Indhold: Kategori (field_pub_part_cat) */
  $handler->display->display_options['filters']['field_pub_part_cat_tid']['id'] = 'field_pub_part_cat_tid';
  $handler->display->display_options['filters']['field_pub_part_cat_tid']['table'] = 'field_data_field_pub_part_cat';
  $handler->display->display_options['filters']['field_pub_part_cat_tid']['field'] = 'field_pub_part_cat_tid';
  $handler->display->display_options['filters']['field_pub_part_cat_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pub_part_cat_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pub_part_cat_tid']['expose']['operator_id'] = 'field_pub_part_cat_tid_op';
  $handler->display->display_options['filters']['field_pub_part_cat_tid']['expose']['label'] = 'Filtrér partnere:';
  $handler->display->display_options['filters']['field_pub_part_cat_tid']['expose']['operator'] = 'field_pub_part_cat_tid_op';
  $handler->display->display_options['filters']['field_pub_part_cat_tid']['expose']['identifier'] = 'field_pub_part_cat_tid';
  $handler->display->display_options['filters']['field_pub_part_cat_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_pub_part_cat_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pub_part_cat_tid']['vocabulary'] = 'partner_categories';
  /* Filterkriterie: Global: Kombinér felter filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'offentlige-partnere';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Partnere';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['ting_public_partners'] = array(
    t('Master'),
    t('Partnere'),
    t('mere'),
    t('Søg'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Vælg et filter og klik på Anvend for at se resultater'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('<p><em>Ingen resultater.</em></p>'),
    t('<span class=\'ting-icon-file-xml\'></span> <span class=\'text\'>[title]</span>'),
    t('Organisation'),
    t('Adresse'),
    t('<strong>Partner siden</strong>: [field_pub_part_partner_since]'),
    t('Filtrér partnere:'),
    t('Page'),
  );
  $export['ting_public_partners'] = $view;

  $view = new view();
  $view->name = 'ting_quotes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ting: Quotes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'quotes';
  $handler->display->display_options['style_options']['id'] = 'quote-slider';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Indhold: Citat */
  $handler->display->display_options['fields']['field_quote_body']['id'] = 'field_quote_body';
  $handler->display->display_options['fields']['field_quote_body']['table'] = 'field_data_field_quote_body';
  $handler->display->display_options['fields']['field_quote_body']['field'] = 'field_quote_body';
  $handler->display->display_options['fields']['field_quote_body']['label'] = '';
  $handler->display->display_options['fields']['field_quote_body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_quote_body']['alter']['text'] = '"[field_quote_body]"';
  $handler->display->display_options['fields']['field_quote_body']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Forfatter */
  $handler->display->display_options['fields']['field_quote_author']['id'] = 'field_quote_author';
  $handler->display->display_options['fields']['field_quote_author']['table'] = 'field_data_field_quote_author';
  $handler->display->display_options['fields']['field_quote_author']['field'] = 'field_quote_author';
  $handler->display->display_options['fields']['field_quote_author']['label'] = '';
  $handler->display->display_options['fields']['field_quote_author']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['field_quote_author_title']['id'] = 'field_quote_author_title';
  $handler->display->display_options['fields']['field_quote_author_title']['table'] = 'field_data_field_quote_author_title';
  $handler->display->display_options['fields']['field_quote_author_title']['field'] = 'field_quote_author_title';
  $handler->display->display_options['fields']['field_quote_author_title']['label'] = '';
  $handler->display->display_options['fields']['field_quote_author_title']['element_label_colon'] = FALSE;
  /* Sorteringskriterie: Global: Tilfældig */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'quote' => 'quote',
  );

  /* Display: EVA Field */
  $handler = $view->new_display('entity_view', 'EVA Field', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'bean';
  $handler->display->display_options['bundles'] = array(
    0 => 'front_partner_signup',
  );
  $translatables['ting_quotes'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('"[field_quote_body]"'),
    t('EVA Field'),
  );
  $export['ting_quotes'] = $view;

  $view = new view();
  $view->name = 'ting_sidebar_all_users';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ting: Sidebar - all users';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2>Brugere fra [title]</h2>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'header';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Kontaktpersoner */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'Kontaktpersoner';
  $handler->display->display_options['fields']['view']['label'] = 'Kontaktpersoner';
  $handler->display->display_options['fields']['view']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['view']['element_label_class'] = 'user-label';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['view']['view'] = 'ting_sidebar_users';
  $handler->display->display_options['fields']['view']['arguments'] = '!1';
  /* Felt: Andre brugere */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['ui_name'] = 'Andre brugere';
  $handler->display->display_options['fields']['view_1']['label'] = 'Andre brugere';
  $handler->display->display_options['fields']['view_1']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['view_1']['element_label_class'] = 'user-label';
  $handler->display->display_options['fields']['view_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['view_1']['view'] = 'ting_sidebar_other_users';
  $handler->display->display_options['fields']['view_1']['display'] = 'block';
  $handler->display->display_options['fields']['view_1']['arguments'] = '!1';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Kontaktpersoner (field_pub_part_user_contact) */
  $handler->display->display_options['filters']['field_pub_part_user_contact_target_id']['id'] = 'field_pub_part_user_contact_target_id';
  $handler->display->display_options['filters']['field_pub_part_user_contact_target_id']['table'] = 'field_data_field_pub_part_user_contact';
  $handler->display->display_options['filters']['field_pub_part_user_contact_target_id']['field'] = 'field_pub_part_user_contact_target_id';
  $handler->display->display_options['filters']['field_pub_part_user_contact_target_id']['operator'] = 'not empty';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['ting_sidebar_all_users'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('<h2>Brugere fra [title]</h2>'),
    t('Kontaktpersoner'),
    t('Andre brugere'),
    t('Alle'),
    t('Block'),
  );
  $export['ting_sidebar_all_users'] = $view;

  $view = new view();
  $view->name = 'ting_sidebar_fact';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ting: Sidebar - fact';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Felt: Indhold: Upload logo */
  $handler->display->display_options['fields']['field_pub_part_upload_logo']['id'] = 'field_pub_part_upload_logo';
  $handler->display->display_options['fields']['field_pub_part_upload_logo']['table'] = 'field_data_field_pub_part_upload_logo';
  $handler->display->display_options['fields']['field_pub_part_upload_logo']['field'] = 'field_pub_part_upload_logo';
  $handler->display->display_options['fields']['field_pub_part_upload_logo']['label'] = '';
  $handler->display->display_options['fields']['field_pub_part_upload_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pub_part_upload_logo']['alter']['text'] = '[field_pub_part_upload_logo]
';
  $handler->display->display_options['fields']['field_pub_part_upload_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pub_part_upload_logo']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_pub_part_upload_logo']['element_wrapper_class'] = 'fact logo';
  $handler->display->display_options['fields']['field_pub_part_upload_logo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_pub_part_upload_logo']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pub_part_upload_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pub_part_upload_logo']['settings'] = array(
    'image_style' => 'logo_large',
    'image_link' => '',
  );
  /* Felt: Overskrift */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Overskrift';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h2>Fakta</h2>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Organisation */
  $handler->display->display_options['fields']['field_pub_part_organisation']['id'] = 'field_pub_part_organisation';
  $handler->display->display_options['fields']['field_pub_part_organisation']['table'] = 'field_data_field_pub_part_organisation';
  $handler->display->display_options['fields']['field_pub_part_organisation']['field'] = 'field_pub_part_organisation';
  $handler->display->display_options['fields']['field_pub_part_organisation']['label'] = '';
  $handler->display->display_options['fields']['field_pub_part_organisation']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pub_part_organisation']['alter']['text'] = '<span class="label">Organisation: </span>[field_pub_part_organisation] ';
  $handler->display->display_options['fields']['field_pub_part_organisation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pub_part_organisation']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_pub_part_organisation']['element_wrapper_class'] = 'fact organisation';
  $handler->display->display_options['fields']['field_pub_part_organisation']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Virksomhedsnavn */
  $handler->display->display_options['fields']['field_supp_company']['id'] = 'field_supp_company';
  $handler->display->display_options['fields']['field_supp_company']['table'] = 'field_data_field_supp_company';
  $handler->display->display_options['fields']['field_supp_company']['field'] = 'field_supp_company';
  $handler->display->display_options['fields']['field_supp_company']['label'] = '';
  $handler->display->display_options['fields']['field_supp_company']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_supp_company']['alter']['text'] = '<span class="label">Virksomhedsnavn: </span><span class="companyname">[field_supp_company]</span>';
  $handler->display->display_options['fields']['field_supp_company']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_supp_company']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_supp_company']['element_wrapper_class'] = 'fact company';
  $handler->display->display_options['fields']['field_supp_company']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_supp_company']['hide_empty'] = TRUE;
  /* Felt: Indhold: Antal ansatte */
  $handler->display->display_options['fields']['field_supp_num_employees']['id'] = 'field_supp_num_employees';
  $handler->display->display_options['fields']['field_supp_num_employees']['table'] = 'field_data_field_supp_num_employees';
  $handler->display->display_options['fields']['field_supp_num_employees']['field'] = 'field_supp_num_employees';
  $handler->display->display_options['fields']['field_supp_num_employees']['label'] = '';
  $handler->display->display_options['fields']['field_supp_num_employees']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_supp_num_employees']['alter']['text'] = '<span class="label">Antal ansatte: </span>[field_supp_num_employees]';
  $handler->display->display_options['fields']['field_supp_num_employees']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_supp_num_employees']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_supp_num_employees']['element_wrapper_class'] = 'fact employees';
  $handler->display->display_options['fields']['field_supp_num_employees']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_supp_num_employees']['hide_empty'] = TRUE;
  /* Felt: Indhold: TING leverandør siden */
  $handler->display->display_options['fields']['field_supp_supplier_since']['id'] = 'field_supp_supplier_since';
  $handler->display->display_options['fields']['field_supp_supplier_since']['table'] = 'field_data_field_supp_supplier_since';
  $handler->display->display_options['fields']['field_supp_supplier_since']['field'] = 'field_supp_supplier_since';
  $handler->display->display_options['fields']['field_supp_supplier_since']['label'] = '';
  $handler->display->display_options['fields']['field_supp_supplier_since']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_supp_supplier_since']['alter']['text'] = '<span class="label">TING leverandør siden: </span>[field_supp_supplier_since] ';
  $handler->display->display_options['fields']['field_supp_supplier_since']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_supp_supplier_since']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_supp_supplier_since']['element_wrapper_class'] = 'fact supplier-since';
  $handler->display->display_options['fields']['field_supp_supplier_since']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_supp_supplier_since']['settings'] = array(
    'format_type' => 'fact_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Offentlig partner siden */
  $handler->display->display_options['fields']['field_pub_part_partner_since']['id'] = 'field_pub_part_partner_since';
  $handler->display->display_options['fields']['field_pub_part_partner_since']['table'] = 'field_data_field_pub_part_partner_since';
  $handler->display->display_options['fields']['field_pub_part_partner_since']['field'] = 'field_pub_part_partner_since';
  $handler->display->display_options['fields']['field_pub_part_partner_since']['label'] = '';
  $handler->display->display_options['fields']['field_pub_part_partner_since']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pub_part_partner_since']['alter']['text'] = '<span class="label">Offentlig partner siden: </span>[field_pub_part_partner_since]';
  $handler->display->display_options['fields']['field_pub_part_partner_since']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pub_part_partner_since']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_pub_part_partner_since']['element_wrapper_class'] = 'fact partner-since';
  $handler->display->display_options['fields']['field_pub_part_partner_since']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_pub_part_partner_since']['settings'] = array(
    'format_type' => 'fact_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Partnerskabsaftale */
  $handler->display->display_options['fields']['field_pub_part_partner_contract']['id'] = 'field_pub_part_partner_contract';
  $handler->display->display_options['fields']['field_pub_part_partner_contract']['table'] = 'field_data_field_pub_part_partner_contract';
  $handler->display->display_options['fields']['field_pub_part_partner_contract']['field'] = 'field_pub_part_partner_contract';
  $handler->display->display_options['fields']['field_pub_part_partner_contract']['label'] = '';
  $handler->display->display_options['fields']['field_pub_part_partner_contract']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pub_part_partner_contract']['alter']['text'] = '<span class="label">Partnerskabsaftale:</span><a href="[field_pub_part_partner_contract]">Download PDF</a>';
  $handler->display->display_options['fields']['field_pub_part_partner_contract']['alter']['path'] = '[field_pub_part_partner_contract]';
  $handler->display->display_options['fields']['field_pub_part_partner_contract']['alter']['alt'] = 'Download PDF';
  $handler->display->display_options['fields']['field_pub_part_partner_contract']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pub_part_partner_contract']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_pub_part_partner_contract']['element_wrapper_class'] = 'fact partner-deal';
  $handler->display->display_options['fields']['field_pub_part_partner_contract']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_pub_part_partner_contract']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pub_part_partner_contract']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_pub_part_partner_contract']['settings'] = array(
    'text' => 'Download PDF',
  );
  /* Felt: Indhold: Adresse */
  $handler->display->display_options['fields']['field_pub_part_address']['id'] = 'field_pub_part_address';
  $handler->display->display_options['fields']['field_pub_part_address']['table'] = 'field_data_field_pub_part_address';
  $handler->display->display_options['fields']['field_pub_part_address']['field'] = 'field_pub_part_address';
  $handler->display->display_options['fields']['field_pub_part_address']['label'] = '';
  $handler->display->display_options['fields']['field_pub_part_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pub_part_address']['alter']['text'] = '<span class="label">Adresse: </span>[field_pub_part_address-thoroughfare], [field_pub_part_address-postal_code] [field_pub_part_address-locality]';
  $handler->display->display_options['fields']['field_pub_part_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pub_part_address']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_pub_part_address']['element_wrapper_class'] = 'fact partner-address';
  $handler->display->display_options['fields']['field_pub_part_address']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_pub_part_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_pub_part_address']['settings'] = array(
    'use_widget_handlers' => 0,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Felt: Indhold: Adresse */
  $handler->display->display_options['fields']['field_pub_part_address_1']['id'] = 'field_pub_part_address_1';
  $handler->display->display_options['fields']['field_pub_part_address_1']['table'] = 'field_data_field_pub_part_address';
  $handler->display->display_options['fields']['field_pub_part_address_1']['field'] = 'field_pub_part_address';
  $handler->display->display_options['fields']['field_pub_part_address_1']['label'] = '';
  $handler->display->display_options['fields']['field_pub_part_address_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pub_part_address_1']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_pub_part_address_1']['type'] = 'addressfield_staticmap';
  $handler->display->display_options['fields']['field_pub_part_address_1']['settings'] = array(
    'zoom_level' => '14',
    'map_size' => '300x135',
    'map_style' => 'roadmap',
    'advanced_settings_index' => '0',
  );
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['ting_sidebar_fact'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('[field_pub_part_upload_logo]
'),
    t('<h2>Fakta</h2>'),
    t('<span class="label">Organisation: </span>[field_pub_part_organisation] '),
    t('<span class="label">Virksomhedsnavn: </span><span class="companyname">[field_supp_company]</span>'),
    t('<span class="label">Antal ansatte: </span>[field_supp_num_employees]'),
    t('<span class="label">TING leverandør siden: </span>[field_supp_supplier_since] '),
    t('<span class="label">Offentlig partner siden: </span>[field_pub_part_partner_since]'),
    t('<span class="label">Partnerskabsaftale:</span><a href="[field_pub_part_partner_contract]">Download PDF</a>'),
    t('Download PDF'),
    t('<span class="label">Adresse: </span>[field_pub_part_address-thoroughfare], [field_pub_part_address-postal_code] [field_pub_part_address-locality]'),
    t('Alle'),
    t('Block'),
  );
  $export['ting_sidebar_fact'] = $view;

  $view = new view();
  $view->name = 'ting_sidebar_other_users';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ting: Sidebar - other users';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Andre brugere';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Forbindelse: Entity Reference: Refereret entity */
  $handler->display->display_options['relationships']['field_pub_part_other_users_target_id']['id'] = 'field_pub_part_other_users_target_id';
  $handler->display->display_options['relationships']['field_pub_part_other_users_target_id']['table'] = 'field_data_field_pub_part_other_users';
  $handler->display->display_options['relationships']['field_pub_part_other_users_target_id']['field'] = 'field_pub_part_other_users_target_id';
  /* Felt: Bruger: Billede */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'field_pub_part_other_users_target_id';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['picture']['element_wrapper_class'] = 'user-image';
  $handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['picture']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'sidebar_profile_image';
  /* Felt: Bruger: Efternavn */
  $handler->display->display_options['fields']['field_user_lastname']['id'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['field'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['relationship'] = 'field_pub_part_other_users_target_id';
  $handler->display->display_options['fields']['field_user_lastname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lastname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lastname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_lastname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_lastname']['hide_empty'] = TRUE;
  /* Felt: Bruger: Jobtitel */
  $handler->display->display_options['fields']['field_user_job_title']['id'] = 'field_user_job_title';
  $handler->display->display_options['fields']['field_user_job_title']['table'] = 'field_data_field_user_job_title';
  $handler->display->display_options['fields']['field_user_job_title']['field'] = 'field_user_job_title';
  $handler->display->display_options['fields']['field_user_job_title']['relationship'] = 'field_pub_part_other_users_target_id';
  $handler->display->display_options['fields']['field_user_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_user_job_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_job_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_job_title']['alter']['text'] = '<div class="jobtitle">[field_user_job_title]</div>';
  $handler->display->display_options['fields']['field_user_job_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_job_title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_job_title']['element_wrapper_class'] = 'user-jobtitle';
  $handler->display->display_options['fields']['field_user_job_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_job_title']['hide_empty'] = TRUE;
  /* Felt: Bruger: Fornavn */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['relationship'] = 'field_pub_part_other_users_target_id';
  $handler->display->display_options['fields']['field_user_firstname']['label'] = '';
  $handler->display->display_options['fields']['field_user_firstname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_firstname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_firstname']['alter']['text'] = '<div class="user-name">[field_user_firstname] [field_user_lastname]</div>
[field_user_job_title]';
  $handler->display->display_options['fields']['field_user_firstname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_firstname']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_firstname']['element_wrapper_class'] = 'user';
  $handler->display->display_options['fields']['field_user_firstname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_firstname']['hide_empty'] = TRUE;
  /* Felt: Bruger: Link */
  $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['table'] = 'users';
  $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['relationship'] = 'field_pub_part_other_users_target_id';
  $handler->display->display_options['fields']['view_user']['label'] = '';
  $handler->display->display_options['fields']['view_user']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_user']['alter']['text'] = '[field_user_firstname]';
  $handler->display->display_options['fields']['view_user']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_user']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['view_user']['element_wrapper_class'] = 'user';
  $handler->display->display_options['fields']['view_user']['element_default_classes'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['relationship'] = 'field_pub_part_other_users_target_id';
  $handler->display->display_options['filters']['uid_raw']['operator'] = 'not empty';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['ting_sidebar_other_users'] = array(
    t('Master'),
    t('Andre brugere'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Bruger entity refereret fra field_pub_part_other_users'),
    t('<div class="jobtitle">[field_user_job_title]</div>'),
    t('<div class="user-name">[field_user_firstname] [field_user_lastname]</div>
[field_user_job_title]'),
    t('[field_user_firstname]'),
    t('Alle'),
    t('Block'),
  );
  $export['ting_sidebar_other_users'] = $view;

  $view = new view();
  $view->name = 'ting_sidebar_users';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ting: Sidebar - contact users';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Forbindelse: Entity Reference: Refereret entity */
  $handler->display->display_options['relationships']['field_pub_part_user_contact_target_id']['id'] = 'field_pub_part_user_contact_target_id';
  $handler->display->display_options['relationships']['field_pub_part_user_contact_target_id']['table'] = 'field_data_field_pub_part_user_contact';
  $handler->display->display_options['relationships']['field_pub_part_user_contact_target_id']['field'] = 'field_pub_part_user_contact_target_id';
  /* Felt: Bruger: Billede */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'field_pub_part_user_contact_target_id';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['picture']['element_wrapper_class'] = 'user-image';
  $handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['picture']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'sidebar_profile_image';
  /* Felt: Bruger: Efternavn */
  $handler->display->display_options['fields']['field_user_lastname']['id'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['field'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['relationship'] = 'field_pub_part_user_contact_target_id';
  $handler->display->display_options['fields']['field_user_lastname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lastname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lastname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_lastname']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_lastname']['element_wrapper_class'] = 'user-name';
  $handler->display->display_options['fields']['field_user_lastname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_lastname']['hide_empty'] = TRUE;
  /* Felt: Bruger: Jobtitel */
  $handler->display->display_options['fields']['field_user_job_title']['id'] = 'field_user_job_title';
  $handler->display->display_options['fields']['field_user_job_title']['table'] = 'field_data_field_user_job_title';
  $handler->display->display_options['fields']['field_user_job_title']['field'] = 'field_user_job_title';
  $handler->display->display_options['fields']['field_user_job_title']['relationship'] = 'field_pub_part_user_contact_target_id';
  $handler->display->display_options['fields']['field_user_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_user_job_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_job_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_job_title']['alter']['text'] = '<div class="jobtitle">[field_user_job_title]</div>';
  $handler->display->display_options['fields']['field_user_job_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_job_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_job_title']['hide_empty'] = TRUE;
  /* Felt: Bruger: Arbejdsgiver */
  $handler->display->display_options['fields']['field_user_employer']['id'] = 'field_user_employer';
  $handler->display->display_options['fields']['field_user_employer']['table'] = 'field_data_field_user_employer';
  $handler->display->display_options['fields']['field_user_employer']['field'] = 'field_user_employer';
  $handler->display->display_options['fields']['field_user_employer']['relationship'] = 'field_pub_part_user_contact_target_id';
  $handler->display->display_options['fields']['field_user_employer']['label'] = '';
  $handler->display->display_options['fields']['field_user_employer']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_employer']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_employer']['type'] = 'text_plain';
  /* Felt: Bruger: Fornavn */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['relationship'] = 'field_pub_part_user_contact_target_id';
  $handler->display->display_options['fields']['field_user_firstname']['label'] = '';
  $handler->display->display_options['fields']['field_user_firstname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_firstname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_firstname']['alter']['text'] = '<div class="user-name">[field_user_firstname] [field_user_lastname]</div>
[field_user_job_title] ';
  $handler->display->display_options['fields']['field_user_firstname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_firstname']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_firstname']['element_wrapper_class'] = 'user';
  $handler->display->display_options['fields']['field_user_firstname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_firstname']['hide_empty'] = TRUE;
  /* Felt: Bruger: Link */
  $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['table'] = 'users';
  $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['relationship'] = 'field_pub_part_user_contact_target_id';
  $handler->display->display_options['fields']['view_user']['label'] = '';
  $handler->display->display_options['fields']['view_user']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_user']['alter']['text'] = '[field_user_firstname]';
  $handler->display->display_options['fields']['view_user']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_user']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['view_user']['element_wrapper_class'] = 'user';
  $handler->display->display_options['fields']['view_user']['element_default_classes'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['relationship'] = 'field_pub_part_user_contact_target_id';
  $handler->display->display_options['filters']['uid_raw']['operator'] = 'not empty';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['ting_sidebar_users'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Bruger entity refereret fra field_pub_part_user_contact'),
    t('<div class="jobtitle">[field_user_job_title]</div>'),
    t('<div class="user-name">[field_user_firstname] [field_user_lastname]</div>
[field_user_job_title] '),
    t('[field_user_firstname]'),
    t('Alle'),
    t('Block'),
  );
  $export['ting_sidebar_users'] = $view;

  $view = new view();
  $view->name = 'ting_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ting: Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Indhold: Billede */
  $handler->display->display_options['fields']['field_slide_image']['id'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['table'] = 'field_data_field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['field'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['label'] = '';
  $handler->display->display_options['fields']['field_slide_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slide_image']['settings'] = array(
    'image_style' => 'slideshow_large',
    'image_link' => '',
  );
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="slide-title">[title]</div>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Brødtekst */
  $handler->display->display_options['fields']['field_slide_body']['id'] = 'field_slide_body';
  $handler->display->display_options['fields']['field_slide_body']['table'] = 'field_data_field_slide_body';
  $handler->display->display_options['fields']['field_slide_body']['field'] = 'field_slide_body';
  $handler->display->display_options['fields']['field_slide_body']['label'] = '';
  $handler->display->display_options['fields']['field_slide_body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slide_body']['alter']['text'] = '<div class="slide-body">[field_slide_body]</div>';
  $handler->display->display_options['fields']['field_slide_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_slide_body']['empty_zero'] = TRUE;
  /* Felt: Indhold: Links */
  $handler->display->display_options['fields']['field_slide_link']['id'] = 'field_slide_link';
  $handler->display->display_options['fields']['field_slide_link']['table'] = 'field_data_field_slide_link';
  $handler->display->display_options['fields']['field_slide_link']['field'] = 'field_slide_link';
  $handler->display->display_options['fields']['field_slide_link']['label'] = '';
  $handler->display->display_options['fields']['field_slide_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slide_link']['alter']['text'] = '<div class="slide-link">[field_slide_link]</div>';
  $handler->display->display_options['fields']['field_slide_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_link']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_slide_link']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_slide_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slide_link']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_slide_link']['multi_type'] = 'ul';
  /* Felt: Indhold: Layout */
  $handler->display->display_options['fields']['field_slide_layout']['id'] = 'field_slide_layout';
  $handler->display->display_options['fields']['field_slide_layout']['table'] = 'field_data_field_slide_layout';
  $handler->display->display_options['fields']['field_slide_layout']['field'] = 'field_slide_layout';
  $handler->display->display_options['fields']['field_slide_layout']['label'] = '';
  $handler->display->display_options['fields']['field_slide_layout']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_layout']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_layout']['type'] = 'list_key';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class=\'[field_slide_layout]\'>
[title]
[field_slide_body]
[field_slide_link]
</div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  /* Felt: Indhold: Ekstra billede */
  $handler->display->display_options['fields']['field_slide_image_extra']['id'] = 'field_slide_image_extra';
  $handler->display->display_options['fields']['field_slide_image_extra']['table'] = 'field_data_field_slide_image_extra';
  $handler->display->display_options['fields']['field_slide_image_extra']['field'] = 'field_slide_image_extra';
  $handler->display->display_options['fields']['field_slide_image_extra']['label'] = '';
  $handler->display->display_options['fields']['field_slide_image_extra']['alter']['text'] = '<div class="extra-image">[field_slide_image_extra]</div>';
  $handler->display->display_options['fields']['field_slide_image_extra']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_image_extra']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_slide_image_extra']['element_wrapper_class'] = 'extra-image';
  $handler->display->display_options['fields']['field_slide_image_extra']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_slide_image_extra']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_slide_image_extra']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_slide_image_extra']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slide_image_extra']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slide' => 'slide',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Slideshow';
  $translatables['ting_slideshow'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('<div class="slide-title">[title]</div>'),
    t('<div class="slide-body">[field_slide_body]</div>'),
    t('<div class="slide-link">[field_slide_link]</div>'),
    t('<div class=\'[field_slide_layout]\'>
[title]
[field_slide_body]
[field_slide_link]
</div>'),
    t('<div class="extra-image">[field_slide_image_extra]</div>'),
    t('Block'),
    t('Slideshow'),
  );
  $export['ting_slideshow'] = $view;

  $view = new view();
  $view->name = 'ting_suppliers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ting: Suppliers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Leverandører';
  $handler->display->display_options['css_class'] = 'supplier-overview';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Søg';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Avancerede indstillinger',
    ),
    'combine' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_supp_cat_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Vælg kategori',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p><em>Ingen resultater.</em></p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span class=\'ting-icon-file-xml\'></span> <span class=\'text\'>[title]</span>';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '90';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Billede */
  $handler->display->display_options['fields']['field_supp_image']['id'] = 'field_supp_image';
  $handler->display->display_options['fields']['field_supp_image']['table'] = 'field_data_field_supp_image';
  $handler->display->display_options['fields']['field_supp_image']['field'] = 'field_supp_image';
  $handler->display->display_options['fields']['field_supp_image']['label'] = '';
  $handler->display->display_options['fields']['field_supp_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_supp_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_supp_image']['element_wrapper_class'] = 'image';
  $handler->display->display_options['fields']['field_supp_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_supp_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_supp_image']['settings'] = array(
    'image_style' => 'project_large',
    'image_link' => 'content',
  );
  /* Felt: Indhold: Logo */
  $handler->display->display_options['fields']['field_supp_logo']['id'] = 'field_supp_logo';
  $handler->display->display_options['fields']['field_supp_logo']['table'] = 'field_data_field_supp_logo';
  $handler->display->display_options['fields']['field_supp_logo']['field'] = 'field_supp_logo';
  $handler->display->display_options['fields']['field_supp_logo']['label'] = '';
  $handler->display->display_options['fields']['field_supp_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_supp_logo']['element_wrapper_class'] = 'image';
  $handler->display->display_options['fields']['field_supp_logo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_supp_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_supp_logo']['settings'] = array(
    'image_style' => 'project_large',
    'image_link' => 'content',
  );
  /* Felt: Indhold: Adresse */
  $handler->display->display_options['fields']['field_pub_part_address']['id'] = 'field_pub_part_address';
  $handler->display->display_options['fields']['field_pub_part_address']['table'] = 'field_data_field_pub_part_address';
  $handler->display->display_options['fields']['field_pub_part_address']['field'] = 'field_pub_part_address';
  $handler->display->display_options['fields']['field_pub_part_address']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_pub_part_address']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_pub_part_address']['element_wrapper_class'] = 'address';
  $handler->display->display_options['fields']['field_pub_part_address']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_pub_part_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_pub_part_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Felt: Indhold: TING leverandør siden */
  $handler->display->display_options['fields']['field_supp_supplier_since']['id'] = 'field_supp_supplier_since';
  $handler->display->display_options['fields']['field_supp_supplier_since']['table'] = 'field_data_field_supp_supplier_since';
  $handler->display->display_options['fields']['field_supp_supplier_since']['field'] = 'field_supp_supplier_since';
  $handler->display->display_options['fields']['field_supp_supplier_since']['label'] = '';
  $handler->display->display_options['fields']['field_supp_supplier_since']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_supp_supplier_since']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_supp_supplier_since']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_supp_supplier_since']['empty'] = '-';
  $handler->display->display_options['fields']['field_supp_supplier_since']['settings'] = array(
    'format_type' => 'fact_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<strong>Leverandør siden</strong>: [field_supp_supplier_since]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'meta';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Sorteringskriterie: Indhold: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'supplier' => 'supplier',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Indhold: Kategori (field_supp_cat) */
  $handler->display->display_options['filters']['field_supp_cat_tid']['id'] = 'field_supp_cat_tid';
  $handler->display->display_options['filters']['field_supp_cat_tid']['table'] = 'field_data_field_supp_cat';
  $handler->display->display_options['filters']['field_supp_cat_tid']['field'] = 'field_supp_cat_tid';
  $handler->display->display_options['filters']['field_supp_cat_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_supp_cat_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_supp_cat_tid']['expose']['operator_id'] = 'field_supp_cat_tid_op';
  $handler->display->display_options['filters']['field_supp_cat_tid']['expose']['label'] = 'Filtrér leverandører:';
  $handler->display->display_options['filters']['field_supp_cat_tid']['expose']['operator'] = 'field_supp_cat_tid_op';
  $handler->display->display_options['filters']['field_supp_cat_tid']['expose']['identifier'] = 'field_supp_cat_tid';
  $handler->display->display_options['filters']['field_supp_cat_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_supp_cat_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_supp_cat_tid']['vocabulary'] = 'supplier_categories';
  /* Filterkriterie: Global: Kombinér felter filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'leverandoerer';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Leverandører';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['ting_suppliers'] = array(
    t('Master'),
    t('Leverandører'),
    t('mere'),
    t('Søg'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Vælg et filter og klik på Anvend for at se resultater'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('<p><em>Ingen resultater.</em></p>'),
    t('<span class=\'ting-icon-file-xml\'></span> <span class=\'text\'>[title]</span>'),
    t('Adresse'),
    t('-'),
    t('<strong>Leverandør siden</strong>: [field_supp_supplier_since]'),
    t('Filtrér leverandører:'),
    t('Page'),
  );
  $export['ting_suppliers'] = $view;

  $view = new view();
  $view->name = 'ting_teams';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ting: Teams';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Teams';
  $handler->display->display_options['css_class'] = 'team-overview';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Søg';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Avancerede indstillinger',
    ),
    'combine' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_team_category_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Vælg kategori',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p><em>Ingen resultater.</em></p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Forbindelse: Flag: subscribe_og */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'subscribe_og';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span class=\'ting-icon-file-xml\'></span> <span class=\'text\'>[title]</span>';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '90';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Billede */
  $handler->display->display_options['fields']['field_group_image']['id'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['table'] = 'field_data_field_group_image';
  $handler->display->display_options['fields']['field_group_image']['field'] = 'field_group_image';
  $handler->display->display_options['fields']['field_group_image']['label'] = '';
  $handler->display->display_options['fields']['field_group_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group_image']['element_wrapper_class'] = 'image';
  $handler->display->display_options['fields']['field_group_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_group_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_group_image']['settings'] = array(
    'image_style' => 'project_large',
    'image_link' => 'content',
  );
  /* Felt: Indhold: Resumé */
  $handler->display->display_options['fields']['field_group_resume']['id'] = 'field_group_resume';
  $handler->display->display_options['fields']['field_group_resume']['table'] = 'field_data_field_group_resume';
  $handler->display->display_options['fields']['field_group_resume']['field'] = 'field_group_resume';
  $handler->display->display_options['fields']['field_group_resume']['label'] = '';
  $handler->display->display_options['fields']['field_group_resume']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group_resume']['element_wrapper_class'] = 'resume';
  $handler->display->display_options['fields']['field_group_resume']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'return og_extras_subscriber_count($row->nid);';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php print $value; ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Felt: Flag: Flag-link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['exclude'] = TRUE;
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class=\'members\'><span class=\'ting-icon-user\'></span> [php] medlemmer</div>
<div class=\'flag\'>[ops] </div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'meta';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'team' => 'team',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Indhold: Kategori (field_team_category) */
  $handler->display->display_options['filters']['field_team_category_tid']['id'] = 'field_team_category_tid';
  $handler->display->display_options['filters']['field_team_category_tid']['table'] = 'field_data_field_team_category';
  $handler->display->display_options['filters']['field_team_category_tid']['field'] = 'field_team_category_tid';
  $handler->display->display_options['filters']['field_team_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_team_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_team_category_tid']['expose']['operator_id'] = 'field_team_category_tid_op';
  $handler->display->display_options['filters']['field_team_category_tid']['expose']['label'] = 'Filtrér teams:';
  $handler->display->display_options['filters']['field_team_category_tid']['expose']['operator'] = 'field_team_category_tid_op';
  $handler->display->display_options['filters']['field_team_category_tid']['expose']['identifier'] = 'field_team_category_tid';
  $handler->display->display_options['filters']['field_team_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_team_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_team_category_tid']['vocabulary'] = 'team_categories';
  /* Filterkriterie: Global: Kombinér felter filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'field_group_resume' => 'field_group_resume',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'teams';
  $handler->display->display_options['menu']['title'] = 'Teams';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['ting_teams'] = array(
    t('Master'),
    t('Teams'),
    t('mere'),
    t('Søg'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Vælg et filter og klik på Anvend for at se resultater'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('<p><em>Ingen resultater.</em></p>'),
    t('flag'),
    t('<span class=\'ting-icon-file-xml\'></span> <span class=\'text\'>[title]</span>'),
    t('<div class=\'members\'><span class=\'ting-icon-user\'></span> [php] medlemmer</div>
<div class=\'flag\'>[ops] </div>'),
    t('Filtrér teams:'),
    t('Page'),
  );
  $export['ting_teams'] = $view;

  $view = new view();
  $view->name = 'ting_user_followers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Ting: User followers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Følgere';
  $handler->display->display_options['css_class'] = 'user-followers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Forbindelse: Flag: subscribe_user */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'subscribe_user';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Forbindelse: Flag: Bruger */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'flagging';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Felt: Bruger: Billede */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_wrapper_class'] = 'picture';
  $handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'avatar_thumbnail';
  $handler->display->display_options['fields']['picture']['imagecache_preset'] = 'avatar_thumbnail';
  /* Felt: Bruger: Arbejdsgiver */
  $handler->display->display_options['fields']['field_user_employer']['id'] = 'field_user_employer';
  $handler->display->display_options['fields']['field_user_employer']['table'] = 'field_data_field_user_employer';
  $handler->display->display_options['fields']['field_user_employer']['field'] = 'field_user_employer';
  $handler->display->display_options['fields']['field_user_employer']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_user_employer']['label'] = '';
  $handler->display->display_options['fields']['field_user_employer']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_employer']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_employer']['type'] = 'text_plain';
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]
<div class="employer">[field_user_employer]</div>';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'user-name';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Kontekstuelt filter: Flag: Indholds-ID */
  $handler->display->display_options['arguments']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['arguments']['entity_id']['table'] = 'flagging';
  $handler->display->display_options['arguments']['entity_id']['field'] = 'entity_id';
  $handler->display->display_options['arguments']['entity_id']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['arguments']['entity_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['entity_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['entity_id']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['entity_id']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['entity_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['entity_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['entity_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['entity_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['entity_id']['validate']['type'] = 'flag_flaggable_user';
  /* Filterkriterie: Bruger: Aktiv */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'Ting: User followers';
  $handler->display->display_options['pane_category']['name'] = 'Ting';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $translatables['ting_user_followers'] = array(
    t('Master'),
    t('Følgere'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('flag'),
    t('Sæt flag på bruger'),
    t('[name]
<div class="employer">[field_user_employer]</div>'),
    t('Alle'),
    t('Content pane'),
    t('Ting: User followers'),
    t('Ting'),
  );
  $export['ting_user_followers'] = $view;

  $view = new view();
  $view->name = 'ting_user_messages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'message';
  $view->human_name = 'Ting: User messages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Seneste aktivitet';
  $handler->display->display_options['css_class'] = 'messages-user';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Meddelelse: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'message';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['type']['alter']['text'] = '<div class="[type]"></div>';
  $handler->display->display_options['fields']['type']['element_type'] = '0';
  $handler->display->display_options['fields']['type']['element_label_type'] = '0';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['type']['element_wrapper_class'] = 'message-icon';
  $handler->display->display_options['fields']['type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Felt: Meddelelse: Rendered Meddelelse */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_message';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['element_wrapper_class'] = 'message';
  $handler->display->display_options['fields']['rendered_entity']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 1;
  /* Felt: Meddelelse: Timestamp */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'message';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['element_wrapper_class'] = 'created';
  $handler->display->display_options['fields']['timestamp']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
  /* Sorteringskriterie: Meddelelse: Timestamp */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'message';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* Kontekstuelt filter: Meddelelse: Bruger uid */
  $handler->display->display_options['arguments']['user']['id'] = 'user';
  $handler->display->display_options['arguments']['user']['table'] = 'message';
  $handler->display->display_options['arguments']['user']['field'] = 'user';
  $handler->display->display_options['arguments']['user']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['user']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['user']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['user']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['user']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['user']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['user']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['user']['validate']['type'] = 'user';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'Ting: User Messages';
  $handler->display->display_options['pane_category']['name'] = 'Ting';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'user' => array(
      'type' => 'context',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Meddelelse: Bruger uid',
    ),
  );
  $translatables['ting_user_messages'] = array(
    t('Master'),
    t('Seneste aktivitet'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('<div class="[type]"></div>'),
    t('Alle'),
    t('Content pane'),
    t('Ting: User Messages'),
    t('Ting'),
  );
  $export['ting_user_messages'] = $view;

  $view = new view();
  $view->name = 'ting_user_projects';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'og_membership';
  $view->human_name = 'Ting: User projects';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Arbejder på følgende projekter';
  $handler->display->display_options['css_class'] = 'user-projects';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Forbindelse: OG membership: Group Indholdselement from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['label'] = 'Project';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sorteringskriterie: Indhold: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'og_membership_related_node_group';
  /* Kontekstuelt filter: OG membership: Entity ID */
  $handler->display->display_options['arguments']['etid']['id'] = 'etid';
  $handler->display->display_options['arguments']['etid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['etid']['field'] = 'etid';
  $handler->display->display_options['arguments']['etid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['etid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['etid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['etid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['etid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['etid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['etid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['etid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['etid']['validate']['type'] = 'user';
  /* Filterkriterie: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );
  /* Filterkriterie: OG membership: Entity_type */
  $handler->display->display_options['filters']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['table'] = 'og_membership';
  $handler->display->display_options['filters']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['value'] = 'user';
  $handler->display->display_options['filters']['entity_type']['expose']['operator_id'] = 'entity_type_op';
  $handler->display->display_options['filters']['entity_type']['expose']['label'] = 'Entity_type';
  $handler->display->display_options['filters']['entity_type']['expose']['operator'] = 'entity_type_op';
  $handler->display->display_options['filters']['entity_type']['expose']['identifier'] = 'entity_type';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filterkriterie: OG membership: Entity ID */
  $handler->display->display_options['filters']['etid']['id'] = 'etid';
  $handler->display->display_options['filters']['etid']['table'] = 'og_membership';
  $handler->display->display_options['filters']['etid']['field'] = 'etid';
  $handler->display->display_options['filters']['etid']['operator'] = '!=';
  $handler->display->display_options['filters']['etid']['value']['value'] = '1';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'Ting: User projects';
  $handler->display->display_options['pane_category']['name'] = 'Ting';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $translatables['ting_user_projects'] = array(
    t('Master'),
    t('Arbejder på følgende projekter'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Project'),
    t('Alle'),
    t('Entity_type'),
    t('Content pane'),
    t('Ting: User projects'),
    t('Ting'),
  );
  $export['ting_user_projects'] = $view;

  return $export;
}

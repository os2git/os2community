<?php
/**
 * @file
 * os2_klassifikationer.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2_klassifikationer_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'os2klassifikationer';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OS2klassifikationer';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Fælleskommunale klassifikationer';
  $handler->display->display_options['css_class'] = 'events-overview';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'Se alle produkter';
  $handler->display->display_options['link_display'] = 'page';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Søg';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Nulstil';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '18';
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
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Herunder kan der søges i et indeks med klassifikationer. Det rummer eksempler, der allerede bruges fælleskommunalt eller fællesoffentligt i it-systemer. Der optræder også klassifikationer, som har potentiale til at kunne bruges fælles.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p><em>Ingen resultater.</em></p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span class=\'ting-icon-file-xml\'></span> <span class=\'text\'>[title]</span>';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '90';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Indholdselement: Beskrivelse */
  $handler->display->display_options['fields']['field_os2klass_beskrivelse']['id'] = 'field_os2klass_beskrivelse';
  $handler->display->display_options['fields']['field_os2klass_beskrivelse']['table'] = 'field_data_field_os2klass_beskrivelse';
  $handler->display->display_options['fields']['field_os2klass_beskrivelse']['field'] = 'field_os2klass_beskrivelse';
  $handler->display->display_options['fields']['field_os2klass_beskrivelse']['exclude'] = TRUE;
  /* Field: Content: Rendered Indholdselement */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2klassifikation' => 'os2klassifikation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indholdselement: Anvendes i system (field_os2klass_anvendes_i_system) */
  $handler->display->display_options['filters']['field_os2klass_anvendes_i_system_tid']['id'] = 'field_os2klass_anvendes_i_system_tid';
  $handler->display->display_options['filters']['field_os2klass_anvendes_i_system_tid']['table'] = 'field_data_field_os2klass_anvendes_i_system';
  $handler->display->display_options['filters']['field_os2klass_anvendes_i_system_tid']['field'] = 'field_os2klass_anvendes_i_system_tid';
  $handler->display->display_options['filters']['field_os2klass_anvendes_i_system_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_os2klass_anvendes_i_system_tid']['expose']['operator_id'] = 'field_os2klass_anvendes_i_system_tid_op';
  $handler->display->display_options['filters']['field_os2klass_anvendes_i_system_tid']['expose']['label'] = 'Anvendes i system';
  $handler->display->display_options['filters']['field_os2klass_anvendes_i_system_tid']['expose']['operator'] = 'field_os2klass_anvendes_i_system_tid_op';
  $handler->display->display_options['filters']['field_os2klass_anvendes_i_system_tid']['expose']['identifier'] = 'field_os2klass_anvendes_i_system_tid';
  $handler->display->display_options['filters']['field_os2klass_anvendes_i_system_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_os2klass_anvendes_i_system_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_os2klass_anvendes_i_system_tid']['vocabulary'] = 'os2klassifikation_system';
  /* Filter criterion: Indholdselement: Ejer (field_os2klass_ejer) */
  $handler->display->display_options['filters']['field_os2klass_ejer_tid']['id'] = 'field_os2klass_ejer_tid';
  $handler->display->display_options['filters']['field_os2klass_ejer_tid']['table'] = 'field_data_field_os2klass_ejer';
  $handler->display->display_options['filters']['field_os2klass_ejer_tid']['field'] = 'field_os2klass_ejer_tid';
  $handler->display->display_options['filters']['field_os2klass_ejer_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_os2klass_ejer_tid']['expose']['operator_id'] = 'field_os2klass_ejer_tid_op';
  $handler->display->display_options['filters']['field_os2klass_ejer_tid']['expose']['label'] = 'Ejer';
  $handler->display->display_options['filters']['field_os2klass_ejer_tid']['expose']['operator'] = 'field_os2klass_ejer_tid_op';
  $handler->display->display_options['filters']['field_os2klass_ejer_tid']['expose']['identifier'] = 'field_os2klass_ejer_tid';
  $handler->display->display_options['filters']['field_os2klass_ejer_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_os2klass_ejer_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_os2klass_ejer_tid']['vocabulary'] = 'os2klassifikation_ejer';
  /* Filter criterion: Indholdselement: Anvendelsesområde (field_os2klass_anvendelsesomr_de) */
  $handler->display->display_options['filters']['field_os2klass_anvendelsesomr_de_tid']['id'] = 'field_os2klass_anvendelsesomr_de_tid';
  $handler->display->display_options['filters']['field_os2klass_anvendelsesomr_de_tid']['table'] = 'field_data_field_os2klass_anvendelsesomr_de';
  $handler->display->display_options['filters']['field_os2klass_anvendelsesomr_de_tid']['field'] = 'field_os2klass_anvendelsesomr_de_tid';
  $handler->display->display_options['filters']['field_os2klass_anvendelsesomr_de_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_os2klass_anvendelsesomr_de_tid']['expose']['operator_id'] = 'field_os2klass_anvendelsesomr_de_tid_op';
  $handler->display->display_options['filters']['field_os2klass_anvendelsesomr_de_tid']['expose']['label'] = 'Anvendelsesområde';
  $handler->display->display_options['filters']['field_os2klass_anvendelsesomr_de_tid']['expose']['operator'] = 'field_os2klass_anvendelsesomr_de_tid_op';
  $handler->display->display_options['filters']['field_os2klass_anvendelsesomr_de_tid']['expose']['identifier'] = 'field_os2klass_anvendelsesomr_de_tid';
  $handler->display->display_options['filters']['field_os2klass_anvendelsesomr_de_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_os2klass_anvendelsesomr_de_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_os2klass_anvendelsesomr_de_tid']['vocabulary'] = 'os2klassifikation_anvendelsesomr_de';
  /* Filter criterion: Indholdselement: FORM Hovedniveau (field_os2klass_form_hovedniveau) */
  $handler->display->display_options['filters']['field_os2klass_form_hovedniveau_tid']['id'] = 'field_os2klass_form_hovedniveau_tid';
  $handler->display->display_options['filters']['field_os2klass_form_hovedniveau_tid']['table'] = 'field_data_field_os2klass_form_hovedniveau';
  $handler->display->display_options['filters']['field_os2klass_form_hovedniveau_tid']['field'] = 'field_os2klass_form_hovedniveau_tid';
  $handler->display->display_options['filters']['field_os2klass_form_hovedniveau_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_os2klass_form_hovedniveau_tid']['expose']['operator_id'] = 'field_os2klass_form_hovedniveau_tid_op';
  $handler->display->display_options['filters']['field_os2klass_form_hovedniveau_tid']['expose']['label'] = 'FORM Hovedniveau';
  $handler->display->display_options['filters']['field_os2klass_form_hovedniveau_tid']['expose']['operator'] = 'field_os2klass_form_hovedniveau_tid_op';
  $handler->display->display_options['filters']['field_os2klass_form_hovedniveau_tid']['expose']['identifier'] = 'field_os2klass_form_hovedniveau_tid';
  $handler->display->display_options['filters']['field_os2klass_form_hovedniveau_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_os2klass_form_hovedniveau_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_os2klass_form_hovedniveau_tid']['vocabulary'] = 'os2klassifikation_form_hovedniveau';
  /* Filter criterion: Indholdselement: KLE domænemodel (field_os2klass_kle_dom_nemodel) */
  $handler->display->display_options['filters']['field_os2klass_kle_dom_nemodel_tid']['id'] = 'field_os2klass_kle_dom_nemodel_tid';
  $handler->display->display_options['filters']['field_os2klass_kle_dom_nemodel_tid']['table'] = 'field_data_field_os2klass_kle_dom_nemodel';
  $handler->display->display_options['filters']['field_os2klass_kle_dom_nemodel_tid']['field'] = 'field_os2klass_kle_dom_nemodel_tid';
  $handler->display->display_options['filters']['field_os2klass_kle_dom_nemodel_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_os2klass_kle_dom_nemodel_tid']['expose']['operator_id'] = 'field_os2klass_kle_dom_nemodel_tid_op';
  $handler->display->display_options['filters']['field_os2klass_kle_dom_nemodel_tid']['expose']['label'] = 'KLE domænemodel';
  $handler->display->display_options['filters']['field_os2klass_kle_dom_nemodel_tid']['expose']['operator'] = 'field_os2klass_kle_dom_nemodel_tid_op';
  $handler->display->display_options['filters']['field_os2klass_kle_dom_nemodel_tid']['expose']['identifier'] = 'field_os2klass_kle_dom_nemodel_tid';
  $handler->display->display_options['filters']['field_os2klass_kle_dom_nemodel_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_os2klass_kle_dom_nemodel_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_os2klass_kle_dom_nemodel_tid']['vocabulary'] = 'os2klassifikation_kle_dom_nemodel';
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Søg';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'field_os2klass_beskrivelse' => 'field_os2klass_beskrivelse',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Sidefod OS2klassifikatiner';
  $handler->display->display_options['footer']['area']['content'] = 'Har I en klassifikation, som andre bør kende til, kan den tilføjes. Send en mail til heboj@syddjurs.dk og få nærmere instruktion fra redaktionen.';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2klassifikation' => 'os2klassifikation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indholdselement: Anvendelsesområde (field_os2klass_anvendelsesomr_de) */
  $handler->display->display_options['filters']['field_os2klass_anvendelsesomr_de_tid']['id'] = 'field_os2klass_anvendelsesomr_de_tid';
  $handler->display->display_options['filters']['field_os2klass_anvendelsesomr_de_tid']['table'] = 'field_data_field_os2klass_anvendelsesomr_de';
  $handler->display->display_options['filters']['field_os2klass_anvendelsesomr_de_tid']['field'] = 'field_os2klass_anvendelsesomr_de_tid';
  $handler->display->display_options['filters']['field_os2klass_anvendelsesomr_de_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_os2klass_anvendelsesomr_de_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_os2klass_anvendelsesomr_de_tid']['expose']['operator_id'] = 'field_os2klass_anvendelsesomr_de_tid_op';
  $handler->display->display_options['filters']['field_os2klass_anvendelsesomr_de_tid']['expose']['label'] = 'Anvendelsesområde';
  $handler->display->display_options['filters']['field_os2klass_anvendelsesomr_de_tid']['expose']['operator'] = 'field_os2klass_anvendelsesomr_de_tid_op';
  $handler->display->display_options['filters']['field_os2klass_anvendelsesomr_de_tid']['expose']['identifier'] = 'field_os2klass_anvendelsesomr_de_tid';
  $handler->display->display_options['filters']['field_os2klass_anvendelsesomr_de_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_os2klass_anvendelsesomr_de_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_os2klass_anvendelsesomr_de_tid']['vocabulary'] = 'os2klassifikation_anvendelsesomr_de';
  /* Filter criterion: Indholdselement: Licens (field_os2klass_licens) */
  $handler->display->display_options['filters']['field_os2klass_licens_tid']['id'] = 'field_os2klass_licens_tid';
  $handler->display->display_options['filters']['field_os2klass_licens_tid']['table'] = 'field_data_field_os2klass_licens';
  $handler->display->display_options['filters']['field_os2klass_licens_tid']['field'] = 'field_os2klass_licens_tid';
  $handler->display->display_options['filters']['field_os2klass_licens_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_os2klass_licens_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_os2klass_licens_tid']['expose']['operator_id'] = 'field_os2klass_licens_tid_op';
  $handler->display->display_options['filters']['field_os2klass_licens_tid']['expose']['label'] = 'Licens';
  $handler->display->display_options['filters']['field_os2klass_licens_tid']['expose']['operator'] = 'field_os2klass_licens_tid_op';
  $handler->display->display_options['filters']['field_os2klass_licens_tid']['expose']['identifier'] = 'field_os2klass_licens_tid';
  $handler->display->display_options['filters']['field_os2klass_licens_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_os2klass_licens_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_os2klass_licens_tid']['vocabulary'] = 'os2klassifikation_licens';
  /* Filter criterion: Indholdselement: Anvendes i system (field_os2klass_anvendes_i_system) */
  $handler->display->display_options['filters']['field_os2klass_anvendes_i_system_tid']['id'] = 'field_os2klass_anvendes_i_system_tid';
  $handler->display->display_options['filters']['field_os2klass_anvendes_i_system_tid']['table'] = 'field_data_field_os2klass_anvendes_i_system';
  $handler->display->display_options['filters']['field_os2klass_anvendes_i_system_tid']['field'] = 'field_os2klass_anvendes_i_system_tid';
  $handler->display->display_options['filters']['field_os2klass_anvendes_i_system_tid']['value'] = '';
  $handler->display->display_options['filters']['field_os2klass_anvendes_i_system_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_os2klass_anvendes_i_system_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_os2klass_anvendes_i_system_tid']['expose']['operator_id'] = 'field_os2klass_anvendes_i_system_tid_op';
  $handler->display->display_options['filters']['field_os2klass_anvendes_i_system_tid']['expose']['label'] = 'Anvendes i system';
  $handler->display->display_options['filters']['field_os2klass_anvendes_i_system_tid']['expose']['operator'] = 'field_os2klass_anvendes_i_system_tid_op';
  $handler->display->display_options['filters']['field_os2klass_anvendes_i_system_tid']['expose']['identifier'] = 'field_os2klass_anvendes_i_system_tid';
  $handler->display->display_options['filters']['field_os2klass_anvendes_i_system_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_os2klass_anvendes_i_system_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_os2klass_anvendes_i_system_tid']['vocabulary'] = 'os2klassifikation_system';
  /* Filter criterion: Indholdselement: Ejer (field_os2klass_ejer) */
  $handler->display->display_options['filters']['field_os2klass_ejer_tid']['id'] = 'field_os2klass_ejer_tid';
  $handler->display->display_options['filters']['field_os2klass_ejer_tid']['table'] = 'field_data_field_os2klass_ejer';
  $handler->display->display_options['filters']['field_os2klass_ejer_tid']['field'] = 'field_os2klass_ejer_tid';
  $handler->display->display_options['filters']['field_os2klass_ejer_tid']['value'] = '';
  $handler->display->display_options['filters']['field_os2klass_ejer_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_os2klass_ejer_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_os2klass_ejer_tid']['expose']['operator_id'] = 'field_os2klass_ejer_tid_op';
  $handler->display->display_options['filters']['field_os2klass_ejer_tid']['expose']['label'] = 'Ejer';
  $handler->display->display_options['filters']['field_os2klass_ejer_tid']['expose']['operator'] = 'field_os2klass_ejer_tid_op';
  $handler->display->display_options['filters']['field_os2klass_ejer_tid']['expose']['identifier'] = 'field_os2klass_ejer_tid';
  $handler->display->display_options['filters']['field_os2klass_ejer_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_os2klass_ejer_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_os2klass_ejer_tid']['vocabulary'] = 'os2klassifikation_ejer';
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Fritekstsøgning';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'field_os2klass_beskrivelse' => 'field_os2klass_beskrivelse',
  );
  $handler->display->display_options['path'] = 'os2klassifikationer';
  $handler->display->display_options['menu']['title'] = 'Andre OSS projekter';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Forside blok */
  $handler = $view->new_display('block', 'Forside blok', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Andre Open Source projekter';
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
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="oss-projekter" class="btn-link">Se hele listen</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'oss_projekt' => 'oss_projekt',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $translatables['os2klassifikationer'] = array(
    t('Master'),
    t('Fælleskommunale klassifikationer'),
    t('Se alle produkter'),
    t('Søg'),
    t('Nulstil'),
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
    t('Herunder kan der søges i et indeks med klassifikationer. Det rummer eksempler, der allerede bruges fælleskommunalt eller fællesoffentligt i it-systemer. Der optræder også klassifikationer, som har potentiale til at kunne bruges fælles.'),
    t('<p><em>Ingen resultater.</em></p>'),
    t('<span class=\'ting-icon-file-xml\'></span> <span class=\'text\'>[title]</span>'),
    t('Beskrivelse'),
    t('Anvendes i system'),
    t('Ejer'),
    t('Anvendelsesområde'),
    t('FORM Hovedniveau'),
    t('KLE domænemodel'),
    t('Page'),
    t('more'),
    t('Sidefod OS2klassifikatiner'),
    t('Har I en klassifikation, som andre bør kende til, kan den tilføjes. Send en mail til heboj@syddjurs.dk og få nærmere instruktion fra redaktionen.'),
    t('Licens'),
    t('Fritekstsøgning'),
    t('Forside blok'),
    t('Andre Open Source projekter'),
    t('<a href="oss-projekter" class="btn-link">Se hele listen</a>'),
  );
  $export['os2klassifikationer'] = $view;

  return $export;
}

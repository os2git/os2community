<?php
/**
 * @file
 * os2_vejledninger.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2_vejledninger_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ting_vejledninger';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ting: Vejledninger';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Vejledninger';
  $handler->display->display_options['css_class'] = 'product-overview';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'Se alle produkter';
  $handler->display->display_options['link_display'] = 'page';
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
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span class="icon-tutorial"></span> <span class=\'text\'>[title]</span>';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Billede */
  $handler->display->display_options['fields']['field_guides_picture']['id'] = 'field_guides_picture';
  $handler->display->display_options['fields']['field_guides_picture']['table'] = 'field_data_field_guides_picture';
  $handler->display->display_options['fields']['field_guides_picture']['field'] = 'field_guides_picture';
  $handler->display->display_options['fields']['field_guides_picture']['label'] = '';
  $handler->display->display_options['fields']['field_guides_picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_guides_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_guides_picture']['element_wrapper_class'] = 'image';
  $handler->display->display_options['fields']['field_guides_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_guides_picture']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Felt: Indhold: Beskrivelse */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'resume';
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
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
    'oss_projekt' => 'oss_projekt',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Sidefod vejledninger';
  $handler->display->display_options['footer']['area']['content'] = '<div style="clear:both; text-align:center;"><a class="link-button" href="https://faq.os2.eu">Der er også hjælp på OS2viden</a><p style="margin-top:1em;">Har du en vejledning du gerne vil dele så <a href="/kontakt">kontakt OS2s sekretariat</a></p></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'vejledning' => 'vejledning',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Global: Kombinér felter filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Filtrer listen efter søgeord:';
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
    'body' => 'body',
  );
  /* Filterkriterie: Indhold: Har taksonomiterm */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = '';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Tags';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'vejledningstags';
  $handler->display->display_options['path'] = 'vejledninger';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Vejledninger';
  $handler->display->display_options['menu']['weight'] = '-49';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['ting_vejledninger'] = array(
    t('Master'),
    t('Vejledninger'),
    t('Se alle produkter'),
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
    t('<p><em>Ingen resultater.</em></p>'),
    t('<span class="icon-tutorial"></span> <span class=\'text\'>[title]</span>'),
    t('Page'),
    t('mere'),
    t('Sidefod vejledninger'),
    t('<div style="clear:both; text-align:center;"><a class="link-button" href="https://faq.os2.eu">Der er også hjælp på OS2viden</a><p style="margin-top:1em;">Har du en vejledning du gerne vil dele så <a href="/kontakt">kontakt OS2s sekretariat</a></p></div>'),
    t('Filtrer listen efter søgeord:'),
    t('Tags'),
  );
  $export['ting_vejledninger'] = $view;

  $view = new view();
  $view->name = 'ting_vejledninger_metadata';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ting: vejledninger metadata';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Detaljer og download';
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
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Felt: Indhold: Kategori */
  $handler->display->display_options['fields']['field_guides_category']['id'] = 'field_guides_category';
  $handler->display->display_options['fields']['field_guides_category']['table'] = 'field_data_field_guides_category';
  $handler->display->display_options['fields']['field_guides_category']['field'] = 'field_guides_category';
  $handler->display->display_options['fields']['field_guides_category']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_guides_category']['element_label_type'] = 'strong';
  /* Felt: Indhold: Filer */
  $handler->display->display_options['fields']['field_guides_files']['id'] = 'field_guides_files';
  $handler->display->display_options['fields']['field_guides_files']['table'] = 'field_data_field_guides_files';
  $handler->display->display_options['fields']['field_guides_files']['field'] = 'field_guides_files';
  $handler->display->display_options['fields']['field_guides_files']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_guides_files']['element_wrapper_class'] = 'block-links';
  $handler->display->display_options['fields']['field_guides_files']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_guides_files']['settings'] = array(
    'text' => 'Download [file:name]',
  );
  $handler->display->display_options['fields']['field_guides_files']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_guides_files']['multi_type'] = 'ul';
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
    'vejledning' => 'vejledning',
  );

  /* Display: Vejledninger metadata */
  $handler = $view->new_display('block', 'Vejledninger metadata', 'block_1');
  $handler->display->display_options['block_description'] = 'Vejledninger metadata';

  /* Display: Blok: Vejledninger tags */
  $handler = $view->new_display('block', 'Blok: Vejledninger tags', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'labels';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Tags */
  $handler->display->display_options['fields']['field_guides_tags']['id'] = 'field_guides_tags';
  $handler->display->display_options['fields']['field_guides_tags']['table'] = 'field_data_field_guides_tags';
  $handler->display->display_options['fields']['field_guides_tags']['field'] = 'field_guides_tags';
  $handler->display->display_options['fields']['field_guides_tags']['label'] = '';
  $handler->display->display_options['fields']['field_guides_tags']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_guides_tags']['alter']['text'] = '<h4 class="label label-spacing">[field_guides_tags]</h4>';
  $handler->display->display_options['fields']['field_guides_tags']['element_type'] = '0';
  $handler->display->display_options['fields']['field_guides_tags']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_guides_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_guides_tags']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_guides_tags']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_guides_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_guides_tags']['separator'] = '';
  $handler->display->display_options['block_description'] = 'OSS project tags';
  $translatables['ting_vejledninger_metadata'] = array(
    t('Master'),
    t('Detaljer og download'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Kategori'),
    t('Filer'),
    t('Alle'),
    t('Vejledninger metadata'),
    t('Blok: Vejledninger tags'),
    t('<h4 class="label label-spacing">[field_guides_tags]</h4>'),
    t('OSS project tags'),
  );
  $export['ting_vejledninger_metadata'] = $view;

  return $export;
}

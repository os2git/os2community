<?php
/**
 * @file
 * osto_newsletter.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function osto_newsletter_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'newsletter';
  $page->task = 'page';
  $page->admin_title = '';
  $page->admin_description = '';
  $page->path = 'nyhedsbrev';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_newsletter__panel';
  $handler->task = 'page';
  $handler->subtask = 'newsletter';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'OS2 Nyhedsbrev';
  $display->uuid = '314bb2c7-a62b-40ba-bc1d-8f0876536c62';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d362cf43-f4c8-4770-8ed0-3a2f1fc8562e';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Arkiv',
      'body' => '<style type="text/css">
<!--
.display_archive {font-family: arial,verdana; font-size: 12px;}
.campaign {line-height: 125%; margin: 5px;}
//-->
</style>
<script language="javascript" src="//os2web.us13.list-manage.com/generate-js/?u=aec6a3efb03994692405857d0&fid=1625&show=10" type="text/javascript"></script>',
      'format' => 'custom_full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd362cf43-f4c8-4770-8ed0-3a2f1fc8562e';
    $display->content['new-d362cf43-f4c8-4770-8ed0-3a2f1fc8562e'] = $pane;
    $display->panels['left'][0] = 'new-d362cf43-f4c8-4770-8ed0-3a2f1fc8562e';
    $pane = new stdClass();
    $pane->pid = 'new-31104c8d-40dc-483c-930e-7d3310074466';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'mailchimp_signup-nyhedsbrev';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Tilmelding til nyhedsbrev',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '31104c8d-40dc-483c-930e-7d3310074466';
    $display->content['new-31104c8d-40dc-483c-930e-7d3310074466'] = $pane;
    $display->panels['right'][0] = 'new-31104c8d-40dc-483c-930e-7d3310074466';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-d362cf43-f4c8-4770-8ed0-3a2f1fc8562e';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['newsletter'] = $page;

  return $pages;

}

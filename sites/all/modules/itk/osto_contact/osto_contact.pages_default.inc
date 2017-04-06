<?php
/**
 * @file
 * osto_contact.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function osto_contact_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'contact';
  $page->task = 'page';
  $page->admin_title = 'Kontakt OS2';
  $page->admin_description = '';
  $page->path = 'kontakt';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_contact__panel';
  $handler->task = 'page';
  $handler->subtask = 'contact';
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
  $display->layout = 'omega_12_twocol_9_3';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ef424137-fabe-405f-a449-61b0fcdbe63a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_contact__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b349d080-2873-4ec3-85b4-4fe2becbe352';
  $pane->panel = 'left';
  $pane->type = 'contact';
  $pane->subtype = 'contact';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
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
  $pane->uuid = 'b349d080-2873-4ec3-85b4-4fe2becbe352';
  $display->content['new-b349d080-2873-4ec3-85b4-4fe2becbe352'] = $pane;
  $display->panels['left'][0] = 'new-b349d080-2873-4ec3-85b4-4fe2becbe352';
  $pane = new stdClass();
  $pane->pid = 'new-229cf7f5-4516-4554-8042-146683c7a6b3';
  $pane->panel = 'right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'OS2 kontaktinformationer',
    'title' => 'Forretningsledelsen',
    'body' => '<div style="line-height:1.5em"><p>Du er også velkommen til at kontakte OS2s forretningsleder direkte. Eller sende os et brev, det er så hyggeligt.</p><p>&nbsp;</p><p>Rasmus Frey<br />Forretningsleder<br />Email: rafr@aarhus.dk<br />Telefon: +45 31154525</p><p>&nbsp;</p><p>OS2 - Offentligt digitaliseringsfællesskab<br />c/o Aarhus Kommune<br />Dokk1<br />Hack Kampmanns Plads 2<br />8000 Aarhus C<br />CVR: 55133018</p><p>&nbsp;</p><p>Email: os2@os2.eu</p></div>',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '229cf7f5-4516-4554-8042-146683c7a6b3';
  $display->content['new-229cf7f5-4516-4554-8042-146683c7a6b3'] = $pane;
  $display->panels['right'][0] = 'new-229cf7f5-4516-4554-8042-146683c7a6b3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b349d080-2873-4ec3-85b4-4fe2becbe352';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['contact'] = $page;

  return $pages;

}

<?php
/**
 * @file
 * os2_vejledninger.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function os2_vejledninger_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__vejledning';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -25;
  $handler->conf = array(
    'title' => 'Vejledning',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'vejledning' => 'vejledning',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'name' => 'vejledning',
  );
  $display = new panels_display();
  $display->layout = 'omega_12_twocol_eightfour';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'left' => NULL,
      'right' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '872fa5f5-da29-40cb-9305-9b4d20087fb3';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__vejledning';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4fbdd8b6-32aa-46b6-be9f-90415be75cb4';
  $pane->panel = 'left';
  $pane->type = 'entity_view';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4fbdd8b6-32aa-46b6-be9f-90415be75cb4';
  $display->content['new-4fbdd8b6-32aa-46b6-be9f-90415be75cb4'] = $pane;
  $display->panels['left'][0] = 'new-4fbdd8b6-32aa-46b6-be9f-90415be75cb4';
  $pane = new stdClass();
  $pane->pid = 'new-d1f666b4-a16f-4b59-9241-7305987d712d';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'ting_vejledninger_metadata';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 0,
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
  $pane->uuid = 'd1f666b4-a16f-4b59-9241-7305987d712d';
  $display->content['new-d1f666b4-a16f-4b59-9241-7305987d712d'] = $pane;
  $display->panels['right'][0] = 'new-d1f666b4-a16f-4b59-9241-7305987d712d';
  $pane = new stdClass();
  $pane->pid = 'new-0a66d594-e057-4def-bb91-496e4b9245d1';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'ting_vejledninger_metadata';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_3',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 1,
    'override_title_text' => 'Nøgleord',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '0a66d594-e057-4def-bb91-496e4b9245d1';
  $display->content['new-0a66d594-e057-4def-bb91-496e4b9245d1'] = $pane;
  $display->panels['right'][1] = 'new-0a66d594-e057-4def-bb91-496e4b9245d1';
  $pane = new stdClass();
  $pane->pid = 'new-e9bf9127-1523-4b01-bcf9-a9d0625157d0';
  $pane->panel = 'right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'OS2viden button',
    'title' => '',
    'title_heading' => 'div',
    'body' => '<p><a class="link-button" href="https://faq.os2.eu">Spørgsmål og svar på OS2viden</a></p><p>På <a href="https://faq.os2.eu">faq.os2.eu</a> bruger vi OS2loop til at hjælpe hinanden. Få svar på dine spørgsmål eller hjælp andre ved at besvare deres.</p>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'attention',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'e9bf9127-1523-4b01-bcf9-a9d0625157d0';
  $display->content['new-e9bf9127-1523-4b01-bcf9-a9d0625157d0'] = $pane;
  $display->panels['right'][2] = 'new-e9bf9127-1523-4b01-bcf9-a9d0625157d0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-4fbdd8b6-32aa-46b6-be9f-90415be75cb4';
  $handler->conf['display'] = $display;
  $export['node_view__vejledning'] = $handler;

  return $export;
}

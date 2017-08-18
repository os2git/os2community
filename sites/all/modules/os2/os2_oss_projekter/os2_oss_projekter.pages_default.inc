<?php
/**
 * @file
 * os2_oss_projekter.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function os2_oss_projekter_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__oss-projekt';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'OSS projekt',
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
              'oss_projekt' => 'oss_projekt',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'name' => 'oss-projekt',
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
  $display->storage_id = 'node_view__oss-projekt';
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
  $pane->pid = 'new-01a3f96d-527b-4ad6-b64d-b7b6d7029273';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'ting_oss_project_metadata';
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
    'display' => 'block_3',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '01a3f96d-527b-4ad6-b64d-b7b6d7029273';
  $display->content['new-01a3f96d-527b-4ad6-b64d-b7b6d7029273'] = $pane;
  $display->panels['left'][1] = 'new-01a3f96d-527b-4ad6-b64d-b7b6d7029273';
  $pane = new stdClass();
  $pane->pid = 'new-65524ce0-5cbf-43a0-876c-027b61190da1';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ossproject_logo';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'file_rendered',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'file_view_mode' => 'default',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '65524ce0-5cbf-43a0-876c-027b61190da1';
  $display->content['new-65524ce0-5cbf-43a0-876c-027b61190da1'] = $pane;
  $display->panels['right'][0] = 'new-65524ce0-5cbf-43a0-876c-027b61190da1';
  $pane = new stdClass();
  $pane->pid = 'new-c50dd519-23db-41bd-81eb-2e2bd3522303';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'ting_oss_project_metadata';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c50dd519-23db-41bd-81eb-2e2bd3522303';
  $display->content['new-c50dd519-23db-41bd-81eb-2e2bd3522303'] = $pane;
  $display->panels['right'][1] = 'new-c50dd519-23db-41bd-81eb-2e2bd3522303';
  $pane = new stdClass();
  $pane->pid = 'new-0e26127c-8fd7-4632-a8f7-783c6ab284f3';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'ting_oss_project_metadata';
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
    'display' => 'block_2',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '0e26127c-8fd7-4632-a8f7-783c6ab284f3';
  $display->content['new-0e26127c-8fd7-4632-a8f7-783c6ab284f3'] = $pane;
  $display->panels['right'][2] = 'new-0e26127c-8fd7-4632-a8f7-783c6ab284f3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-4fbdd8b6-32aa-46b6-be9f-90415be75cb4';
  $handler->conf['display'] = $display;
  $export['node_view__oss-projekt'] = $handler;

  return $export;
}

<?php
/**
 * @file
 * osto_web_modifications.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function osto_web_modifications_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Gruppeindhold',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'og_is_node_group_content',
          'settings' => NULL,
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'omega_12_twocol_eightfour';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'header' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b6ca846c-694a-4fd3-96bb-796767ed1e32';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-19e020a3-559f-41d3-b164-a5f5fc4d66fa';
    $pane->panel = 'left';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
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
    $pane->uuid = '19e020a3-559f-41d3-b164-a5f5fc4d66fa';
    $display->content['new-19e020a3-559f-41d3-b164-a5f5fc4d66fa'] = $pane;
    $display->panels['left'][0] = 'new-19e020a3-559f-41d3-b164-a5f5fc4d66fa';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-19e020a3-559f-41d3-b164-a5f5fc4d66fa';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Projektgruppe',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'og_is_node_group',
          'settings' => NULL,
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'project' => 'project',
              'team' => 'team',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    ),
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
  $display->uuid = 'd38d9b35-1812-42ff-9746-99e0a3d3a941';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-405e8a5f-755e-46c7-aa19-87618aaffd86';
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
    $pane->uuid = '405e8a5f-755e-46c7-aa19-87618aaffd86';
    $display->content['new-405e8a5f-755e-46c7-aa19-87618aaffd86'] = $pane;
    $display->panels['left'][0] = 'new-405e8a5f-755e-46c7-aa19-87618aaffd86';
    $pane = new stdClass();
    $pane->pid = 'new-caa3c3b5-1053-4ece-b157-f67dbd77ac32';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ting_group_messages-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'caa3c3b5-1053-4ece-b157-f67dbd77ac32';
    $display->content['new-caa3c3b5-1053-4ece-b157-f67dbd77ac32'] = $pane;
    $display->panels['left'][1] = 'new-caa3c3b5-1053-4ece-b157-f67dbd77ac32';
    $pane = new stdClass();
    $pane->pid = 'new-9deb9fc4-5540-4d83-a021-633cffb541c5';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'ting_project_status-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9deb9fc4-5540-4d83-a021-633cffb541c5';
    $display->content['new-9deb9fc4-5540-4d83-a021-633cffb541c5'] = $pane;
    $display->panels['right'][0] = 'new-9deb9fc4-5540-4d83-a021-633cffb541c5';
    $pane = new stdClass();
    $pane->pid = 'new-94e7f02a-473c-4906-8c1c-e38de4f7b220';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:group_group';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'og_group_subscribe',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_name' => '0',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Medlemsskab',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '94e7f02a-473c-4906-8c1c-e38de4f7b220';
    $display->content['new-94e7f02a-473c-4906-8c1c-e38de4f7b220'] = $pane;
    $display->panels['right'][1] = 'new-94e7f02a-473c-4906-8c1c-e38de4f7b220';
    $pane = new stdClass();
    $pane->pid = 'new-6ee8a96c-353d-4a48-be9b-5778e3ce1f9b';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'ting_group_members-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Projektdeltagere',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6ee8a96c-353d-4a48-be9b-5778e3ce1f9b';
    $display->content['new-6ee8a96c-353d-4a48-be9b-5778e3ce1f9b'] = $pane;
    $display->panels['right'][2] = 'new-6ee8a96c-353d-4a48-be9b-5778e3ce1f9b';
    $pane = new stdClass();
    $pane->pid = 'new-d9ff86d4-4df2-4dc4-bc70-62b7941dc867';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'ting_project_ressources-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd9ff86d4-4df2-4dc4-bc70-62b7941dc867';
    $display->content['new-d9ff86d4-4df2-4dc4-bc70-62b7941dc867'] = $pane;
    $display->panels['right'][3] = 'new-d9ff86d4-4df2-4dc4-bc70-62b7941dc867';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-405e8a5f-755e-46c7-aa19-87618aaffd86';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Events',
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
              'event' => 'event',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
    $pane->pid = 'new-a7298e3c-24f9-4325-b554-c0277f65e77b';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'ting_event_metadata-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a7298e3c-24f9-4325-b554-c0277f65e77b';
    $display->content['new-a7298e3c-24f9-4325-b554-c0277f65e77b'] = $pane;
    $display->panels['right'][0] = 'new-a7298e3c-24f9-4325-b554-c0277f65e77b';
    $pane = new stdClass();
    $pane->pid = 'new-593b0c73-16c9-49bb-a99a-9df6397227a6';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'ting_event_attendees-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '20',
      'offset' => '0',
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '593b0c73-16c9-49bb-a99a-9df6397227a6';
    $display->content['new-593b0c73-16c9-49bb-a99a-9df6397227a6'] = $pane;
    $display->panels['right'][1] = 'new-593b0c73-16c9-49bb-a99a-9df6397227a6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-4fbdd8b6-32aa-46b6-be9f-90415be75cb4';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Produkter',
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
              'product' => 'product',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-4fbdd8b6-32aa-46b6-be9f-90415be75cb4';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_4'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view_panel_context';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Standard',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
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
  $display->uuid = 'c4fdb6b0-8ef3-4fff-82b1-0fd407b1d366';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3641abb1-26cf-4117-b797-1decca5237ef';
    $pane->panel = 'left';
    $pane->type = 'entity_view';
    $pane->subtype = 'user';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:user_1',
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
    $pane->uuid = '3641abb1-26cf-4117-b797-1decca5237ef';
    $display->content['new-3641abb1-26cf-4117-b797-1decca5237ef'] = $pane;
    $display->panels['left'][0] = 'new-3641abb1-26cf-4117-b797-1decca5237ef';
    $pane = new stdClass();
    $pane->pid = 'new-f243d02b-0b95-4389-afba-89e1d51aa68a';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ting_user_messages-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:user_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f243d02b-0b95-4389-afba-89e1d51aa68a';
    $display->content['new-f243d02b-0b95-4389-afba-89e1d51aa68a'] = $pane;
    $display->panels['left'][1] = 'new-f243d02b-0b95-4389-afba-89e1d51aa68a';
    $pane = new stdClass();
    $pane->pid = 'new-8fd44e3e-040d-47ae-a599-6593f04a50ae';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'ting_user_followers-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8fd44e3e-040d-47ae-a599-6593f04a50ae';
    $display->content['new-8fd44e3e-040d-47ae-a599-6593f04a50ae'] = $pane;
    $display->panels['right'][0] = 'new-8fd44e3e-040d-47ae-a599-6593f04a50ae';
    $pane = new stdClass();
    $pane->pid = 'new-6cd17ab4-2021-4e46-b93d-98d9a367201a';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'ting_user_projects-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6cd17ab4-2021-4e46-b93d-98d9a367201a';
    $display->content['new-6cd17ab4-2021-4e46-b93d-98d9a367201a'] = $pane;
    $display->panels['right'][1] = 'new-6cd17ab4-2021-4e46-b93d-98d9a367201a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3641abb1-26cf-4117-b797-1decca5237ef';
  $handler->conf['display'] = $display;
  $export['user_view_panel_context'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function osto_web_modifications_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'group_blog';
  $page->task = 'page';
  $page->admin_title = 'Group Blog';
  $page->admin_description = '';
  $page->path = 'node/%node/blog';
  $page->access = array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'name' => 'og_is_node_group',
        'settings' => NULL,
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Blog',
    'name' => 'navigation',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Indholdselement: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_group_blog_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'group_blog';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Standard',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'og_is_node_group',
          'settings' => NULL,
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    ),
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
  $display->title = '%node:title: Blog';
  $display->uuid = '5f0df6c4-87b7-44ca-9e7e-892ceedcdb67';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b5b15ba6-b887-438f-b279-c21047d1acc8';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ting_group_content-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b5b15ba6-b887-438f-b279-c21047d1acc8';
    $display->content['new-b5b15ba6-b887-438f-b279-c21047d1acc8'] = $pane;
    $display->panels['left'][0] = 'new-b5b15ba6-b887-438f-b279-c21047d1acc8';
    $pane = new stdClass();
    $pane->pid = 'new-b621e953-3204-468b-8a19-71fd07c555f8';
    $pane->panel = 'right';
    $pane->type = 'node_prepopulate';
    $pane->subtype = 'node_prepopulate';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'og_member',
          'settings' => array(
            'state' => array(
              1 => '1',
            ),
          ),
          'context' => array(
            0 => 'logged-in-user',
            1 => 'argument_entity_id:node_1',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'types' => array(
        'post' => 'post',
      ),
      'field_name' => 'og_group_ref',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b621e953-3204-468b-8a19-71fd07c555f8';
    $display->content['new-b621e953-3204-468b-8a19-71fd07c555f8'] = $pane;
    $display->panels['right'][0] = 'new-b621e953-3204-468b-8a19-71fd07c555f8';
    $pane = new stdClass();
    $pane->pid = 'new-36b44a45-190e-478e-bd53-d8579330efec';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'ting_group_members-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Medlemmer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '36b44a45-190e-478e-bd53-d8579330efec';
    $display->content['new-36b44a45-190e-478e-bd53-d8579330efec'] = $pane;
    $display->panels['right'][1] = 'new-36b44a45-190e-478e-bd53-d8579330efec';
    $pane = new stdClass();
    $pane->pid = 'new-bc3d4250-3d3c-4eb4-9ffd-4418b9797e6d';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'ting_project_ressources-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'bc3d4250-3d3c-4eb4-9ffd-4418b9797e6d';
    $display->content['new-bc3d4250-3d3c-4eb4-9ffd-4418b9797e6d'] = $pane;
    $display->panels['right'][2] = 'new-bc3d4250-3d3c-4eb4-9ffd-4418b9797e6d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['group_blog'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'group_documents';
  $page->task = 'page';
  $page->admin_title = 'Group Documents';
  $page->admin_description = '';
  $page->path = 'node/%node/dokumenter';
  $page->access = array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'name' => 'og_is_node_group',
        'settings' => NULL,
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Dokumenter',
    'name' => 'navigation',
    'weight' => '3',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Indholdselement: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_group_documents_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'group_documents';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Standard',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'og_is_node_group',
          'settings' => NULL,
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    ),
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
  $display->title = '%node:title: Dokumenter';
  $display->uuid = '5f0df6c4-87b7-44ca-9e7e-892ceedcdb67';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-298fbe77-54bc-4679-9cc9-2252753b07c7';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ting_group_content-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '298fbe77-54bc-4679-9cc9-2252753b07c7';
    $display->content['new-298fbe77-54bc-4679-9cc9-2252753b07c7'] = $pane;
    $display->panels['left'][0] = 'new-298fbe77-54bc-4679-9cc9-2252753b07c7';
    $pane = new stdClass();
    $pane->pid = 'new-1f50b998-741e-4ff0-9437-7630607e1405';
    $pane->panel = 'right';
    $pane->type = 'node_prepopulate';
    $pane->subtype = 'node_prepopulate';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'og_member',
          'settings' => array(
            'state' => array(
              1 => '1',
            ),
          ),
          'context' => array(
            0 => 'logged-in-user',
            1 => 'argument_entity_id:node_1',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'types' => array(
        'document' => 'document',
      ),
      'field_name' => 'og_group_ref',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1f50b998-741e-4ff0-9437-7630607e1405';
    $display->content['new-1f50b998-741e-4ff0-9437-7630607e1405'] = $pane;
    $display->panels['right'][0] = 'new-1f50b998-741e-4ff0-9437-7630607e1405';
    $pane = new stdClass();
    $pane->pid = 'new-36b44a45-190e-478e-bd53-d8579330efec';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'ting_group_members-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Medlemmer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '36b44a45-190e-478e-bd53-d8579330efec';
    $display->content['new-36b44a45-190e-478e-bd53-d8579330efec'] = $pane;
    $display->panels['right'][1] = 'new-36b44a45-190e-478e-bd53-d8579330efec';
    $pane = new stdClass();
    $pane->pid = 'new-dee22863-be46-496c-9c99-e0191eef7336';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'ting_project_ressources-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'dee22863-be46-496c-9c99-e0191eef7336';
    $display->content['new-dee22863-be46-496c-9c99-e0191eef7336'] = $pane;
    $display->panels['right'][2] = 'new-dee22863-be46-496c-9c99-e0191eef7336';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['group_documents'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'group_events';
  $page->task = 'page';
  $page->admin_title = 'Group Events';
  $page->admin_description = '';
  $page->path = 'node/%node/begivenheder';
  $page->access = array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'name' => 'og_is_node_group',
        'settings' => NULL,
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Begivenheder',
    'name' => 'navigation',
    'weight' => '2',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Indholdselement: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_group_events_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'group_events';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Standard',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'og_is_node_group',
          'settings' => NULL,
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    ),
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
  $display->title = '%node:title: Begivenheder';
  $display->uuid = '5f0df6c4-87b7-44ca-9e7e-892ceedcdb67';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-631573d5-b65e-4e68-a08a-de94f9355e81';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ting_group_content-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '631573d5-b65e-4e68-a08a-de94f9355e81';
    $display->content['new-631573d5-b65e-4e68-a08a-de94f9355e81'] = $pane;
    $display->panels['left'][0] = 'new-631573d5-b65e-4e68-a08a-de94f9355e81';
    $pane = new stdClass();
    $pane->pid = 'new-ebd16aaf-6d5f-4f08-9700-5e9fada1c110';
    $pane->panel = 'right';
    $pane->type = 'node_prepopulate';
    $pane->subtype = 'node_prepopulate';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'og_member',
          'settings' => array(
            'state' => array(
              1 => '1',
            ),
          ),
          'context' => array(
            0 => 'logged-in-user',
            1 => 'argument_entity_id:node_1',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'types' => array(
        'event' => 'event',
      ),
      'field_name' => 'og_group_ref',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ebd16aaf-6d5f-4f08-9700-5e9fada1c110';
    $display->content['new-ebd16aaf-6d5f-4f08-9700-5e9fada1c110'] = $pane;
    $display->panels['right'][0] = 'new-ebd16aaf-6d5f-4f08-9700-5e9fada1c110';
    $pane = new stdClass();
    $pane->pid = 'new-36b44a45-190e-478e-bd53-d8579330efec';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'ting_group_members-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Medlemmer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '36b44a45-190e-478e-bd53-d8579330efec';
    $display->content['new-36b44a45-190e-478e-bd53-d8579330efec'] = $pane;
    $display->panels['right'][1] = 'new-36b44a45-190e-478e-bd53-d8579330efec';
    $pane = new stdClass();
    $pane->pid = 'new-d23ff343-9a6b-438b-9b14-3ca5a21b7f23';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'ting_project_ressources-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd23ff343-9a6b-438b-9b14-3ca5a21b7f23';
    $display->content['new-d23ff343-9a6b-438b-9b14-3ca5a21b7f23'] = $pane;
    $display->panels['right'][2] = 'new-d23ff343-9a6b-438b-9b14-3ca5a21b7f23';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['group_events'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'group_wikis';
  $page->task = 'page';
  $page->admin_title = 'Group Wikis';
  $page->admin_description = '';
  $page->path = 'node/%node/wiki';
  $page->access = array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'name' => 'og_is_node_group',
        'settings' => NULL,
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Wiki',
    'name' => 'navigation',
    'weight' => '4',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Indholdselement: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_group_wikis_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'group_wikis';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Standard',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'og_is_node_group',
          'settings' => NULL,
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    ),
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
  $display->title = '%node:title: Wiki';
  $display->uuid = '5f0df6c4-87b7-44ca-9e7e-892ceedcdb67';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-115f75f0-1a74-4d4d-8239-b256cbb0b71d';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ting_group_content-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '115f75f0-1a74-4d4d-8239-b256cbb0b71d';
    $display->content['new-115f75f0-1a74-4d4d-8239-b256cbb0b71d'] = $pane;
    $display->panels['left'][0] = 'new-115f75f0-1a74-4d4d-8239-b256cbb0b71d';
    $pane = new stdClass();
    $pane->pid = 'new-c146fc36-5128-4801-a7eb-07eae92452a5';
    $pane->panel = 'right';
    $pane->type = 'node_prepopulate';
    $pane->subtype = 'node_prepopulate';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'og_member',
          'settings' => array(
            'state' => array(
              1 => '1',
            ),
          ),
          'context' => array(
            0 => 'logged-in-user',
            1 => 'argument_entity_id:node_1',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'types' => array(
        'wiki' => 'wiki',
      ),
      'field_name' => 'og_group_ref',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c146fc36-5128-4801-a7eb-07eae92452a5';
    $display->content['new-c146fc36-5128-4801-a7eb-07eae92452a5'] = $pane;
    $display->panels['right'][0] = 'new-c146fc36-5128-4801-a7eb-07eae92452a5';
    $pane = new stdClass();
    $pane->pid = 'new-36b44a45-190e-478e-bd53-d8579330efec';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'ting_group_members-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Medlemmer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '36b44a45-190e-478e-bd53-d8579330efec';
    $display->content['new-36b44a45-190e-478e-bd53-d8579330efec'] = $pane;
    $display->panels['right'][1] = 'new-36b44a45-190e-478e-bd53-d8579330efec';
    $pane = new stdClass();
    $pane->pid = 'new-29ec1c5d-f8d4-4101-ad5d-04c819886fef';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'ting_project_ressources-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '29ec1c5d-f8d4-4101-ad5d-04c819886fef';
    $display->content['new-29ec1c5d-f8d4-4101-ad5d-04c819886fef'] = $pane;
    $display->panels['right'][2] = 'new-29ec1c5d-f8d4-4101-ad5d-04c819886fef';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['group_wikis'] = $page;

  return $pages;

}

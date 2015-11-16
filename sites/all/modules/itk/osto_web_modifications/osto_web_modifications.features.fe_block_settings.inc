<?php
/**
 * @file
 * osto_web_modifications.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function osto_web_modifications_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['addressfield_staticmap-addressfield_staticmap'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'addressfield_staticmap',
    'module' => 'addressfield_staticmap',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -49,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['addressfield_staticmap-addressfield_staticmap_alt'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'addressfield_staticmap_alt',
    'module' => 'addressfield_staticmap',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -48,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['bean-community-forside-signup'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'community-forside-signup',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => 'community',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'postscript_second',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -32,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -44,
      ),
      'ting' => array(
        'region' => 'postscript_second',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -32,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['bean-forside-signup-partner'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'forside-signup-partner',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'postscript_second',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -33,
      ),
      'osto_web' => array(
        'region' => 'postscript_second',
        'status' => 1,
        'theme' => 'osto_web',
        'weight' => -33,
      ),
      'ting' => array(
        'region' => 'postscript_second',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -33,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['bean-forside-signup-partner-0'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'forside-signup-partner-0',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'postscript_third',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -35,
      ),
      'osto_web' => array(
        'region' => 'postscript_third',
        'status' => 1,
        'theme' => 'osto_web',
        'weight' => -35,
      ),
      'ting' => array(
        'region' => 'postscript_third',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -35,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['bean-forum-header'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'forum-header',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -47,
      ),
      'osto_web' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'osto_web',
        'weight' => -47,
      ),
      'ting' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -47,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['bean-header-community-forside'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'header-community-forside',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => 'community',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => -46,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -31,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => -46,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['bean-header-events'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'header-events',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -50,
      ),
      'osto_web' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'osto_web',
        'weight' => -50,
      ),
      'ting' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -50,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['bean-header-leverandoer'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'header-leverandoer',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -46,
      ),
      'osto_web' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'osto_web',
        'weight' => -46,
      ),
      'ting' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -46,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['bean-header-members'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'header-members',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => 'medlemmer',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -43,
      ),
      'osto_web' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'osto_web',
        'weight' => -43,
      ),
      'ting' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -43,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['bean-header-products'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'header-products',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -49,
      ),
      'osto_web' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'osto_web',
        'weight' => -49,
      ),
      'ting' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -49,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['bean-header-public-partner'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'header-public-partner',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -44,
      ),
      'osto_web' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'osto_web',
        'weight' => -44,
      ),
      'ting' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -44,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['bean-header-standard'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'header-standard',
    'module' => 'bean',
    'node_types' => array(
      0 => 'page',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -45,
      ),
      'osto_web' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'osto_web',
        'weight' => -45,
      ),
      'ting' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -45,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['bean-header-teams'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'header-teams',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -48,
      ),
      'osto_web' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'osto_web',
        'weight' => -48,
      ),
      'ting' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -48,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['bean-header-user'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'header-user',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => 'user
user/*',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -52,
      ),
      'osto_web' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'osto_web',
        'weight' => -52,
      ),
      'ting' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -52,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['bean-news-header'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'news-header',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => 'nyheder
nyheder/*',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -51,
      ),
      'osto_web' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'osto_web',
        'weight' => -51,
      ),
      'ting' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -51,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['comment-recent'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'comment',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => -10,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -10,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => -10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['commons_utility_links-commons_utility_links'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'commons_utility_links',
    'module' => 'commons_utility_links',
    'node_types' => array(),
    'pages' => 0,
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'user_second',
        'status' => 1,
        'theme' => 'omega',
        'weight' => 1,
      ),
      'osto_web' => array(
        'region' => 'user_second',
        'status' => 1,
        'theme' => 'osto_web',
        'weight' => 1,
      ),
      'ting' => array(
        'region' => 'user_second',
        'status' => 1,
        'theme' => 'ting',
        'weight' => 1,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['context_ui-devel'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'devel',
    'module' => 'context_ui',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => -28,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -39,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => -28,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['context_ui-editor'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'editor',
    'module' => 'context_ui',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => -29,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -27,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => -29,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['delta_blocks-action-links'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'action-links',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => -34,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -51,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => -34,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['delta_blocks-branding'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'branding',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => -30,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -46,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => -30,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['delta_blocks-breadcrumb'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'breadcrumb',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '<front>
community',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'preface_first',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -50,
      ),
      'osto_web' => array(
        'region' => 'preface_first',
        'status' => 1,
        'theme' => 'osto_web',
        'weight' => -50,
      ),
      'ting' => array(
        'region' => 'preface_first',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -50,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['delta_blocks-feed-icons'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'feed-icons',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => -25,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -35,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => -25,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['delta_blocks-logo'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'logo',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => -17,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -22,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => -17,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['delta_blocks-messages'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'messages',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -51,
      ),
      'osto_web' => array(
        'region' => 'title',
        'status' => 1,
        'theme' => 'osto_web',
        'weight' => -52,
      ),
      'ting' => array(
        'region' => 'title',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -51,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['delta_blocks-page-title'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'page-title',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -50,
      ),
      'osto_web' => array(
        'region' => 'title',
        'status' => 1,
        'theme' => 'osto_web',
        'weight' => -51,
      ),
      'ting' => array(
        'region' => 'title',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -50,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['delta_blocks-site-name'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'site-name',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => -8,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -9,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => -8,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['delta_blocks-site-slogan'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'site-slogan',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => -7,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -8,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => -7,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['delta_blocks-tabs'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'tabs',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => -26,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -37,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => -26,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['devel-execute_php'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'execute_php',
    'module' => 'devel',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => -19,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -26,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => -19,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['devel-switch_user'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'switch_user',
    'module' => 'devel',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => -6,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -7,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => -6,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['forum-active'] = array(
    'cache' => -2,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'active',
    'module' => 'forum',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => -32,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -47,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => -32,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['forum-new'] = array(
    'cache' => -2,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'new',
    'module' => 'forum',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => -12,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -17,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => -12,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['icon_tabs-icon-tabs'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'icon-tabs',
    'module' => 'icon_tabs',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => -20,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -28,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => -20,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['locale-language'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'language',
    'module' => 'locale',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => -5,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -6,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => -5,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-devel'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'devel',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 1,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => 3,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => 1,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-features'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'features',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -36,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-footer-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-footer-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -34,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu_block-1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 1,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'footer_first',
        'status' => 1,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'osto_web' => array(
        'region' => 'footer_first',
        'status' => 1,
        'theme' => 'osto_web',
        'weight' => 0,
      ),
      'ting' => array(
        'region' => 'footer_first',
        'status' => 1,
        'theme' => 'ting',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['node-recent'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => -11,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -11,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => -11,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['node-syndicate'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'syndicate',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => 2,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['og_extras-group_info'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'group_info',
    'module' => 'og_extras',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => -23,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -32,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => -23,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['og_extras-node_links'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'node_links',
    'module' => 'og_extras',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => -14,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -19,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => -14,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['rrssb-rrssb'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'rrssb',
    'module' => 'rrssb',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => -44,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -13,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => -44,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => -1,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -2,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => -1,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['search_api_page-generel_s_gning'] = array(
    'cache' => 2,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'generel_s_gning',
    'module' => 'search_api_page',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -12,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['shortcut-shortcuts'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'shortcuts',
    'module' => 'shortcut',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => -24,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -33,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => -24,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['statistics-popular'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'popular',
    'module' => 'statistics',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -15,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['superfish-1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 1,
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'menu',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -19,
      ),
      'osto_web' => array(
        'region' => 'menu',
        'status' => 1,
        'theme' => 'osto_web',
        'weight' => -19,
      ),
      'ting' => array(
        'region' => 'menu',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -19,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['superfish-2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 2,
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => -4,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -5,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => -4,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['superfish-3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 3,
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => -3,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -4,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => -3,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['superfish-4'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 4,
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => -2,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -3,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => -2,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-help'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'help',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -47,
      ),
      'osto_web' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'osto_web',
        'weight' => -51,
      ),
      'ting' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -47,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -48,
      ),
      'osto_web' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'osto_web',
        'weight' => -52,
      ),
      'ting' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -48,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => -22,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -30,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => -22,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-management'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'management',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => -16,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -21,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => -16,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => -15,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -20,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => -15,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-powered-by'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'powered-by',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => -27,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -38,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => -27,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 2,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => 4,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => 2,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['ting_blocks-community_stats'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'community_stats',
    'module' => 'ting_blocks',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -46,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -40,
      ),
      'ting' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -46,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['ting_blocks-newsletter_signup'] = array(
    'cache' => 1,
    'css_class' => 'newsletter',
    'custom' => 0,
    'delta' => 'newsletter_signup',
    'module' => 'ting_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'footer_second',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -42,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -52,
      ),
      'ting' => array(
        'region' => 'footer_second',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -42,
      ),
    ),
    'title' => 'TING nyheder',
    'visibility' => 0,
  );

  $export['user-login'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => -18,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -23,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => -18,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-new'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'new',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => -13,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -18,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => -13,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-online'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'online',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => -21,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -29,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => -21,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views--exp-ting_events-page'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '-exp-ting_events-page',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'begivenheder',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -47,
      ),
      'osto_web' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'osto_web',
        'weight' => -51,
      ),
      'ting' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -47,
      ),
    ),
    'title' => 'Kategorier',
    'visibility' => 1,
  );

  $export['views--exp-ting_news-page'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '-exp-ting_news-page',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'nyheder',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -46,
      ),
      'osto_web' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'osto_web',
        'weight' => -50,
      ),
      'ting' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -46,
      ),
    ),
    'title' => 'Kategorier',
    'visibility' => 1,
  );

  $export['views-02fa6d77412f0dcc70cc30d44ba59eb8'] = array(
    'cache' => -1,
    'css_class' => 'latest-group-content',
    'custom' => 0,
    'delta' => '02fa6d77412f0dcc70cc30d44ba59eb8',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -24,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-1e189b6032b0df752a01ddda7c218229'] = array(
    'cache' => -1,
    'css_class' => 'latest-news',
    'custom' => 0,
    'delta' => '1e189b6032b0df752a01ddda7c218229',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'community',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -45,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -41,
      ),
      'ting' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -45,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-251e9a7fb506db7dfbcfc3bbd1ad198c'] = array(
    'cache' => -1,
    'css_class' => 'latest-group-content',
    'custom' => 0,
    'delta' => '251e9a7fb506db7dfbcfc3bbd1ad198c',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'community',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -25,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-4d832831a8447b7cef191158f8744d36'] = array(
    'cache' => -1,
    'css_class' => 'latest-posts',
    'custom' => 0,
    'delta' => '4d832831a8447b7cef191158f8744d36',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'community',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -44,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -42,
      ),
      'ting' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -44,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-5eb55eb9bfe69366803b07b73f329b4f'] = array(
    'cache' => -1,
    'css_class' => 'latest-events',
    'custom' => 0,
    'delta' => '5eb55eb9bfe69366803b07b73f329b4f',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'community',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -43,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -43,
      ),
      'ting' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -43,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-bbb0fa4923af62dbbb009a652ddee236'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'bbb0fa4923af62dbbb009a652ddee236',
    'module' => 'views',
    'node_types' => array(
      0 => 'product',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -42,
      ),
      'osto_web' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'osto_web',
        'weight' => -45,
      ),
      'ting' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -42,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-forum_most_active-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'forum_most_active-block',
    'module' => 'views',
    'node_types' => array(
      0 => 'forum',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -37,
      ),
      'osto_web' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'osto_web',
        'weight' => -40,
      ),
      'ting' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -37,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-og_members-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'og_members-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 4,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => 5,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => 4,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-ting_basic_page_links-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ting_basic_page_links-block',
    'module' => 'views',
    'node_types' => array(
      0 => 'page',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -36,
      ),
      'osto_web' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'osto_web',
        'weight' => -39,
      ),
      'ting' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -36,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-ting_community_entrances-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ting_community_entrances-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'community',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'preface_first',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -49,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -45,
      ),
      'ting' => array(
        'region' => 'preface_first',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -49,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-ting_community_slideshow-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ting_community_slideshow-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'community',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -41,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => 6,
      ),
      'ting' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -41,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-ting_events_popular-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ting_events_popular-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'begivenheder',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -45,
      ),
      'osto_web' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'osto_web',
        'weight' => -49,
      ),
      'ting' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -45,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-ting_latest_products-block'] = array(
    'cache' => -1,
    'css_class' => 'latest-content-products',
    'custom' => 0,
    'delta' => 'ting_latest_products-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => 7,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-ting_news_popular-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ting_news_popular-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -44,
      ),
      'osto_web' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'osto_web',
        'weight' => -48,
      ),
      'ting' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -44,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-ting_product_metadata-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ting_product_metadata-block_1',
    'module' => 'views',
    'node_types' => array(
      0 => 'product',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -43,
      ),
      'osto_web' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'osto_web',
        'weight' => -47,
      ),
      'ting' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -43,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-ting_product_partners-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ting_product_partners-block',
    'module' => 'views',
    'node_types' => array(
      0 => 'product',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -41,
      ),
      'osto_web' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'osto_web',
        'weight' => -44,
      ),
      'ting' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -41,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-ting_product_partners-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ting_product_partners-block_1',
    'module' => 'views',
    'node_types' => array(
      0 => 'product',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -40,
      ),
      'osto_web' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'osto_web',
        'weight' => -43,
      ),
      'ting' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -40,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-ting_projects-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ting_projects-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'preface_first',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -48,
      ),
      'osto_web' => array(
        'region' => 'preface_first',
        'status' => 1,
        'theme' => 'osto_web',
        'weight' => -48,
      ),
      'ting' => array(
        'region' => 'preface_first',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -48,
      ),
    ),
    'title' => 'Projekter',
    'visibility' => 1,
  );

  $export['views-ting_projects-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ting_projects-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => -14,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => 0,
      ),
    ),
    'title' => 'Projekter',
    'visibility' => 0,
  );

  $export['views-ting_sidebar_all_users-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ting_sidebar_all_users-block',
    'module' => 'views',
    'node_types' => array(
      0 => 'public_partner',
      1 => 'supplier',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -38,
      ),
      'osto_web' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'osto_web',
        'weight' => -41,
      ),
      'ting' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -38,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-ting_sidebar_fact-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ting_sidebar_fact-block',
    'module' => 'views',
    'node_types' => array(
      0 => 'public_partner',
      1 => 'supplier',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -39,
      ),
      'osto_web' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'osto_web',
        'weight' => -42,
      ),
      'ting' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -39,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-ting_sidebar_other_users-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ting_sidebar_other_users-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => 9,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-ting_sidebar_users-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ting_sidebar_users-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'osto_web' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osto_web',
        'weight' => 8,
      ),
      'ting' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ting',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-ting_slideshow-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ting_slideshow-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -24,
      ),
      'osto_web' => array(
        'region' => 'slideshow',
        'status' => 1,
        'theme' => 'osto_web',
        'weight' => -45,
      ),
      'ting' => array(
        'region' => 'slideshow',
        'status' => 1,
        'theme' => 'ting',
        'weight' => -24,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}

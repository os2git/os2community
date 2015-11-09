<?php

/**
 * Implements hook_panels_layouts()
 */
function ting_omega_12_twocol_foureight_panels_layouts() {
  $items['omega_12_twocol_foureight'] = array(
    'title' => t('Two column 4-8'),
    'category' => t('SP: 12 Column Grid'),
    'icon' => 'omega_12_twocol_foureight.png',
    'theme' => 'omega_12_twocol_foureight',
    'admin css' => '../omega_12_admin.css',
    'regions' => array(
    	'header' => t('Header'),
    	'sidebar' => t('Sidebar'),
    	'content' => t('Content'),
    	'footer' => t('Footer'),
    ),
  );
  return $items;
}
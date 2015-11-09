<?php

/**
 * Implements hook_panels_layouts()
 */
function ting_omega_12_twocol_eightfour_panels_layouts() {
  $items['omega_12_twocol_eightfour'] = array(
    'title' => t('Two column 8-4'),
    'category' => t('SP: 12 Column Grid'),
    'icon' => 'omega_12_twocol_eightfour.png',
    'theme' => 'omega_12_twocol_eightfour',
    'admin css' => '../omega_12_admin.css',
    'regions' => array(
    	'header' => t('Header'),
    	'left' => t('Left'),
    	'right' => t('Right'),
    	'footer' => t('Footer'),
    ),
  );
  return $items;
}
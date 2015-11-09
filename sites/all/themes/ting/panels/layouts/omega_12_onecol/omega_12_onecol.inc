<?php

/**
 * Implements hook_panels_layouts()
 */
function ting_omega_12_onecol_panels_layouts() {
  $items['omega_12_onecol'] = array(
    'title' => t('One column'),
    'category' => t('SP: 12 Column Grid'),
    'icon' => 'omega_12_onecol.png',
    'theme' => 'omega_12_onecol',
    'admin css' => '../omega_12_admin.css',
    'regions' => array(
    	'content' => t('Content'),
    ),
  );
  return $items;
}
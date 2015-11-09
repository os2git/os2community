<?php

/**
 * Implements hook_panels_layouts()
 */
function ting_omega_12_threecol_four_panels_layouts() {
  $items['omega_12_threecol_four'] = array(
    'title' => t('Three column 4-4-4'),
    'category' => t('SP: 12 Column Grid'),
    'icon' => 'omega_12_threecol_four.png',
    'theme' => 'omega_12_threecol_four',
    'admin css' => '../omega_12_admin.css',
    'regions' => array(
			'content' => t('Content'),
			'brick_left' => t('Brick left'),
			'brick_center' => t('Brick center'),
    	'brick_right' => t('Brick right'),
    	'footer' => t('Footer'),
    ),
  );
  return $items;
}
<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */
 
 /**
  * Breadcrumbs 
  */
function ting_delta_blocks_breadcrumb($variables) {
	
	$breadcrumb = $variables['breadcrumb'];

  if (!empty($breadcrumb)) {
    array_shift($breadcrumb); // Removes the Home item
    array_unshift($breadcrumb,l(t('Home'),'<front>', array("html" => TRUE)));
    $output = '<div class="breadcrumb">';
    $output .= implode(' <span class="sep">></span> ', $breadcrumb);
    $output .= ' <span class="sep">></span> '.drupal_get_title();
    $output .= '</div>';
    return $output;
  }
}

 /**
  * Implements hook_preprocess_field(). 
  */
function ting_preprocess_field(&$vars) {
	
  // Add line breaks to plain text textareas.
  if (($vars['element']['#field_type'] == 'text_long' || $vars['element']['#field_type'] == 'text_with_summary') && $vars['element']['#items'][0]['format'] == null) {
    $vars['items'][0]['#markup'] = nl2br($vars['items'][0]['#markup']);
  }
}

/**
 * TEXTAREAS
 */
function ting_textarea($variables) {
  $element = $variables['element'];
  $element['#attributes']['name'] = $element['#name'];
  $element['#attributes']['id'] = $element['#id'];
  $element['#attributes']['cols'] = $element['#cols'];
  $element['#attributes']['rows'] = 8;
  _form_set_class($element, array('form-textarea'));
 
  $wrapper_attributes = array(
    'class' => array('form-textarea-wrapper'),
  );
 
  // Add resizable behavior.
  if (!empty($element['#resizable'])) {
    $wrapper_attributes['class'][] = 'resizable';
  }
 
  $output = '<div' . drupal_attributes($wrapper_attributes) . '>';
  $output .= '<textarea' . drupal_attributes($element['#attributes']) . '>' . check_plain($element['#value']) . '</textarea>';
  $output .= '</div>';
  return $output;
}

function ting_preprocess_page(&$vars, $hook) {
  if (isset($vars['is_front']))
    unset($vars['page']['content']['system_main']['default_message']);
}

function ting_preprocess_forum_list(&$variables) {
	foreach ($variables['forums'] as $key => $forum) {		
		$latest = forum_get_topics($forum->tid,1,5);
		$variables['forums'][$key]->latest = $latest;		
	}	
}

/**
 * Form Alter
 */
function ting_form_alter($form, $form_state) {
	$views = array(
		'views-exposed-form-ting-projects-page',
		'views-exposed-form-ting-products-page',
		'views-exposed-form-ting-teams-page',

	);
	
	if(in_array($form["#id"], $views)) {
		if(isset($form["combine"])) {
			$form['combine']['#attributes']['placeholder'] = t('Enter your keywords here');
		}
	}
}
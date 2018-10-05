<?php

/**
 * @file
 * Contains admin page code for the addressfield static map module.
 */

/**
 * Admin form generation callback.
 */
function addressfield_staticmap_admin_form($form, &$form_state) {
  $address_fields = array(
    '' => t('- None -'),
  );
  $kml_fields = $address_fields;

  $fields = field_info_fields();
  foreach ($fields as $name => $field) {
    // Only display addressfields for this setting.
    if ($field['type'] == 'addressfield' || $field['type'] == 'location') {
      $address_fields[$name] = $name;
    }

    // Only display file fields that only accept KML uploads.
    if ($field['type'] != 'file') {
      continue;
    }

    foreach ($field['entity_types'] as $index => $entity_type) {
      if (!isset($field['bundles'][$entity_type])) {
        continue;
      }
      foreach ($field['bundles'][$entity_type] as $bundle_name) {
        $field_instance = field_info_instance($entity_type, $name, $bundle_name);
        if ($field_instance['settings']['file_extensions'] == 'kml') {
          $kml_fields[$bundle_name . '|' . $name] = $name . ' (' . $bundle_name . ')';
        }
      }
    }
  }

  // A list of map block types.
  $blocks = array(
    0 => array(
      'key' => 'addressfield_block_1',
      'name' => t('Map block type 1'),
    ),
    1 => array(
      'key' => 'addressfield_block_2',
      'name' => t('Map block type 2'),
    ),
  );

  $form['addressfield_staticmap_field_names'] = array(
    '#type' => 'select',
    '#title' => t('Address field'),
    '#description' => t('The address field(s) that should be used to generate the static map block.'),
    '#default_value' => variable_get('addressfield_staticmap_field_names', ''),
    '#options' => $address_fields,
    '#multiple' => TRUE,
  );
  $form['addressfield_staticmap_field_kml'] = array(
    '#type' => 'select',
    '#title' => t('KML file field'),
    '#description' => t('The file field(s) and specific bundles that should be used to attach KML files. Will only list file fields that only accept .kml files.'),
    '#default_value' => variable_get('addressfield_staticmap_field_kml', array()),
    '#options' => $kml_fields,
    '#multiple' => TRUE,
  );

  foreach ($blocks as $i => $block) {
    $form[$block['key']] = array(
      '#type' => 'fieldset',
      '#title' => check_plain($block['name']),
      '#collapsible' => TRUE,
      '#collapsed' => FALSE,
    );
    $form[$block['key']]['addressfield_staticmap_api_' . $i] = array(
      '#type' => 'select',
      '#title' => t('Mapping API'),
      '#description' => t('The API service to use to render static images.'),
      '#default_value' => variable_get('addressfield_staticmap_api_' . $i, 'google_maps'),
      '#options' => array(
        'google_maps' => t('Google Static Maps'),
        'google_maps_api' => t('Regular Google Maps with fallback to Static Map'),
        'mapquest' => t('Mapquest'),
      ),
    );
    $form[$block['key']]['addressfield_staticmap_premier_' . $i] = array(
      '#type' => 'checkbox',
      '#title' => t('Use Google Maps Premier support'),
      '#description' => t('Use Google Maps Premier support (requires a client ID and crypto key instead of an API key.'),
      '#default_value' => variable_get('addressfield_staticmap_premier_' . $i, FALSE),
      '#states' => array(
        'visible' => array(
          array("select[name=addressfield_staticmap_api_{$i}]" => array('value' => 'google_maps')),
          'or',
          array("select[name=addressfield_staticmap_api_{$i}]" => array('value' => 'google_maps_api')),
        ),
      ),
    );
    $form[$block['key']]['addressfield_staticmap_api_key_' . $i] = array(
      '#type' => 'textfield',
      '#title' => t('API key'),
      '#description' => t('API key for the service'),
      '#default_value' => variable_get('addressfield_staticmap_api_key_' . $i, ''),
      '#states' => array(
        'visible' => array(
          array(
            array(
              array("select[name=addressfield_staticmap_api_{$i}]" => array('value' => 'google_maps')),
              'or',
              array("select[name=addressfield_staticmap_api_{$i}]" => array('value' => 'google_maps_api')),
            ),
            ":input[name=addressfield_staticmap_premier_{$i}]" => array('checked' => FALSE),
          ),
          'or',
          array("select[name=addressfield_staticmap_api_{$i}]" => array('value' => 'mapquest')),
        ),
      ),
    );

    $form[$block['key']]['addressfield_staticmap_premium_client_id_' . $i] = array(
      '#type' => 'textfield',
      '#title' => t('Google Premium Client ID'),
      '#description' => t('Client ID for Google Premium'),
      '#default_value' => variable_get('addressfield_staticmap_premium_client_id_' . $i, ''),
      '#states' => array(
        'visible' => array(
          array(
            array("select[name=addressfield_staticmap_api_{$i}]" => array('value' => 'google_maps')),
            'or',
            array("select[name=addressfield_staticmap_api_{$i}]" => array('value' => 'google_maps_api')),
          ),
          ":input[name=addressfield_staticmap_premier_{$i}]" => array('checked' => TRUE),
        ),
      ),
    );

    $form[$block['key']]['addressfield_staticmap_premium_crypto_key_' . $i] = array(
      '#type' => 'textfield',
      '#title' => t('Google Premium Crypto Key'),
      '#description' => t('Crypto Key for Google Premium'),
      '#default_value' => variable_get('addressfield_staticmap_premium_crypto_key_' . $i, ''),
      '#states' => array(
        'visible' => array(
          array(
            array("select[name=addressfield_staticmap_api_{$i}]" => array('value' => 'google_maps')),
            'or',
            array("select[name=addressfield_staticmap_api_{$i}]" => array('value' => 'google_maps_api')),
          ),
          ":input[name=addressfield_staticmap_premier_{$i}]" => array('checked' => TRUE),
        ),
      ),
    );

    $form[$block['key']]['addressfield_staticmap_gmap_zoom_' . $i] = array(
      '#type' => 'select',
      '#title' => t('Zoom level'),
      '#description' => t('The zoom level to use on the map. Can be any of the options for Google Static Maps API or between 1 and 16 (inclusive) for Mapquest. The default is 14.'),
      '#default_value' => variable_get('addressfield_staticmap_gmap_zoom_' . $i, 14),
      '#options' => array('auto' => t('Auto')) + drupal_map_assoc(range(0, 21)),
      '#required' => TRUE,
    );
    $form[$block['key']]['addressfield_staticmap_gmap_size_' . $i] = array(
      '#type' => 'textfield',
      '#title' => t('Image size'),
      '#description' => t('Output size of the map image. Default is 400x400, must be defined in WIDTHxHEIGHT format.'),
      '#default_value' => variable_get('addressfield_staticmap_gmap_size_' . $i, '400x400'),
      '#required' => TRUE,
    );
    $form[$block['key']]['addressfield_staticmap_gmap_type_' . $i] = array(
      '#type' => 'select',
      '#title' => t('Map type'),
      '#description' => t('The format to use for the rendered map. Hybrid blends, satellite and roadmap.'),
      '#default_value' => variable_get('addressfield_staticmap_gmap_type_' . $i, 'roadmap'),
      '#options' => array(
        'roadmap' => t('Roadmap'),
        'satellite' => t('Satellite'),
        'terrain' => t('Terrain'),
        'hybrid' => t('Hybrid'),
      ),
    );
    $form[$block['key']]['addressfield_staticmap_scale_' . $i] = array(
      '#type' => 'select',
      '#title' => t('Scale'),
      '#description' => t('The scale parameter for the image (retina). 4 will only work on Google if you have a premium subscription.'),
      '#default_value' => variable_get('addressfield_staticmap_scale_' . $i, 1),
      '#options' => array(
        1 => t('1x'),
        2 => t('2x'),
        4 => t('4x'),
      ),
    );
    $form[$block['key']]['addressfield_staticmap_scroll_lock_' . $i] = array(
      '#type' => 'checkbox',
      '#default_value' => variable_get('addressfield_staticmap_scroll_lock_' . $i, FALSE),
      '#title' => t('Scroll lock'),
      '#description' => t('Tick this option to disable scrolling and zooming of the map.'),
    );
    $form[$block['key']]['addressfield_staticmap_additional_' . $i] = array(
      '#type' => 'textfield',
      '#title' => t('Additional Parameters'),
      '#description' => t('Additional parameters to use in the map URL (eg styling a map)'),
      '#default_value' => variable_get('addressfield_staticmap_additional_' . $i, ''),
      '#required' => FALSE,
    );
    $form[$block['key']]['addressfield_staticmap_gmap_show_address_' . $i] = array(
      '#type' => 'checkbox',
      '#title' => t('Show the address in text format'),
      '#description' => t('Check this option to display the address in readable, text format along with the map.'),
      '#default_value' => variable_get('addressfield_staticmap_gmap_show_address_' . $i, FALSE),
    );
    $form[$block['key']]['addressfield_staticmap_gmap_show_info_window_' . $i] = array(
      '#type' => 'checkbox',
      '#title' => t('Show the address in an info window'),
      '#description' => t('Check this option to display the address in readable, text format in an info window when you click on the marker.'),
      '#default_value' => variable_get('addressfield_staticmap_gmap_show_info_window_' . $i, FALSE),
    );
    $form[$block['key']]['addressfield_staticmap_gmap_link_' . $i] = array(
      '#type' => 'checkbox',
      '#title' => t('Link to actual Google map'),
      '#description' => t('Check this option to link the static image to a Google map.'),
      '#default_value' => variable_get('addressfield_staticmap_gmap_link_' . $i, FALSE),
    );
    $form[$block['key']]['addressfield_staticmap_gmap_link_target_' . $i] = array(
      '#type' => 'select',
      '#title' => t('Link target'),
      '#description' => t('The target attribute specifies where to open the linked map.'),
      '#default_value' => variable_get('addressfield_staticmap_gmap_link_target_' . $i, ''),
      '#options' => array(
        '' => t('Open the linked map in the same frame as it was clicked (Default)'),
        '_top' => t('Open the linked map in the full body of the window'),
        '_blank' => t('Open the linked map in a new window or tab'),
      ),
    );
    $form[$block['key']]['addressfield_staticmap_noopener_' . $i] = array(
      '#type' => 'checkbox',
      '#title' => t('Add rel=noopener'),
      '#description' => t('Add rel=noopener to links when opening a link in a new window or tab.'),
      '#default_value' => variable_get('addressfield_staticmap_noopener_' . $i, ''),
    );
    $form[$block['key']]['addressfield_staticmap_gmap_icon_url_' . $i] = array(
      '#type' => 'textfield',
      '#title' => t('Custom marker icon URL'),
      '#description' => t('Optional URL for custom marker icon to use instead of the regular Google map marker icon. Must be smaller than 64x64.'),
      '#default_value' => variable_get('addressfield_staticmap_gmap_icon_url_' . $i, ''),
    );
    $form[$block['key']]['addressfield_staticmap_directions_' . $i] = array(
      '#type' => 'fieldset',
      '#title' => t('Get directions link'),
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
    );
    $form[$block['key']]['addressfield_staticmap_directions_' . $i]['addressfield_staticmap_directions_link_' . $i] = array(
      '#type' => 'checkbox',
      '#title' => t('Show get directions link'),
      '#description' => t('If enabled, this option will display a text link to the Google map.'),
      '#default_value' => variable_get('addressfield_staticmap_directions_link_' . $i, FALSE),
    );
    $form[$block['key']]['addressfield_staticmap_directions_' . $i]['addressfield_staticmap_directions_text_' . $i] = array(
      '#type' => 'textfield',
      '#title' => t('Get directions link text'),
      '#description' => t('The text that should be used for this link.'),
      '#default_value' => variable_get('addressfield_staticmap_directions_text_' . $i, t('Get directions')),
      '#required' => TRUE,
    );
  }
  return system_settings_form($form);
}

/**
 * Admin form validation callback.
 *
 * @param array $form
 *   The built form.
 * @param array &$form_state
 *   The form state.
 */
function addressfield_staticmap_admin_form_validate(array $form, array &$form_state) {
  for ($index = 0; $index <= 1; $index++) {
    $zoom = $form_state['values']['addressfield_staticmap_gmap_zoom_' . $index];
    $api = $form_state['values']['addressfield_staticmap_api_' . $index];
    if ($api == 'google_maps') {
      if (!in_array($zoom, array('auto' => t('Auto')) + drupal_map_assoc(range(0, 21)))) {
        form_set_error('addressfield_staticmap_gmap_zoom_' . $index, t('Invalid zoom level. Please select auto or a value between 0 and 21 inclusive'));
        return;
      }
    }
    elseif ($api == 'mapquest') {
      if (!in_array($zoom, drupal_map_assoc(range(1, 16)))) {
        form_set_error('addressfield_staticmap_gmap_zoom_' . $index, t('Invalid zoom level. Please select a value between 1 and 16 inclusive.'));
        return;
      }
    }

    $size = $form_state['values']['addressfield_staticmap_gmap_size_' . $index];
    if (empty($size) && !preg_match('/^([0-9]+)x([0-9]+)$/', $size)) {
      form_set_error('addressfield_staticmap_gmap_size_' . $index, t('Invalid image size. Please enter a validly formatted dimension (ex: 400x400).'));
      return;
    }

    $icon_url = $form_state['values']['addressfield_staticmap_gmap_icon_url_' . $index];
    if (!empty($icon_url) && !valid_url($icon_url)) {
      form_set_error('addressfield_staticmap_gmap_icon_url_' . $index, t('Invalid marker icon URL.'));
      return;
    }

    // Mapquest requires an API key.
    $api_key = $form_state['values']['addressfield_staticmap_api_key_' . $index];
    if ($api == 'mapquest' && empty($api_key)) {
      form_set_error('addressfield_staticmap_api_key_' . $index, t('Mapquest requires an API key.'));
      return;
    }
  }
}

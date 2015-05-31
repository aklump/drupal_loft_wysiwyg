<?php
/**
 * @file
 * loft_wysiwyg_images_assets.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function loft_wysiwyg_images_assets_filter_default_formats() {
  $formats = array();

  // Exported format: WYSIWYG.
  $formats['wysiwyg'] = array(
    'format' => 'wysiwyg',
    'name' => 'WYSIWYG',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'image_resize_filter' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'link' => 1,
          'link_class' => '',
          'link_rel' => '',
          'image_locations' => array(
            'local' => 'local',
            'remote' => 'remote',
          ),
        ),
      ),
    ),
  );

  return $formats;
}

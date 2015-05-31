<?php
/**
 * @file
 * loft_wysiwyg_images_assets.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function loft_wysiwyg_images_assets_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-page-field_img_inline'
  $field_instances['node-page-field_img_inline'] = array(
    'bundle' => 'page',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_img_inline',
    'label' => 'Images',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'images/inline',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '2560x2560',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'insert' => 1,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'colorbox__large' => 0,
          'colorbox__medium' => 0,
          'colorbox__nivo_slider_slide' => 0,
          'colorbox__press_awards' => 0,
          'colorbox__product_extra' => 0,
          'colorbox__product_main' => 0,
          'colorbox__product_page' => 0,
          'colorbox__raddogs_photo_gallery' => 0,
          'colorbox__raddogs_photo_gallery_large' => 0,
          'colorbox__thumbnail' => 0,
          'icon_link' => 0,
          'image' => 0,
          'image_large' => 0,
          'image_medium' => 0,
          'image_nivo_slider_slide' => 0,
          'image_press_awards' => 0,
          'image_product_extra' => 0,
          'image_product_main' => 0,
          'image_product_page' => 0,
          'image_raddogs_photo_gallery' => 0,
          'image_raddogs_photo_gallery_large' => 0,
          'image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Images');

  return $field_instances;
}

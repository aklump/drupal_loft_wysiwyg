<?php
/**
 * @file
 * loft_wysiwyg_images_assets.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function loft_wysiwyg_images_assets_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_upload_images|node|page|form';
  $field_group->group_name = 'group_upload_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Upload Images',
    'weight' => '2',
    'children' => array(
      0 => 'field_img_inline',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Upload Images',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => 'After uploading one or more images from your computer, you will be able to insert them into your text.  Position your cursor at the text insertion point and then click the button marked <strong>insert</strong>.  Once you\'ve inserted the image, you may resize it by dragging the corners.  You can also distort the image by dragging the sides, top or bottom.',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_upload_images|node|page|form'] = $field_group;

  return $export;
}

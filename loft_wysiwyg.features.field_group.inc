<?php

/**
 * Implementation of hook_field_group_default_field_groups().
 */
function loft_wysiwyg_field_group_default_field_groups() {
  $field_groups = array();

  // Exported field_group: 'node-article-form-group_upload_images'
  $field_groups['node-article-form-group_upload_images'] = array(
    'group_name' => 'group_upload_images',
    'entity_type' => 'node',
    'bundle' => 'article',
    'mode' => 'form',
    'parent_name' => '',
    'label' => 'Upload Images',
    'weight' => '3',
    'children' => array(
      '0' => 'field_inline_images',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );

  // Exported field_group: 'node-page-form-group_upload_images'
  $field_groups['node-page-form-group_upload_images'] = array(
    'group_name' => 'group_upload_images',
    'entity_type' => 'node',
    'bundle' => 'page',
    'mode' => 'form',
    'parent_name' => '',
    'label' => 'Upload Images',
    'weight' => '2',
    'children' => array(
      '0' => 'field_inline_images',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Upload Images',
      'instance_settings' => array(
        'classes' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );

  return $field_groups;
}

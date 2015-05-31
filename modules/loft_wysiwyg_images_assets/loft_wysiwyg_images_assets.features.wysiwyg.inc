<?php
/**
 * @file
 * loft_wysiwyg_images_assets.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function loft_wysiwyg_images_assets_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: wysiwyg
  $profiles['wysiwyg'] = array(
    'format' => 'wysiwyg',
    'editor' => 'ckeditor_extended',
    'settings' => array(
      'default' => TRUE,
      'user_choose' => FALSE,
      'show_toggle' => FALSE,
      'theme' => 'advanced',
      'language' => 'en',
      'block_formats' => '',
      'toolbar' => array(
        0 => array(
          0 => 'Source',
          1 => 'PasteFromWord',
          2 => '|',
          3 => 'Format',
          4 => 'RemoveFormat',
          5 => 'Bold',
          6 => 'Italic',
          7 => 'Underline',
          8 => 'Strike',
          9 => '|',
          10 => 'DrupalImage',
          11 => 'HorizontalRule',
          12 => 'Table',
          13 => 'Anchor',
          14 => 'Link',
          15 => 'Unlink',
          16 => '|',
          17 => 'NumberedList',
          18 => 'BulletedList',
          19 => 'Blockquote',
          20 => '|',
          21 => 'Indent',
          22 => 'Outdent',
          23 => 'JustifyLeft',
          24 => 'JustifyCenter',
          25 => 'JustifyRight',
          26 => 'JustifyBlock',
          27 => '|',
          28 => '|',
          29 => 'Maximize',
        ),
      ),
      'format_list' => array(
        0 => 'p',
        1 => 'h1',
        2 => 'h2',
        3 => 'h3',
        4 => 'h4',
        5 => 'h5',
        6 => 'h6',
      ),
      'style_list' => array(
        0 => '',
      ),
    ),
  );

  return $profiles;
}

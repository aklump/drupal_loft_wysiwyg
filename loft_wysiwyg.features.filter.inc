<?php
/**
 * @file
 * loft_wysiwyg.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function loft_wysiwyg_filter_default_formats() {
  $formats = array();

  // Exported format: Full WYSIWYG
  $formats['full_wysiwyg'] = array(
    'format' => 'full_wysiwyg',
    'name' => 'Full WYSIWYG',
    'cache' => '1',
    'status' => '1',
    'weight' => '-9',
    'filters' => array(
      'filter_htmlcorrector' => array(
        'weight' => '-46',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => '-45',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'image_resize_filter' => array(
        'weight' => '-44',
        'status' => '1',
        'settings' => array(
          'link' => 0,
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

  // Exported format: Slim WYSIWYG
  $formats['slim_wysiwyg'] = array(
    'format' => 'slim_wysiwyg',
    'name' => 'Slim WYSIWYG',
    'cache' => '1',
    'status' => '1',
    'weight' => '-10',
    'filters' => array(
      'filter_html' => array(
        'weight' => '-10',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <img> <p>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '10',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}

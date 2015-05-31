<?php
/**
 * @file
 * loft_wysiwyg_images_assets.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function loft_wysiwyg_images_assets_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

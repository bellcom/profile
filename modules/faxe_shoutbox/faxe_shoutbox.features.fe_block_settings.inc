<?php
/**
 * @file
 * faxe_shoutbox.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function faxe_shoutbox_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['shoutbox-shoutbox'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'shoutbox',
    'module' => 'shoutbox',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'loop' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'loop',
        'weight' => 0,
      ),
      'loop_compact' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'loop_compact',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}

<?php

/**
 * @file
 * federated_default_content.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function federated_default_content_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['domain-switcher'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'switcher',
    'module' => 'domain',
    'node_types' => array(),
    'pages' => 'search-app
search-app*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
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

<?php
/**
 * @file
 * features_search_api_config.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function features_search_api_config_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer federated search'.
  $permissions['administer federated search'] = array(
    'name' => 'administer federated search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_api_federated_solr',
  );

  // Exported permission: 'administer search_api'.
  $permissions['administer search_api'] = array(
    'name' => 'administer search_api',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_api',
  );

  // Exported permission: 'use federated search'.
  $permissions['use federated search'] = array(
    'name' => 'use federated search',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search_api_federated_solr',
  );

  return $permissions;
}

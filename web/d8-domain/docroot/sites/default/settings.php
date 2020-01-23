<?php

$databases = array();
$databases['default']['default'] = array(
  'driver' => 'mysql',
  'database' => 'fs-demo-d8-domain',
  'username' => 'root',
  'password' => 'root',
  'host' => '127.0.0.1',
  'prefix' => '',
  'collation' => 'utf8mb4_general_ci',
);

$settings['config_sync_directory'] = '../../../config/sites/d8-domain';

$settings['hash_salt'] = '528a2e810ba1473af9118387b9ebb9fbe5634047cff5ab3bb29cc360dbf25c7a';
$settings['update_free_access'] = FALSE;
$settings['container_yamls'][] = __DIR__ . '/services.yml';

$settings['file_public_path'] = 'sites/default/files';
$settings['file_private_path'] = '';

$config['acquia_connector.settings']['hide_signup_messages'] = TRUE;

if (file_exists(__DIR__ . '/settings.local.php')) {
  include __DIR__ . '/settings.local.php';
}

<?php

$databases = array();
$databases['default']['default'] = array(
  'driver' => 'mysql',
  'database' => 'fs-demo-d8',
  'username' => 'root',
  'password' => 'root',
  'host' => '127.0.0.1',
  'prefix' => '',
  'collation' => 'utf8mb4_general_ci',
);

$config_directories = array();
$config_directories[CONFIG_SYNC_DIRECTORY] = '../../../config/sites/d8';

$settings['hash_salt'] = '528a2e810ba1473af9118387b9ebb9fbe5634047cff5ab3bb29cc360dbf25c7a';
$settings['update_free_access'] = FALSE;
$settings['container_yamls'][] = __DIR__ . '/services.yml';

$settings['file_public_path'] = 'sites/default/files';
$settings['file_private_path'] = '';

$config['acquia_connector.settings']['hide_signup_messages'] = TRUE;

if (file_exists(__DIR__ . '/settings.local.php')) {
  include __DIR__ . '/settings.local.php';
}

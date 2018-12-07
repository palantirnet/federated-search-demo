<?php

$databases = array();
$databases['default']['default'] = array(
  'driver' => 'mysql',
  'database' => '${drupal.database.database}',
  'username' => '${drupal.database.username}',
  'password' => '${drupal.database.password}',
  'host' => '${drupal.database.host}',
  'prefix' => '',
  'collation' => 'utf8mb4_general_ci',
);

$conf['file_public_path'] = '${drupal.settings.file_public_path}';
$conf['file_private_path'] = '${drupal.settings.file_private_path}';
$conf['file_temporary_path'] = '/tmp';

$config['acquia_connector.settings']['hide_signup_messages'] = TRUE;

if (file_exists(__DIR__ . '/settings.local.php')) {
  include __DIR__ . '/settings.local.php';
}

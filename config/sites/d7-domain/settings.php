<?php

$databases = array();
$databases['default']['default'] = array(
  'driver' => 'mysql',
  'database' => 'fs-demo-d7-domain',
  'username' => 'root',
  'password' => 'root',
  'host' => '127.0.0.1',
  'prefix' => '',
);

$conf['file_public_path'] = 'sites/default/files';
$conf['file_private_path'] = '';
$conf['file_temporary_path'] = '/tmp';

$config['acquia_connector.settings']['hide_signup_messages'] = TRUE;

if (file_exists(__DIR__ . '/settings.local.php')) {
  include __DIR__ . '/settings.local.php';
}

$cookie_domain = '.fs-demo.local';

/**
 * Add the domain module setup routine.
 */
include DRUPAL_ROOT . '/sites/all/modules/contrib/domain/settings.inc';

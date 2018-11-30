<?php

if (!isset($drush_major_version)) {
  $drush_version_components = explode('.', DRUSH_VERSION);
  $drush_major_version = $drush_version_components[0];
}

$aliases['local'] = array(
  'root' => '/var/www/federated-search-demo.local/web/',
  'uri' => 'www.federated-search-demo.local',
);

$aliases['local.ds_one'] = array(
  'root' => '/var/www/federated-search-demo.local/web/',
  'uri' => 'www.federated-search-demo.d8-1.local',
);

$aliases['local.ds_two'] = array(
  'root' => '/var/www/federated-search-demo.local/web/',
  'uri' => 'www.federated-search-demo.d8-2.local',
);

$aliases['local.ds_three'] = array(
  'root' => '/var/www/federated-search-demo.local/web/',
  'uri' => 'www.federated-search-demo.d8-3.local',
);

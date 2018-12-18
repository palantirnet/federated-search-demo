<?php

if (!isset($drush_major_version)) {
  $drush_version_components = explode('.', DRUSH_VERSION);
  $drush_major_version = $drush_version_components[0];
}

$aliases['local'] = array(
  'root' => '/var/www/federated-search-demo.local/web/d8/docroot',
  'uri' => 'd8.fs-demo.local',
);

$aliases['local.ds_one'] = array(
  'root' => '/var/www/federated-search-demo.local/web/d8-domain/docroot',
  'uri' => 'd8-1.fs-demo.local',
);

$aliases['local.ds_two'] = array(
  'root' => '/var/www/federated-search-demo.local/web/d8-domain/docroot',
  'uri' => 'd8-2.fs-demo.local',
);

$aliases['local.ds_three'] = array(
  'root' => '/var/www/federated-search-demo.local/web/d8-domain/docroot',
  'uri' => 'd8-3.fs-demo.local',
);

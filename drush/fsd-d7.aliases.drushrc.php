<?php

if (!isset($drush_major_version)) {
  $drush_version_components = explode('.', DRUSH_VERSION);
  $drush_major_version = $drush_version_components[0];
}

$aliases['local'] = array(
  'root' => '/var/www/federated-search-demo.local/web/d7/docroot',
  'uri' => 'fs-demo.d7.local',
);
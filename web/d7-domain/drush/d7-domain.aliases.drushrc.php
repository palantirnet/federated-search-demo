<?php

if (!isset($drush_major_version)) {
  $drush_version_components = explode('.', DRUSH_VERSION);
  $drush_major_version = $drush_version_components[0];
}

$aliases['one'] = array(
    'root' => '/var/www/federated-search-demo.local/web/d7-domain/docroot',
    'uri' => 'd7-1.fs-demo.local',
);

$aliases['two'] = array(
    'root' => '/var/www/federated-search-demo.local/web/d7-domain/docroot',
    'uri' => 'd7-2.fs-demo.local',
);

$aliases['three'] = array(
    'root' => '/var/www/federated-search-demo.local/web/d7-domain/docroot',
    'uri' => 'd7-3.fs-demo.local',
);

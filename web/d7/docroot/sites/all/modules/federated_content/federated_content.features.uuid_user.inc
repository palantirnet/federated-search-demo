<?php

/**
 * @file
 * federated_content.features.uuid_user.inc
 */

/**
 * Implements hook_uuid_features_default_users().
 */
function federated_content_uuid_features_default_users() {
  $users = array();

  $users[] = array(
  'name' => 'admin',
  'mail' => 'admin@example.com',
  'theme' => '',
  'signature' => '',
  'signature_format' => NULL,
  'created' => 1579545544,
  'status' => 1,
  'timezone' => 'UTC',
  'language' => '',
  'picture' => NULL,
  'init' => 'admin@example.com',
  'data' => FALSE,
  'uuid' => '33e73139-8794-42e1-8179-4a571eb1aaa4',
  'roles' => array(
    2 => 'authenticated user',
    3 => 'administrator',
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:UserAccount',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'homepage' => array(
      'predicates' => array(
        0 => 'foaf:page',
      ),
      'type' => 'rel',
    ),
  ),
  'date' => '2020-01-20 18:39:04 +0000',
);
  return $users;
}

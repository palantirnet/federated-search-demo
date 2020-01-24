<?php

/**
 * @file
 * federated_default_content.domains.inc
 */

/**
 * Implements hook_domain_default_domains().
 */
function federated_default_content_domain_default_domains() {
  $domains = array();
  $domains['d7_1_fs_demo_local'] = array(
    'subdomain' => 'd7-1.fs-demo.local',
    'sitename' => 'Domain 1 - Drupal 7',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => -1,
    'is_default' => 1,
    'machine_name' => 'd7_1_fs_demo_local',
  );
  $domains['d7_2_fs_demo_local'] = array(
    'subdomain' => 'd7-2.fs-demo.local',
    'sitename' => 'Domain 2 - Drupal 7',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => 1,
    'is_default' => 0,
    'machine_name' => 'd7_2_fs_demo_local',
  );
  $domains['d7_3_fs_demo_local'] = array(
    'subdomain' => 'd7-3.fs-demo.local',
    'sitename' => 'Domain 3 - Drupal 7',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => 2,
    'is_default' => 0,
    'machine_name' => 'd7_3_fs_demo_local',
  );

  return $domains;
}

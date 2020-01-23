<?php

/**
 * @file
 * features_search_api_config.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function features_search_api_config_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_federated_solr_has_site_name_property';
  $strongarm->value = 'true';
  $export['search_api_federated_solr_has_site_name_property'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_federated_solr_no_results_text';
  $strongarm->value = '';
  $export['search_api_federated_solr_no_results_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_federated_solr_page_buttons';
  $strongarm->value = '';
  $export['search_api_federated_solr_page_buttons'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_federated_solr_path';
  $strongarm->value = 'search-app';
  $export['search_api_federated_solr_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_federated_solr_rows';
  $strongarm->value = '';
  $export['search_api_federated_solr_rows'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_federated_solr_search_index';
  $strongarm->value = 'federated_search';
  $export['search_api_federated_solr_search_index'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_federated_solr_search_index_basic_auth_password';
  $strongarm->value = '';
  $export['search_api_federated_solr_search_index_basic_auth_password'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_federated_solr_search_index_basic_auth_username';
  $strongarm->value = '';
  $export['search_api_federated_solr_search_index_basic_auth_username'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_federated_solr_search_prompt_text';
  $strongarm->value = '';
  $export['search_api_federated_solr_search_prompt_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_federated_solr_set_search_site';
  $strongarm->value = 0;
  $export['search_api_federated_solr_set_search_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_federated_solr_show_empty_search_results';
  $strongarm->value = 1;
  $export['search_api_federated_solr_show_empty_search_results'] = $strongarm;

  return $export;
}

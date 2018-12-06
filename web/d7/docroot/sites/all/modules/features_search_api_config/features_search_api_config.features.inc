<?php
/**
 * @file
 * features_search_api_config.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_search_api_config_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_search_api_index().
 */
function features_search_api_config_default_search_api_index() {
  $items = array();
  $items['federated_search'] = entity_import('search_api_index', '{
    "name" : "Federated search",
    "machine_name" : "federated_search",
    "description" : null,
    "server" : "local_server",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-50",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "-49", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "-48", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "-47", "settings" : [] },
        "search_api_alter_add_viewed_entity" : {
          "status" : 1,
          "weight" : "-46",
          "settings" : { "mode" : "search_index" }
        },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "-45", "settings" : { "fields" : [] } },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "-44", "settings" : [] },
        "site_name" : {
          "status" : 1,
          "weight" : "-43",
          "settings" : { "site_name" : "Federated SOLR D7" }
        },
        "federated_field" : {
          "status" : 1,
          "weight" : "-42",
          "settings" : {
            "fields" : {
              "federated_image" : {
                "label" : "Federated Image",
                "machine_name" : "federated_image",
                "type" : "uri",
                "bundle" : { "article" : "", "page" : "" },
                "actions" : { "remove" : "Remove field" }
              },
              "federated_type" : {
                "label" : "Federated Type",
                "machine_name" : "federated_type",
                "type" : "string",
                "bundle" : { "article" : "", "page" : "" },
                "actions" : { "remove" : "Remove field" }
              }
            },
            "actions" : { "add_field_federated" : "Add new federated field" }
          }
        },
        "remap" : {
          "status" : 1,
          "weight" : "-41",
          "settings" : {
            "remap" : {
              "federated_title" : "title",
              "federated_date" : "created",
              "federated_type" : "0",
              "federated_terms" : "0",
              "federated_image" : "0",
              "rendered_item" : "search_api_viewed"
            },
            "properties" : {
              "federated_title" : {
                "label" : "Title (remapped from title)",
                "description" : "The title of the node.",
                "type" : "text"
              },
              "federated_date" : {
                "label" : "Date created (remapped from created)",
                "description" : "The date the node was posted.",
                "type" : "date"
              },
              "rendered_item" : {
                "label" : "Entity HTML output (remapped from search_api_viewed)",
                "description" : "The whole HTML content of the entity when viewed.",
                "type" : "text"
              }
            }
          }
        },
        "search_api_urls" : { "status" : 1, "weight" : "-40", "settings" : [] },
        "federated_terms" : { "status" : 1, "weight" : "-39", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : [],
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : { "fields" : [], "spaces" : "[^[:alnum:]]", "ignorable" : "[\\u0027]" }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : [],
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_porter_stemmer" : {
          "status" : 0,
          "weight" : "35",
          "settings" : { "fields" : [], "exceptions" : "texan=texa" }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "40",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always",
            "highlight_partial" : 0
          }
        }
      },
      "fields" : {
        "federated_date" : { "type" : "date" },
        "federated_image" : { "type" : "uri" },
        "federated_terms" : { "type" : "list\\u003Cstring\\u003E" },
        "federated_title" : { "type" : "text" },
        "federated_type" : { "type" : "string" },
        "rendered_item" : { "type" : "text" },
        "search_api_language" : { "type" : "string" },
        "site_name" : { "type" : "list\\u003Cstring\\u003E" },
        "urls" : { "type" : "list\\u003Curi\\u003E" }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function features_search_api_config_default_search_api_server() {
  $items = array();
  $items['local_server'] = entity_import('search_api_server', '{
    "name" : "Local server",
    "machine_name" : "local_server",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids" : true,
      "site_hash" : true,
      "scheme" : "http",
      "host" : "federated-search-demo.local",
      "port" : "8983",
      "path" : "\\/solr\\/drupal8",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "skip_schema_check" : 0,
      "solr_version" : "",
      "http_method" : "AUTO",
      "log_query" : 0,
      "log_response" : 0,
      "commits_disabled" : 0
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}

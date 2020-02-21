<?php

/**
 * @file
 * federated_default_content.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function federated_default_content_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Mutt',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'article',
  'language' => 'und',
  'created' => 1579880127,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '238d4b09-ffb1-4037-ad9a-3420c58b92ab',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Leash bang collar tail lap dog, come leash play dead tail. k9 tug bark leap bang release lab, catch take it. great dance bark collar, shake leave it tug down. Puppy dog tug dog bone, lap dog dog take it come leap. Catch milk bone bell leave it, puppy catch dog house shake bring it peanut butter dog house jump.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_image' => array(),
  'field_age' => array(
    'und' => array(
      0 => array(
        'tid' => '1eec55eb-c188-4a08-ba07-4fe416393573',
        'uuid' => '1eec55eb-c188-4a08-ba07-4fe416393573',
      ),
    ),
  ),
  'field_color' => array(
    'und' => array(
      0 => array(
        'target_id' => 'd387e61f-74ee-42b3-b13e-c125a967b295',
        'uuid' => 'd387e61f-74ee-42b3-b13e-c125a967b295',
      ),
    ),
  ),
  'field_traits' => array(
    'und' => array(
      0 => array(
        'tid' => '3314295d-522e-4182-a5dc-93ce20aecfe3',
        'uuid' => '3314295d-522e-4182-a5dc-93ce20aecfe3',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'field_image' => array(
      'predicates' => array(
        0 => 'og:image',
        1 => 'rdfs:seeAlso',
      ),
      'type' => 'rel',
    ),
    'field_tags' => array(
      'predicates' => array(
        0 => 'dc:subject',
      ),
      'type' => 'rel',
    ),
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'comment_count' => 0,
  'domains' => array(
    2 => 2,
    3 => 3,
  ),
  'domain_site' => FALSE,
  'subdomains' => array(
    0 => 'Search Domain Two',
    1 => 'Search Domain Three',
  ),
  'date' => '2020-01-24 15:35:27 +0000',
  'user_uuid' => '94057913-2021-4b57-ae33-2f89dbaf0d0a',
);
  $nodes[] = array(
  'title' => 'Dalmation',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'article',
  'language' => 'und',
  'created' => 1579880046,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '4a79fa89-e294-4d5a-b230-740dd71ea658',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Fetch bite play dead, kibbles bark down peanut butter catch. Sit roll over shake shake jump puppies down sit pretty. Dog toy tennis ball bite jump shake sit vet, peanut butter take it. Come bring it jump lap dog, play dead tennis ball fetch. tennis ball bang come, peanut butter. Come jump catch squirrel, paw heel tennis ball bell leash leash. Vet fetch bang fetch lab, bring it paw stand release. Spin roll over collar milk bone, lap dog squeak toy tennis ball leash leash. Bang tug shake k9 bark squeak toy down.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_image' => array(),
  'field_age' => array(
    'und' => array(
      0 => array(
        'tid' => 'f656f669-22d7-44cd-8bde-8c342f9d5858',
        'uuid' => 'f656f669-22d7-44cd-8bde-8c342f9d5858',
      ),
    ),
  ),
  'field_color' => array(),
  'field_traits' => array(
    'und' => array(
      0 => array(
        'tid' => '3314295d-522e-4182-a5dc-93ce20aecfe3',
        'uuid' => '3314295d-522e-4182-a5dc-93ce20aecfe3',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'field_image' => array(
      'predicates' => array(
        0 => 'og:image',
        1 => 'rdfs:seeAlso',
      ),
      'type' => 'rel',
    ),
    'field_tags' => array(
      'predicates' => array(
        0 => 'dc:subject',
      ),
      'type' => 'rel',
    ),
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'comment_count' => 0,
  'domains' => array(
    1 => 1,
  ),
  'domain_site' => TRUE,
  'subdomains' => array(
    0 => 'All affiliates',
    1 => 'Search Domain One',
  ),
  'date' => '2020-01-24 15:34:06 +0000',
  'user_uuid' => '94057913-2021-4b57-ae33-2f89dbaf0d0a',
);
  $nodes[] = array(
  'title' => 'Schipperke',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'und',
  'created' => 1579879956,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '65b7b9ab-3998-4d17-b066-0e749c11ff38',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Dog house kong dog bone squeak toy. bite bring it dog, roll over fetch catch lab take it chew toy stay. Bark shake leap, paw tug leap bite lap dog. K9 k9 peanut butter dog bone heel, chew toy dog bone speak squirrel spin. puppies puppy, spin lap dog bite play dead sit leash. Tail tail great dance collar come tail, bring it spin puppies. sit pretty, shake roll over dog toy shake sit pretty. Sit leash dog house chew toy fetch. tug sit dog house speak fetch.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_age' => array(
    'und' => array(
      0 => array(
        'tid' => '1eec55eb-c188-4a08-ba07-4fe416393573',
        'uuid' => '1eec55eb-c188-4a08-ba07-4fe416393573',
      ),
    ),
  ),
  'field_color' => array(
    'und' => array(
      0 => array(
        'target_id' => '7b4c09e9-4801-4b8e-a68f-b1eebba5b6bb',
        'uuid' => '7b4c09e9-4801-4b8e-a68f-b1eebba5b6bb',
      ),
    ),
  ),
  'field_traits' => array(
    'und' => array(
      0 => array(
        'tid' => '3314295d-522e-4182-a5dc-93ce20aecfe3',
        'uuid' => '3314295d-522e-4182-a5dc-93ce20aecfe3',
      ),
      1 => array(
        'tid' => '2fc26e3a-620f-4ba2-b167-dffee783751c',
        'uuid' => '2fc26e3a-620f-4ba2-b167-dffee783751c',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'comment_count' => 0,
  'domains' => array(
    1 => 1,
  ),
  'domain_site' => TRUE,
  'subdomains' => array(
    0 => 'All affiliates',
    1 => 'Search Domain One',
  ),
  'date' => '2020-01-24 15:32:36 +0000',
  'user_uuid' => '94057913-2021-4b57-ae33-2f89dbaf0d0a',
);
  $nodes[] = array(
  'title' => 'Great Dane',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'und',
  'created' => 1579880225,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a31e3333-8218-4eac-a277-ea451292beac',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Peanut butter milk bone tug bark, heel bell lap dog. Fetch great dance dog bring it, tennis ball jump lap dog. Dog toy bark puppy stay spin milk bone, come tug come.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_age' => array(
    'und' => array(
      0 => array(
        'tid' => '71dd39e8-4220-4cda-8be5-997b7695e66f',
        'uuid' => '71dd39e8-4220-4cda-8be5-997b7695e66f',
      ),
    ),
  ),
  'field_color' => array(
    'und' => array(
      0 => array(
        'target_id' => '06e7a413-5755-41b8-8dc9-e09762b9c9be',
        'uuid' => '06e7a413-5755-41b8-8dc9-e09762b9c9be',
      ),
    ),
  ),
  'field_traits' => array(
    'und' => array(
      0 => array(
        'tid' => '2fc26e3a-620f-4ba2-b167-dffee783751c',
        'uuid' => '2fc26e3a-620f-4ba2-b167-dffee783751c',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'comment_count' => 0,
  'domains' => array(
    1 => 1,
    3 => 3,
  ),
  'domain_site' => FALSE,
  'subdomains' => array(
    0 => 'Search Domain One',
    1 => 'Search Domain Three',
  ),
  'date' => '2020-01-24 15:37:05 +0000',
  'user_uuid' => '94057913-2021-4b57-ae33-2f89dbaf0d0a',
);
  $nodes[] = array(
  'title' => 'Chihuahua ',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'und',
  'created' => 1579880094,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'bce095d6-80db-4f17-adf0-c287114083cf',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Fetch bite play dead, kibbles bark down peanut butter catch. Sit roll over shake shake jump puppies down sit pretty. Dog toy tennis ball bite jump shake sit vet, peanut butter take it. Come bring it jump lap dog, play dead tennis ball fetch. tennis ball bang come, peanut butter. Come jump catch squirrel, paw heel tennis ball bell leash leash. Vet fetch bang fetch lab, bring it paw stand release. Spin roll over collar milk bone, lap dog squeak toy tennis ball leash leash. Bang tug shake k9 bark squeak toy down.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_age' => array(
    'und' => array(
      0 => array(
        'tid' => '71dd39e8-4220-4cda-8be5-997b7695e66f',
        'uuid' => '71dd39e8-4220-4cda-8be5-997b7695e66f',
      ),
    ),
  ),
  'field_color' => array(
    'und' => array(
      0 => array(
        'target_id' => '06e7a413-5755-41b8-8dc9-e09762b9c9be',
        'uuid' => '06e7a413-5755-41b8-8dc9-e09762b9c9be',
      ),
    ),
  ),
  'field_traits' => array(
    'und' => array(
      0 => array(
        'tid' => '03140448-dc7d-4079-bc33-30db6d35c793',
        'uuid' => '03140448-dc7d-4079-bc33-30db6d35c793',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'comment_count' => 0,
  'domains' => array(
    2 => 2,
  ),
  'domain_site' => FALSE,
  'subdomains' => array(
    0 => 'Search Domain Two',
  ),
  'date' => '2020-01-24 15:34:54 +0000',
  'user_uuid' => '94057913-2021-4b57-ae33-2f89dbaf0d0a',
);
  $nodes[] = array(
  'title' => 'Toy Spaniel',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'article',
  'language' => 'und',
  'created' => 1579880188,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'dc51b7dc-fc75-48c1-ac01-a85ed79f9da7',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Spin shake vet chew toy squeak toy dog bowl dog toy. Bite down, lab dog bone leave it come dog. Tug chew toy, jump tail bell squirrel fetch kibbles.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_image' => array(),
  'field_age' => array(
    'und' => array(
      0 => array(
        'tid' => 'f656f669-22d7-44cd-8bde-8c342f9d5858',
        'uuid' => 'f656f669-22d7-44cd-8bde-8c342f9d5858',
      ),
    ),
  ),
  'field_color' => array(
    'und' => array(
      0 => array(
        'target_id' => '06e7a413-5755-41b8-8dc9-e09762b9c9be',
        'uuid' => '06e7a413-5755-41b8-8dc9-e09762b9c9be',
      ),
    ),
  ),
  'field_traits' => array(
    'und' => array(
      0 => array(
        'tid' => '03140448-dc7d-4079-bc33-30db6d35c793',
        'uuid' => '03140448-dc7d-4079-bc33-30db6d35c793',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'field_image' => array(
      'predicates' => array(
        0 => 'og:image',
        1 => 'rdfs:seeAlso',
      ),
      'type' => 'rel',
    ),
    'field_tags' => array(
      'predicates' => array(
        0 => 'dc:subject',
      ),
      'type' => 'rel',
    ),
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'comment_count' => 0,
  'domains' => array(
    3 => 3,
  ),
  'domain_site' => FALSE,
  'subdomains' => array(
    0 => 'Search Domain Three',
  ),
  'date' => '2020-01-24 15:36:28 +0000',
  'user_uuid' => '94057913-2021-4b57-ae33-2f89dbaf0d0a',
);
  return $nodes;
}

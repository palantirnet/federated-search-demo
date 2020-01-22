<?php

/**
 * @file
 * federated_content.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function federated_content_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Irish Terrier',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'article',
  'language' => 'und',
  'created' => 1579572053,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '00c10e22-e61d-43d9-8852-4f5822be2a6c',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Ball down roll over bell sit pretty dog toy dog bone. Milk bone k9 dog toy tail release dog. Squirrel release collar lab sit dog toy dog house. Puppy bring it, peanut butter leash milk bone dog bowl catch chew toy. Leave it stand k9, catch roll over jump shake stand. come tug come puppies squeak toy speak, peanut butter squirrel k9 speak. Squirrel shake bring it peanut butter squirrel dog toy, spin stand. Dog bone dog chew toy fetch tug. Come roll over bang, down roll over collar great dance great dance lap dog leave it stand.',
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
        'tid' => '71dd39e8-4220-4cda-8be5-997b7695e66f',
        'uuid' => '71dd39e8-4220-4cda-8be5-997b7695e66f',
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
  'field_color' => array(
    'und' => array(
      0 => array(
        'tid' => 'fc091dfd-e82e-4296-b5b6-0dfc588b92a9',
        'uuid' => 'fc091dfd-e82e-4296-b5b6-0dfc588b92a9',
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
  'date' => '2020-01-21 02:00:53 +0000',
  'user_uuid' => '33e73139-8794-42e1-8179-4a571eb1aaa4',
);
  $nodes[] = array(
  'title' => 'American Water Spaniel',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'und',
  'created' => 1579571337,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3e170d1e-1fa7-4097-9e2e-f7ce44792467',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Lap dog play dead kibbles leash dog bite release. Dog leap vet, tennis ball shake tail lab dog toy. Squeak toy squeak toy, k9 k9 stand jump vet sit squeak toy chew toy stand bring it. Bring it great dance tail tail leave it bang play dead squirrel. Sit pretty leash kibbles tennis ball paw, stay puppy squirrel tennis ball. release bell sit pretty milk bone vet, dog house heel stand dog house. Speak tail dog toy paw bring it collar shake, sit bark bang tail. Bell puppy leave it peanut butter leash. Leap leash bark squirrel puppy, bang paw release.',
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
  'field_traits' => array(
    'und' => array(
      0 => array(
        'tid' => '2fc26e3a-620f-4ba2-b167-dffee783751c',
        'uuid' => '2fc26e3a-620f-4ba2-b167-dffee783751c',
      ),
    ),
  ),
  'field_color' => array(
    'und' => array(
      0 => array(
        'tid' => '6ff642c5-a0e0-4bb3-8419-65e03a0c5a86',
        'uuid' => '6ff642c5-a0e0-4bb3-8419-65e03a0c5a86',
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
  'date' => '2020-01-21 01:48:57 +0000',
  'user_uuid' => '33e73139-8794-42e1-8179-4a571eb1aaa4',
);
  $nodes[] = array(
  'title' => 'Basenji',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'und',
  'created' => 1579567178,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6fe99c23-0cda-4ae6-affe-dd4c9538bfdd',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Sit pretty squeak toy kong dog bone release leap fetch release. Jump kong leap play dead leave it take it dog bone, leash catch jump lap dog spin. Play dead bark lab peanut butter bang. Roll over bring it vet jump lab, leave it tail puppy. Squeak toy fetch great dance come milk bone puppies shake.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_age' => array(
    'und' => array(
      0 => array(
        'tid' => 'f656f669-22d7-44cd-8bde-8c342f9d5858',
        'uuid' => 'f656f669-22d7-44cd-8bde-8c342f9d5858',
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
  'field_color' => array(
    'und' => array(
      0 => array(
        'tid' => '1f522b08-d8b4-4719-9193-c244c10c9972',
        'uuid' => '1f522b08-d8b4-4719-9193-c244c10c9972',
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
  'date' => '2020-01-21 00:39:38 +0000',
  'user_uuid' => '33e73139-8794-42e1-8179-4a571eb1aaa4',
);
  $nodes[] = array(
  'title' => 'Lhasa Apso',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'und',
  'created' => 1579571361,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '74b8532e-3203-4b88-90e2-f9af252da610',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Dog bone heel peanut butter lab puppy peanut butter spin. Leap kibbles come bell milk bone chew toy. Leap play dead leap paw.',
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
  'field_traits' => array(
    'und' => array(
      0 => array(
        'tid' => '03140448-dc7d-4079-bc33-30db6d35c793',
        'uuid' => '03140448-dc7d-4079-bc33-30db6d35c793',
      ),
    ),
  ),
  'field_color' => array(
    'und' => array(
      0 => array(
        'tid' => 'fc091dfd-e82e-4296-b5b6-0dfc588b92a9',
        'uuid' => 'fc091dfd-e82e-4296-b5b6-0dfc588b92a9',
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
  'date' => '2020-01-21 01:49:21 +0000',
  'user_uuid' => '33e73139-8794-42e1-8179-4a571eb1aaa4',
);
  $nodes[] = array(
  'title' => 'Welsh Springer Spaniel',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'und',
  'created' => 1579571301,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '8d8e9523-a06d-4c60-9f79-b6c9bb5fef84',
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
  'field_traits' => array(
    'und' => array(
      0 => array(
        'tid' => '3314295d-522e-4182-a5dc-93ce20aecfe3',
        'uuid' => '3314295d-522e-4182-a5dc-93ce20aecfe3',
      ),
    ),
  ),
  'field_color' => array(
    'und' => array(
      0 => array(
        'tid' => '6ff642c5-a0e0-4bb3-8419-65e03a0c5a86',
        'uuid' => '6ff642c5-a0e0-4bb3-8419-65e03a0c5a86',
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
  'date' => '2020-01-21 01:48:21 +0000',
  'user_uuid' => '33e73139-8794-42e1-8179-4a571eb1aaa4',
);
  $nodes[] = array(
  'title' => 'English Terrier',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'article',
  'language' => 'und',
  'created' => 1579571979,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b4002bc5-f02e-4937-81fa-e640a44a70d4',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Leap kong collar, tail kong kibbles. Down bite, chew toy bring it lab dog bowl puppies bang peanut butter. Lap dog take it dog sit leash peanut butter.',
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
        'tid' => '71dd39e8-4220-4cda-8be5-997b7695e66f',
        'uuid' => '71dd39e8-4220-4cda-8be5-997b7695e66f',
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
  'field_color' => array(
    'und' => array(
      0 => array(
        'tid' => 'fc091dfd-e82e-4296-b5b6-0dfc588b92a9',
        'uuid' => 'fc091dfd-e82e-4296-b5b6-0dfc588b92a9',
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
  'date' => '2020-01-21 01:59:39 +0000',
  'user_uuid' => '33e73139-8794-42e1-8179-4a571eb1aaa4',
);
  $nodes[] = array(
  'title' => 'Newfoundland',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'article',
  'language' => 'und',
  'created' => 1579572007,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c99cf66f-6e37-4dcd-a9f9-013e4a4370e3',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Down squirrel leash paw k9 collar tennis ball, squeak toy down peanut butter sit pretty. Lab sit pretty puppy, puppy bark shake dog bowl bark. Lab paw squirrel. K9 tug catch shake, leash peanut butter dog bowl milk bone peanut butter chew toy lab. puppies jump bite bark dog toy.',
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
        'tid' => '71dd39e8-4220-4cda-8be5-997b7695e66f',
        'uuid' => '71dd39e8-4220-4cda-8be5-997b7695e66f',
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
  'field_color' => array(
    'und' => array(
      0 => array(
        'tid' => '1f522b08-d8b4-4719-9193-c244c10c9972',
        'uuid' => '1f522b08-d8b4-4719-9193-c244c10c9972',
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
  'date' => '2020-01-21 02:00:07 +0000',
  'user_uuid' => '33e73139-8794-42e1-8179-4a571eb1aaa4',
);
  $nodes[] = array(
  'title' => 'German Shepherd',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'article',
  'language' => 'und',
  'created' => 1579572029,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd66e78d4-ee7b-4e0c-9931-86f39f1ffbc2',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Dog house, lap dog puppy great dance paw bang dog bone. Bite collar catch dog toy stand squeak toy. Leash vet tail catch roll over down bang stay. Collar dog bowl, play dead catch sit puppy dog house. Tennis ball roll over fetch dog shake. Bite milk bone fetch bring it bark release. down peanut butter heel dog toy catch, spin sit. Kong sit pretty tail leash vet, milk bone leash squirrel heel sit leash bang. Paw bark jump stand, puppies fetch kibbles lab.',
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
        'tid' => '71dd39e8-4220-4cda-8be5-997b7695e66f',
        'uuid' => '71dd39e8-4220-4cda-8be5-997b7695e66f',
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
  'field_color' => array(
    'und' => array(
      0 => array(
        'tid' => '1f522b08-d8b4-4719-9193-c244c10c9972',
        'uuid' => '1f522b08-d8b4-4719-9193-c244c10c9972',
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
  'date' => '2020-01-21 02:00:29 +0000',
  'user_uuid' => '33e73139-8794-42e1-8179-4a571eb1aaa4',
);
  $nodes[] = array(
  'title' => 'English Cocker Spaniel',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'article',
  'language' => 'und',
  'created' => 1579572073,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e69ba5a1-fb4f-41f0-8f12-b8d1872c4af1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Leash sit leave it, leap tail lap dog tug dog spin bite. Puppy tail bell squeak toy bark shake dog bowl. paw lap dog, kibbles stay catch shake sit pretty take it. Leash dog bone squeak toy, stay sit peanut butter puppies. come kong fetch roll over tug. Tennis ball puppy peanut butter jump leave it puppy dog. Squeak toy tug, release stay dog bowl take it dog house. Heel kibbles milk bone tail, chew toy bark great dance stand down stand. Bring it collar dog sit pretty squeak toy dog house.',
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
  'field_traits' => array(
    'und' => array(
      0 => array(
        'tid' => '03140448-dc7d-4079-bc33-30db6d35c793',
        'uuid' => '03140448-dc7d-4079-bc33-30db6d35c793',
      ),
    ),
  ),
  'field_color' => array(
    'und' => array(
      0 => array(
        'tid' => '1f522b08-d8b4-4719-9193-c244c10c9972',
        'uuid' => '1f522b08-d8b4-4719-9193-c244c10c9972',
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
  'date' => '2020-01-21 02:01:13 +0000',
  'user_uuid' => '33e73139-8794-42e1-8179-4a571eb1aaa4',
);
  $nodes[] = array(
  'title' => 'Akita',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'und',
  'created' => 1579571320,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ec9df35b-0c09-4a1c-9962-6577be3126c3',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Chew toy bang leap, kong lab down dog toy puppies. Dog toy down bang leash, sit bark spin tennis ball. dog toy peanut butter leave it dog, dog house stand jump bang bark.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_age' => array(
    'und' => array(
      0 => array(
        'tid' => 'f656f669-22d7-44cd-8bde-8c342f9d5858',
        'uuid' => 'f656f669-22d7-44cd-8bde-8c342f9d5858',
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
  'field_color' => array(
    'und' => array(
      0 => array(
        'tid' => '6ff642c5-a0e0-4bb3-8419-65e03a0c5a86',
        'uuid' => '6ff642c5-a0e0-4bb3-8419-65e03a0c5a86',
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
  'date' => '2020-01-21 01:48:40 +0000',
  'user_uuid' => '33e73139-8794-42e1-8179-4a571eb1aaa4',
);
  return $nodes;
}

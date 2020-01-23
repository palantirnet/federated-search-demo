<?php

/**
 * @file
 * federated_default_content.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function federated_default_content_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Curious',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '03140448-dc7d-4079-bc33-30db6d35c793',
    'vocabulary_machine_name' => 'traits',
    'field_federated_terms' => array(
      'und' => array(
        0 => array(
          'value' => 'Traits>Curious',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Brown',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '06e7a413-5755-41b8-8dc9-e09762b9c9be',
    'vocabulary_machine_name' => 'coloring',
    'field_federated_terms' => array(
      'und' => array(
        0 => array(
          'value' => 'Color>Brown',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Puppy',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '1eec55eb-c188-4a08-ba07-4fe416393573',
    'vocabulary_machine_name' => 'age',
    'field_federated_terms' => array(
      'und' => array(
        0 => array(
          'value' => 'Age>Puppy',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Athletic',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '2fc26e3a-620f-4ba2-b167-dffee783751c',
    'vocabulary_machine_name' => 'traits',
    'field_federated_terms' => array(
      'und' => array(
        0 => array(
          'value' => 'Traits>Athletic',
        ),
        1 => array(
          'value' => 'Traits>Energetic',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Affectionate',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '3314295d-522e-4182-a5dc-93ce20aecfe3',
    'vocabulary_machine_name' => 'traits',
    'field_federated_terms' => array(
      'und' => array(
        0 => array(
          'value' => 'Traits>Loyal',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Mature',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '71dd39e8-4220-4cda-8be5-997b7695e66f',
    'vocabulary_machine_name' => 'age',
    'field_federated_terms' => array(
      'und' => array(
        0 => array(
          'value' => 'Age>Mature',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Black',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '7b4c09e9-4801-4b8e-a68f-b1eebba5b6bb',
    'vocabulary_machine_name' => 'coloring',
    'field_federated_terms' => array(
      'und' => array(
        0 => array(
          'value' => 'Color>Black',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Gold',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd387e61f-74ee-42b3-b13e-c125a967b295',
    'vocabulary_machine_name' => 'coloring',
    'field_federated_terms' => array(
      'und' => array(
        0 => array(
          'value' => 'Color>Gold',
        ),
        1 => array(
          'value' => 'Color>Yellow',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Adult',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'f656f669-22d7-44cd-8bde-8c342f9d5858',
    'vocabulary_machine_name' => 'age',
    'field_federated_terms' => array(
      'und' => array(
        0 => array(
          'value' => 'Age>Adult',
        ),
      ),
    ),
  );
  return $terms;
}

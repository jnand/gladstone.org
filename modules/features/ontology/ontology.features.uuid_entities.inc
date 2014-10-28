<?php
/**
 * @file
 * ontology.features.uuid_entities.inc
 */

/**
 * Implements hook_uuid_default_entities().
 */
function ontology_uuid_default_entities() {
  $entities = array();

  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/da79160e-8e47-461b-a277-d802e04c3926',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Research',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/research',
        'language' => 'und',
      ),
    ),
    'uuid' => 'da79160e-8e47-461b-a277-d802e04c3926',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 7,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/a523ee86-1fb4-4c3f-8ad0-effe5b9173cc',
      'cause' => FALSE,
    ),
    'description' => NULL,
    'format' => NULL,
    'name' => 'Scientific Advisory Board Member',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/scientific-advisory-board-member',
        'language' => 'und',
      ),
    ),
    'uuid' => 'a523ee86-1fb4-4c3f-8ad0-effe5b9173cc',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 0,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/c5dda8f9-c5bb-4aac-84fc-aa685883f010',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'President',
    'parent' => array(
      0 => 'da79160e-8e47-461b-a277-d802e04c3926',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/president',
        'language' => 'und',
      ),
    ),
    'uuid' => 'c5dda8f9-c5bb-4aac-84fc-aa685883f010',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 0,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/d05d90b9-266a-488c-bc16-e1e29ae61cde',
      'cause' => FALSE,
    ),
    'description' => NULL,
    'format' => NULL,
    'name' => 'Engineer',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/engineer',
        'language' => 'und',
      ),
    ),
    'uuid' => 'd05d90b9-266a-488c-bc16-e1e29ae61cde',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 6,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/7d611df3-5101-4540-b011-97a679007fe8',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Visiting Scientist',
    'parent' => array(
      0 => 'da79160e-8e47-461b-a277-d802e04c3926',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/visiting-scientist',
        'language' => 'und',
      ),
    ),
    'uuid' => '7d611df3-5101-4540-b011-97a679007fe8',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 5,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/49ea4a28-1370-44a6-9dbc-80d560d31319',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Staff Research Scientist',
    'parent' => array(
      0 => 'da79160e-8e47-461b-a277-d802e04c3926',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/staff-research-scientist',
        'language' => 'und',
      ),
    ),
    'uuid' => '49ea4a28-1370-44a6-9dbc-80d560d31319',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 4,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/dac256ad-e0ea-43b4-85cf-1cf9aaf77219',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Investigator',
    'parent' => array(
      0 => 'da79160e-8e47-461b-a277-d802e04c3926',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/investigator',
        'language' => 'und',
      ),
    ),
    'uuid' => 'dac256ad-e0ea-43b4-85cf-1cf9aaf77219',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 3,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/41e0547e-c71f-4aeb-85fd-50001ac6c522',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Associate Director',
    'parent' => array(
      0 => 'da79160e-8e47-461b-a277-d802e04c3926',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/associate-director',
        'language' => 'und',
      ),
    ),
    'uuid' => '41e0547e-c71f-4aeb-85fd-50001ac6c522',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 2,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/aab6312c-432c-4c0a-aeb9-a71777bf6420',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Director',
    'parent' => array(
      0 => 'da79160e-8e47-461b-a277-d802e04c3926',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/director',
        'language' => 'und',
      ),
    ),
    'uuid' => 'aab6312c-432c-4c0a-aeb9-a71777bf6420',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 1,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/c68fb120-7898-4f68-a4f9-d8fc9eb5cd7e',
      'cause' => FALSE,
    ),
    'description' => NULL,
    'format' => NULL,
    'name' => 'Foundation Member',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/foundation-member',
        'language' => 'und',
      ),
    ),
    'uuid' => 'c68fb120-7898-4f68-a4f9-d8fc9eb5cd7e',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 0,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/6e82a0c0-5a77-410e-b086-ecdbca75553f',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Assistant Controller',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/assistant-controller',
        'language' => 'und',
      ),
    ),
    'uuid' => '6e82a0c0-5a77-410e-b086-ecdbca75553f',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 0,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/d0bb7522-267a-44e0-a321-4fb2ec8720e6',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Human Resources Officer',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/human-resources-officer',
        'language' => 'und',
      ),
    ),
    'uuid' => 'd0bb7522-267a-44e0-a321-4fb2ec8720e6',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 0,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/cf7bdeb8-6c09-4e33-885c-bcb8f9e95ea1',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Chief Technology Officer',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/chief-technology-officer',
        'language' => 'und',
      ),
    ),
    'uuid' => 'cf7bdeb8-6c09-4e33-885c-bcb8f9e95ea1',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 0,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/1e5b1d87-a048-4711-98cd-98953b06558a',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Chief Building Engineer',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/chief-building-engineer',
        'language' => 'und',
      ),
    ),
    'uuid' => '1e5b1d87-a048-4711-98cd-98953b06558a',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 0,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/d810d2bf-3dfb-4f5d-ba3d-e25e3d7832af',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Purchasing Manager',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/purchasing-manager',
        'language' => 'und',
      ),
    ),
    'uuid' => 'd810d2bf-3dfb-4f5d-ba3d-e25e3d7832af',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 0,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/d848fae8-3a83-4376-93c6-93ad8395309a',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Scientific Officer for Research Integrity',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/scientific-officer-research-integrity',
        'language' => 'und',
      ),
    ),
    'uuid' => 'd848fae8-3a83-4376-93c6-93ad8395309a',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 0,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/796d665b-0cea-41c3-8403-b1d80c3b41e2',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Scientific Officer for Technology & Innovation',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/scientific-officer-technology-innovation',
        'language' => 'und',
      ),
    ),
    'uuid' => '796d665b-0cea-41c3-8403-b1d80c3b41e2',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 0,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/f3a65134-f224-49cc-a730-dfef15ecdfa8',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Scientific Officer for Mentoring',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/scientific-officer-mentoring',
        'language' => 'und',
      ),
    ),
    'uuid' => 'f3a65134-f224-49cc-a730-dfef15ecdfa8',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 0,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/a2da3046-4339-42e0-925c-c7ef1f8a6d2c',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Research',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'Research',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/research',
        'language' => 'und',
      ),
    ),
    'uuid' => 'a2da3046-4339-42e0-925c-c7ef1f8a6d2c',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 6,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/92781701-5f8f-4cec-a21f-ca96b1bf6eb2',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Institute',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'Institute',
    'parent' => array(
      0 => 'a2da3046-4339-42e0-925c-c7ef1f8a6d2c',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/institute',
        'language' => 'und',
      ),
    ),
    'uuid' => '92781701-5f8f-4cec-a21f-ca96b1bf6eb2',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 0,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/9f091c73-fdcc-470a-a19a-a6bade03039c',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Cardiovascular Disease',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'GICD',
    'parent' => array(
      0 => '92781701-5f8f-4cec-a21f-ca96b1bf6eb2',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/gicd',
        'language' => 'und',
      ),
    ),
    'uuid' => '9f091c73-fdcc-470a-a19a-a6bade03039c',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 0,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/1ba15dd3-7ce9-4a37-997a-e45e5343b340',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Neurological Disease',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'GIND',
    'parent' => array(
      0 => '92781701-5f8f-4cec-a21f-ca96b1bf6eb2',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/gind',
        'language' => 'und',
      ),
    ),
    'uuid' => '1ba15dd3-7ce9-4a37-997a-e45e5343b340',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 2,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/33890157-70e8-4b8f-baa0-ac6051467b2d',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Virology & Immunology',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'GIVI',
    'parent' => array(
      0 => '92781701-5f8f-4cec-a21f-ca96b1bf6eb2',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/givi',
        'language' => 'und',
      ),
    ),
    'uuid' => '33890157-70e8-4b8f-baa0-ac6051467b2d',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 1,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/7c6d4536-94d7-4e46-b9ee-cf4733380546',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Stem Cells and Regenerative Medicine',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'Stem Cell',
    'parent' => array(
      0 => '92781701-5f8f-4cec-a21f-ca96b1bf6eb2',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/stem-cell',
        'language' => 'und',
      ),
    ),
    'uuid' => '7c6d4536-94d7-4e46-b9ee-cf4733380546',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 3,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/70f4e9ca-ffa3-432c-84bf-879eaf69aa02',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Translational Research',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'Translational',
    'parent' => array(
      0 => '92781701-5f8f-4cec-a21f-ca96b1bf6eb2',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/translational',
        'language' => 'und',
      ),
    ),
    'uuid' => '70f4e9ca-ffa3-432c-84bf-879eaf69aa02',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 4,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/dbdbc98b-e144-41c0-bc16-dfcb82d94c81',
      'cause' => FALSE,
    ),
    'description' => NULL,
    'field_text' => array(),
    'format' => NULL,
    'name' => 'Trustees',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/trustees',
        'language' => 'und',
      ),
    ),
    'uuid' => 'dbdbc98b-e144-41c0-bc16-dfcb82d94c81',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 0,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/ece2a512-252d-4a46-9988-e9ab121ee976',
      'cause' => FALSE,
    ),
    'description' => NULL,
    'field_text' => array(),
    'format' => NULL,
    'name' => 'Foundation',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/foundation',
        'language' => 'und',
      ),
    ),
    'uuid' => 'ece2a512-252d-4a46-9988-e9ab121ee976',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 0,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/ca4cefd8-41c6-4e0a-9e57-984417d67e9b',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(),
    'format' => 'rich_text',
    'name' => 'President & Directors',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/president-directors',
        'language' => 'und',
      ),
    ),
    'uuid' => 'ca4cefd8-41c6-4e0a-9e57-984417d67e9b',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 7,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/9426a451-58f8-40ea-81ea-e90d15539569',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(),
    'format' => 'rich_text',
    'name' => 'Administration',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/administration',
        'language' => 'und',
      ),
    ),
    'uuid' => '9426a451-58f8-40ea-81ea-e90d15539569',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 7,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/d6032808-de30-4454-b177-f9b032b543c6',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Finance',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'Finance',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/finance',
        'language' => 'und',
      ),
    ),
    'uuid' => 'd6032808-de30-4454-b177-f9b032b543c6',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 0,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/20e12bb1-122d-4a05-8087-49a4ff004f37',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Grants & Contracts',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'Grants and Contracts',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/grants-and-contracts',
        'language' => 'und',
      ),
    ),
    'uuid' => '20e12bb1-122d-4a05-8087-49a4ff004f37',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 0,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/9dbdae10-c08e-4cb6-a264-4673be12f6e4',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Human Resources',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'Human Resources',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/human-resources',
        'language' => 'und',
      ),
    ),
    'uuid' => '9dbdae10-c08e-4cb6-a264-4673be12f6e4',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 0,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/5a92ee83-47a2-4dc9-89d2-ddd15f47d22f',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Information Technology',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'IT',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/information-technology',
        'language' => 'und',
      ),
    ),
    'uuid' => '5a92ee83-47a2-4dc9-89d2-ddd15f47d22f',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 0,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/4627a784-ee9b-48c9-b8f7-a3860cae178d',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Operations',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'Operations',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/operations',
        'language' => 'und',
      ),
    ),
    'uuid' => '4627a784-ee9b-48c9-b8f7-a3860cae178d',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 0,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/c9acac14-154b-41ff-9727-38d9ef14061e',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Purchasing & Receiving',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'Purchasing and Receiving',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/purchasing-and-receiving',
        'language' => 'und',
      ),
    ),
    'uuid' => 'c9acac14-154b-41ff-9727-38d9ef14061e',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 0,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/df8a9c26-fb40-4635-988d-96c5459160e3',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Science Administration',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'Science Administration',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/science-administration',
        'language' => 'und',
      ),
    ),
    'uuid' => 'df8a9c26-fb40-4635-988d-96c5459160e3',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 0,
  );
  $entities['ontology_structure_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/aab1d176-c0e7-4f1d-86ed-fe4f47c924a6',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => 'Variants',
    'url_alias' => array(
      0 => array(
        'alias' => 'structure/variants',
        'language' => 'und',
      ),
    ),
    'uuid' => 'aab1d176-c0e7-4f1d-86ed-fe4f47c924a6',
    'vocabulary_machine_name' => 'structure',
    'weight' => 6,
  );
  $entities['ontology_structure_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/2e99b285-9f9a-410c-a2b9-43a881ba10ab',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => 'Home',
    'parent' => array(
      0 => 'aab1d176-c0e7-4f1d-86ed-fe4f47c924a6',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'structure/home',
        'language' => 'und',
      ),
    ),
    'uuid' => '2e99b285-9f9a-410c-a2b9-43a881ba10ab',
    'vocabulary_machine_name' => 'structure',
    'weight' => 1,
  );
  $entities['ontology_structure_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/f6c4eda2-4491-4fbf-9831-3a78f0b69b14',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => 'Node',
    'parent' => array(
      0 => 'aab1d176-c0e7-4f1d-86ed-fe4f47c924a6',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'structure/node',
        'language' => 'und',
      ),
    ),
    'uuid' => 'f6c4eda2-4491-4fbf-9831-3a78f0b69b14',
    'vocabulary_machine_name' => 'structure',
    'weight' => 0,
  );
  $entities['ontology_structure_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/ab33a885-28b0-4e11-b7f9-64f12fc12ab4',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => 'Institute',
    'parent' => array(
      0 => 'aab1d176-c0e7-4f1d-86ed-fe4f47c924a6',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'structure/institute',
        'language' => 'und',
      ),
    ),
    'uuid' => 'ab33a885-28b0-4e11-b7f9-64f12fc12ab4',
    'vocabulary_machine_name' => 'structure',
    'weight' => 2,
  );
  $entities['ontology_structure_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/8d3c4af2-7287-4db4-ae58-0241ee539f1e',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => 'Feed',
    'parent' => array(
      0 => 'aab1d176-c0e7-4f1d-86ed-fe4f47c924a6',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'structure/feed',
        'language' => 'und',
      ),
    ),
    'uuid' => '8d3c4af2-7287-4db4-ae58-0241ee539f1e',
    'vocabulary_machine_name' => 'structure',
    'weight' => 3,
  );
  $entities['ontology_structure_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/dd473bde-e5d3-4b59-ac37-e08e3b22addd',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Directors and Investigators',
    'parent' => array(
      0 => 'aab1d176-c0e7-4f1d-86ed-fe4f47c924a6',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'structure/directors-and-investigators',
        'language' => 'und',
      ),
    ),
    'uuid' => 'dd473bde-e5d3-4b59-ac37-e08e3b22addd',
    'vocabulary_machine_name' => 'structure',
    'weight' => 4,
  );
  $entities['ontology_structure_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/45b858d9-6a4d-4878-bd63-bcb9f80513e0',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'People',
    'parent' => array(
      0 => 'aab1d176-c0e7-4f1d-86ed-fe4f47c924a6',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'structure/people',
        'language' => 'und',
      ),
    ),
    'uuid' => '45b858d9-6a4d-4878-bd63-bcb9f80513e0',
    'vocabulary_machine_name' => 'structure',
    'weight' => 5,
  );

  return $entities;
}
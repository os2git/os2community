<?php
/**
 * @file
 * os2_klassifikationer.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function os2_klassifikationer_taxonomy_default_vocabularies() {
  return array(
    'os2klassifikation_anvendelsesomr_de' => array(
      'name' => 'OS2klassifikation - Anvendelsesområde',
      'machine_name' => 'os2klassifikation_anvendelsesomr_de',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -6,
      'base_type' => 'taxonomy_vocabulary',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'os2klassifikation_distributionsformat' => array(
      'name' => 'OS2klassifikation - Distributionsformat',
      'machine_name' => 'os2klassifikation_distributionsformat',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 1,
      'base_type' => 'taxonomy_vocabulary',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'os2klassifikation_ejer' => array(
      'name' => 'OS2klassifikation - Ejer',
      'machine_name' => 'os2klassifikation_ejer',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -5,
      'base_type' => 'taxonomy_vocabulary',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'os2klassifikation_form_hovedniveau' => array(
      'name' => 'OS2klassifikation - FORM Hovedniveau',
      'machine_name' => 'os2klassifikation_form_hovedniveau',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -2,
      'base_type' => 'taxonomy_vocabulary',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'os2klassifikation_klassifikationsstandard' => array(
      'name' => 'OS2klassifikation - Klassifikationsstandard',
      'machine_name' => 'os2klassifikation_klassifikationsstandard',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'base_type' => 'taxonomy_vocabulary',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'os2klassifikation_kle_dom_nemodel' => array(
      'name' => 'OS2klassifikation - KLE domænemodel',
      'machine_name' => 'os2klassifikation_kle_dom_nemodel',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -3,
      'base_type' => 'taxonomy_vocabulary',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'os2klassifikation_licens' => array(
      'name' => 'OS2klassifikation - Licens',
      'machine_name' => 'os2klassifikation_licens',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -1,
      'base_type' => 'taxonomy_vocabulary',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'os2klassifikation_system' => array(
      'name' => 'OS2klassifikation - System',
      'machine_name' => 'os2klassifikation_system',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -4,
      'base_type' => 'taxonomy_vocabulary',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}

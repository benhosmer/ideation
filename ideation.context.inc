<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function ideation_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ideas_listing';
  $context->description = '';
  $context->tag = 'Ideas';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'idea_group' => 'idea_group',
        'idea_site' => 'idea_site',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'ideas_listing' => 'ideas_listing',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-ideas_listing-page_1' => array(
          'module' => 'views',
          'delta' => '-exp-ideas_listing-page_1',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-ideas_watch-block_1' => array(
          'module' => 'views',
          'delta' => 'ideas_watch-block_1',
          'region' => 'right',
          'weight' => 1,
        ),
        'views-ideas_comments-block_1' => array(
          'module' => 'views',
          'delta' => 'ideas_comments-block_1',
          'region' => 'right',
          'weight' => 2,
        ),
      ),
    ),
    'menu' => 'ideas',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Ideas');

  $export['ideas_listing'] = $context;
  return $export;
}

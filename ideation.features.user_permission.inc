<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ideation_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer special idea fields
  $permissions['administer special idea fields'] = array(
    'name' => 'administer special idea fields',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: create idea_group content
  $permissions['create idea_group content'] = array(
    'name' => 'create idea_group content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: create idea_site content
  $permissions['create idea_site content'] = array(
    'name' => 'create idea_site content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete any idea_group content
  $permissions['delete any idea_group content'] = array(
    'name' => 'delete any idea_group content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete any idea_site content
  $permissions['delete any idea_site content'] = array(
    'name' => 'delete any idea_site content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: delete own idea_group content
  $permissions['delete own idea_group content'] = array(
    'name' => 'delete own idea_group content',
    'roles' => array(),
  );

  // Exported permission: delete own idea_site content
  $permissions['delete own idea_site content'] = array(
    'name' => 'delete own idea_site content',
    'roles' => array(),
  );

  // Exported permission: edit any idea_group content
  $permissions['edit any idea_group content'] = array(
    'name' => 'edit any idea_group content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit any idea_site content
  $permissions['edit any idea_site content'] = array(
    'name' => 'edit any idea_site content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit own idea_group content
  $permissions['edit own idea_group content'] = array(
    'name' => 'edit own idea_group content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own idea_site content
  $permissions['edit own idea_site content'] = array(
    'name' => 'edit own idea_site content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: rate content
  $permissions['rate content'] = array(
    'name' => 'rate content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}

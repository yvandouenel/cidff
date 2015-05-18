<?php
/**
 * @file
 * actions_du_cidff.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function actions_du_cidff_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_acc_indiv|node|action|default';
  $field_group->group_name = 'group_acc_indiv';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'action';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Accompagnements individualisés',
    'weight' => '12',
    'children' => array(
      0 => 'field_accompagnements_indiv',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Accompagnements individualisés',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-acc-indiv field-group-div col-md-4 ',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_acc_indiv|node|action|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_form_ateliers|node|action|default';
  $field_group->group_name = 'group_form_ateliers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'action';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Formations et ateliers',
    'weight' => '7',
    'children' => array(
      0 => 'field_formations',
      1 => 'field_ateliers',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Formations et ateliers',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-form-ateliers field-group-div col-md-4 ',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_form_ateliers|node|action|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info_comp|node|action|default';
  $field_group->group_name = 'group_info_comp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'action';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Informations complémentaires',
    'weight' => '15',
    'children' => array(
      0 => 'field_contenu_supplementaire',
      1 => 'field_actualites_liees',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Informations complémentaires',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-info-comp field-group-div col-md-4',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_info_comp|node|action|default'] = $field_group;

  return $export;
}

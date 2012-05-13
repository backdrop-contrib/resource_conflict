<?php

/**
 * @file
 * Default rule configurations for Resource Conflict. 
 */

/**
 * Implements hook_default_rules_configuration().
 */
function resource_conflict_default_rules_configuration() {
  $rules = array();

  // Add a reaction rule to display a warning message if conflicts detected
  $rule = rules_reaction_rule();

  $rule->label = 'Display resource conflict message';
  $rule->active = TRUE;
  $rule->event('resource_conflict_conflict_detected')
    ->action('drupal_message', array('message' => 'Conflict detected between [node:title] and [conflict-node:title]'));
    
  $rules['display_resource_conflict_message'] = $rule;

  return($rules);
}
?>

<?php
/**
 * Implementation of hook_rules_event_info()
 * Provides a Rules event for "Resource Conflict Detected"
 * Fires during node form validation
 */
function resource_conflict_rules_event_info() {
  return array(
    'resource_conflict_conflict_detected' => array(
      'group' => t('Resource Conflict'),
      'label' => t('A resource conflict was detected'),
      'module' => 'resource_conflict',
      'variables' => array(
        'node' => array(
          'type' => 'node',
          'label' => t('unsaved node'),
        ),
        'conflict_node' => array(
          'type' => 'node',
          'label' => t('conflicting node'),
        ),
      ),
    ),
  );
}

/** 
 * Implementation of hook_rules_condition_info()
 * Provides a Rules condition for "contains a resource conflict"
 */
function resource_conflict_rules_condition_info() {
  return array(
    'resource_conflict_contains_conflict' => array(
      'group' => t('Resource Conflict'),
      'label' => t('Contains a resource conflict'),
      'module' => 'resource_conflict',
      'parameter' => array(
        'node' => array(
          'type' => 'node',
          'label' => t('Node'),
        )
      ),
    ),
  );
}


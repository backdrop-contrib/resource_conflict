<?php
/**
 * Implementation of hook_rules_event_info()
 * @ingroup rules
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



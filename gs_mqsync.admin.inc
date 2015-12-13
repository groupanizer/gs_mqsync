<?php

function gs_mqsync_settings_form() {
  $form = array();

  $form['gs_mqsync_sync_send'] = array(
    '#type' => 'checkbox',
    '#title' => 'Send user synchronization updates',
    '#default_value' => variable_get('gs_mqsync_sync_send', TRUE),
  );

  $form['gs_mqsync_sync_receive'] = array(
    '#type' => 'checkbox',
    '#title' => 'Receive user synchronization updates',
    '#default_value' => variable_get('gs_mqsync_sync_receive', TRUE),
  );

  $form['gs_mqsync_sync_create_chapters'] = array(
    '#type' => 'checkbox',
    '#title' => 'Sync can create new chapters',
    '#default_value' => variable_get('gs_mqsync_sync_create_chapters', TRUE),
  );

  $form['gs_mqsync_default_roles'] = array(
    '#type' => 'select',
    '#title' => 'Give new members created by sync these roles',
    '#description' => 'When new members are created by sync, they will be assigned these roles.',
    '#multiple' => TRUE,
    '#options' => _g3core_categorize_role_options(user_roles(TRUE)),
    '#default_value' => variable_get('gs_mqsync_default_roles', array(4190371=>4190371)),
  );

  return system_settings_form($form);
}


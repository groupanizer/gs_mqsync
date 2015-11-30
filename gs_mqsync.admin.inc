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

  return system_settings_form($form);
}


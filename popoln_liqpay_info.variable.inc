<?php

/**
 * Implements hook_variable_info().
 */
function popoln_liqpay_info_variable_info($options) {

  $variable['version:aos'] = array(
    'type' => 'string',
    'title' => t('Android aplication version.', array(), $options),
    'default' => '0',
    'required' => TRUE,
    'token' => TRUE,
  );

  $variable['payment_settings:resource_tax'] = array(
    'type' => 'string',
    'title' => t('Resource payment tax (%).', array(), $options),
    'default' => '0',
    'required' => TRUE,
    'token' => TRUE,
  );

  $variable['payment_settings:service_block'] = array(
    'type' => 'boolean',
    'title' => t('Block payment procedures.', array(), $options),
    'description' => t('If Option checked, refillment procedure will be disabled'),
    'default' => FALSE,
    'token' => TRUE,
  );

  $variable['payment_settings:sandbox'] = array(
    'type' => 'boolean',
    'title' => t('Sandbox mode.', array(), $options),
    'default' => FALSE,
    'token' => TRUE,
  );

  $variable['privat_bank:merchant_id'] = array(
    'type' => 'string',
    'title' => t('Privat Bank Merchant ID.', array(), $options),
    'default' => '',
    'required' => TRUE,
    'token' => TRUE,
  );

  $variable['privat_bank:password'] = array(
    'type' => 'string',
    'title' => t('Privat Bank Merchant Password.', array(), $options),
    'default' => '',
    'required' => TRUE,
    'token' => TRUE,
  );

  return $variable;
}
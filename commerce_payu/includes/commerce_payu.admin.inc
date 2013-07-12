<?php

function commerce_payu_settings_form($settings = NULL) {

  $settings = (array) $settings + array(
    'merchant' => array('test'),
	  'secret_key' => '',
	'lu_url' => '',
  'debug_mode' => array(1),
	'currency' => '',
	'back_ref' => '',
	'vat' => array(0),
	'language' => '',

	
	'description' => 0,
	'fail_message' => '',
	'success_message' => '',
	'status' => array('pending'),
  );

  $form['merchant'] = array(
    '#type' => 'textfield',
    '#title' => t('Merchant'),
    '#description' => t('Merchant ID'),
    '#default_value' => $settings['merchant'],
  );

  $form['secret_key'] = array(
    '#type' => 'textfield',
    '#title' => t('Secret key'),
    '#description' => t('Secret key'),
    '#default_value' => $settings['secret_key'],
  );

  $form['lu_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Live Update URL'),
    '#description' => t('Live Update URL'),
    '#default_value' => $settings['lu_url'],   
  );

  $form['debug_mode'] = array(
    '#type' => 'select',
    '#title' => t('Debug mode'),
    '#options' => array(
      '1' => ('On'),
      '0' => ('Off'),
    ),
    '#default_value' => $settings['debug_mode'],
  );

  $form['currency'] = array(
    '#type' => 'select',
    '#title' => t('Currency of merchant'),
    '#options' => array(
      'UAH' => ('Украина'),
      'RUB' => ('Россия'),
    ),
    '#default_value' => $settings['currency'],
  );


  $form['back_ref'] = array(
    '#type' => 'textfield',
    '#title' => t('Back Ref'),
    '#description' => t('Back url for client'),
    '#default_value' => $settings['back_ref'],
	);
  
  $form['vat'] = array(
    '#type' => 'textfield',
    '#title' => t('VAT'),
    '#description' => t('VAT'),
    '#default_value' => $settings['vat'],		
  );

  $form['language'] = array(
    '#type' => 'select',
    '#title' => t('Language'),
    '#description' => t('Language of payment page'),
    '#options' => array(
      "RU" => t('Russian'), 
      "EN" => t('English'), 
      "RO" => t('Romanian'), 
      "DE" => t('German'), 
      "IT" => t('Italian'), 
      ),
    '#default_value' => $settings['language'],		
  );
 

  $form['description'] = array(
    '#type' => 'textfield',
    '#title' => t('Order description'),
    '#description' => t('Optional description for orders that will displays in PayU Merchant interface. Use placeholder %order for order ID'),
    '#default_value' => $settings['description'],
  );

/*
  $form['status'] = array(
    '#type' => 'select',
    '#title' => t('Status'),
    '#description' => t('Choose order status after customer sent the order'),
	'#options' => commerce_payu_statuses(),
    '#default_value' => $settings['status'],
	);

  $form['fail_message'] = array(
    '#type' => 'textarea',
	'#rows' => 3,
    '#title' => t('Fail message'),
    '#description' => t('Enter optional text that will be displayed when payment fail'),
    '#default_value' => $settings['fail_message'],
	); 

  $form['success_message'] = array(
    '#type' => 'textarea',
	'#rows' => 3,
    '#title' => t('Success message'),
    '#description' => t('Enter optional text that will be displayed when payment succesful'),
    '#default_value' => $settings['success_message'],
	);  	
*/
  $form['#submit'][] = variable_set('commerce_payu_settings', $form);

  return $form;
}
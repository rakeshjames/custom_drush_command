<?php
/**
 * @file Contains the code to generate the custom drush commands.
 */

/**
 * Implements hook_drush_command().
 */
function custom_drush_command_drush_command() {
  $items = array();
  $items['say-hello'] = [
    'description' => 'Say hello.',
    'arguments' => [
      'name' => 'The name for saying hello',
    ],
    'drupal dependencies' => ['custom_drush_command'],
    'aliases' => ['say:hello'],
  ];
  return $items;
}

/**
 * Call back function drush_custom_drush_command_say_hello()
 * The call back function name in the  following format
 *   drush_{module_name}_{item_id_for_command}()
 */
function drush_custom_drush_command_say_hello($name = '') {
  drush_print('Hello ' . $name . ' !');
}
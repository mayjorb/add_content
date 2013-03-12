<?php

/**
 * Implementation of hook_strongarm().
 */
function add_content_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_handbook_article';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '0',
    'author' => '1',
    'options' => '2',
    'menu' => '-2',
    'book' => '-1',
    'path' => '4',
    'path_redirect' => '3',
    'images_node_content_1' => '-4',
  );
  $export['content_extra_weights_handbook_article'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_handbook_article';
  $strongarm->value = '0';
  $export['language_content_type_handbook_article'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_handbook_article';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_handbook_article'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_handbook_article';
  $strongarm->value = '0';
  $export['upload_handbook_article'] = $strongarm;

  return $export;
}

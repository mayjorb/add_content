<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function add_content_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function add_content_node_info() {
  $items = array(
    'handbook_article' => array(
      'name' => t('Handbook Article'),
      'module' => 'features',
      'description' => t('Stores content for the handbook'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function add_content_views_api() {
  return array(
    'api' => '2',
  );
}

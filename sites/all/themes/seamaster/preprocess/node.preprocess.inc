<?php

/**
 * theme_preprocess_node
 */
function seamaster_preprocess_node(&$vars) {
  $node = &$vars['node'];
  $function = __FUNCTION__ . '_' . $node->type;
  if (function_exists($function)) {
    $function($vars);
  }
}

/**
 * theme_preprocess_node
 * type = article
 */
function seamaster_preprocess_node_article(&$vars) {
  $node = &$vars['node'];
  if ($vars['view_mode'] == 'teaser') {
    $vars['display_submitted'] = '';
  }
}

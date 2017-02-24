<?php
/**
 * @file
 * osto_views.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function osto_views_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_defaults';
  $strongarm->value = array(
    'og_extras_members' => TRUE,
    'og_extras_nodes' => TRUE,
    'ting_projects' => FALSE,
    'ting_teams' => FALSE,
    'ting_members' => FALSE,
    'og_extras_groups' => TRUE,
    'advanced_forum_unanswered_topics' => TRUE,
    'advanced_forum_topic_list' => TRUE,
    'advanced_forum_search' => TRUE,
    'advanced_forum_new_topics' => TRUE,
    'advanced_forum_active_topics' => TRUE,
    'og_all_user_group_content' => TRUE,
    'og_nodes' => TRUE,
    'og_members' => TRUE,
    'og_members_admin' => TRUE,
    'og_user_groups' => TRUE,
    'nodequeue_1' => TRUE,
    'subscribe_node_email' => TRUE,
    'subscribe_user_email' => TRUE,
  );
  $export['views_defaults'] = $strongarm;

  return $export;
}

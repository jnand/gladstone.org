<?php
/**
 * @file
 * structure.deploy_plans.inc
 */

/**
 * Implements hook_deploy_plans_default().
 */
function structure_deploy_plans_default() {
  $export = array();

  $plan = new DeployPlan();
  $plan->disabled = FALSE; /* Edit this to true to make a default plan disabled initially */
  $plan->api_version = 1;
  $plan->name = 'structure_sitemap';
  $plan->title = 'Structure Site Map';
  $plan->description = 'All needed menu link entities needed to bootstrap a sitemap';
  $plan->debug = 0;
  $plan->aggregator_plugin = 'DeployAggregatorManaged';
  $plan->aggregator_config = array(
    'delete_post_deploy' => 0,
  );
  $plan->fetch_only = 1;
  $plan->processor_plugin = '';
  $plan->processor_config = array();
  $plan->endpoints = array();
  $plan->dependency_plugin = 'deploy_iterator';
  $export['structure_sitemap'] = $plan;

  return $export;
}

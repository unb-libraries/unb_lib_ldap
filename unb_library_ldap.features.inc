<?php
/**
 * @file
 * unb_library_ldap.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function unb_library_ldap_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ldap_servers" && $api == "ldap_servers") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

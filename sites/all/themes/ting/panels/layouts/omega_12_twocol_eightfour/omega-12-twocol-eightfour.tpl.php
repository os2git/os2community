<?php
/**
 * @file
 * Template for a 2 column panel layout.
 *
 * This template provides a two column panel display layout, with
 * each column roughly equal in width.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['left']: Content in the left column.
 *   - $content['right']: Content in the right column.
 */
?>

<div class="panel-display omega-grid sp-12-twocol-9-3" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="panel-panel grid-12 panel-top">
    <div class="inside"><?php print $content['header']; ?></div>
  </div>
  <div class="panel-panel grid-8 panel-left">
    <div class="inside"><?php print $content['left']; ?></div>
  </div>
  <div class="panel-panel grid-4 panel-right">
    <div class="inside"><?php print $content['right']; ?></div>
  </div>
  <div class="panel-panel grid-12 panel-footer">
    <div class="inside"><?php print $content['footer']; ?></div>
  </div>
</div>

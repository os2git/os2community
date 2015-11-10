<div<?php print $attributes; ?>>
  <div<?php print $content_attributes; ?>>
    <a id="main-content"></a>
    <?php 
	    switch(arg(0)) {
		    case "node":
		    	$node = menu_get_object();
		    	$page_type = node_type_get_name($node);
		    break;
		    case "forum":
		    	$page_type = "Forum";
		    break;
		    case "user":
		    	$page_type = "Bruger";
		    break;
		    default:
		    	$page_type = "Oversigt";
	    }
    ?>
    <?php print render($title_prefix); ?>
    <?php if ($title): ?>
		<?php print "<strong class='page-type'>".$page_type."</strong>"; ?>
    <?php if ($title_hidden): ?><div class="element-invisible"><?php endif; ?>
    <h1 class="title" id="page-title"><?php print $title; ?></h1>
    <?php if ($title_hidden): ?></div><?php endif; ?>
    <?php endif; ?>
    <?php print render($title_suffix); ?>
    <?php if ($tabs && !empty($tabs['#primary'])): ?><div class="tabs clearfix"><?php print render($tabs); ?></div><?php endif; ?>
    <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
    <?php print $content; ?>
    <?php if ($feed_icons): ?><div class="feed-icon clearfix"><?php print $feed_icons; ?></div><?php endif; ?>
  </div>
</div>

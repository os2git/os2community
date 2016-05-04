<article<?php print $attributes; ?>>
  <?php print render($title_prefix); ?>
  <?php if (!$page && $title): ?>
  <header>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
  </header>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  
  <div<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      hide($content['rrssb']);
      hide($content['rate_commons_like']);
      print render($content);
    ?>
  </div>
  
  <div class="clearfix node-footer">
  
  <?php if ($display_submitted): ?>
		<footer class="submitted">
			<div class='submitted-headline'><strong><?php print t('Created by'); ?>:</strong></div>
			<div class='node-author'>
				<div class='author-picture'><?php print $user_picture; ?></div>
				<div class='author-name'><?php print $name; ?></div>
				<div class='created'><?php print $date; ?></div>
			</div>
		</footer>
  <?php endif; ?>  
  
  <?php if (!empty($content['links'])): ?>
    <nav class="links node-links clearfix"><?php print render($content['links']); ?></nav>
  <?php endif; ?>  
  
  </div>

  <div class="clearfix">
    <?php print render($content['comments']); ?>
  </div>
</article>
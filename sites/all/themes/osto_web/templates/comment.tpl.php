<article<?php print $attributes; ?>>

  <div<?php print $content_attributes; ?>>
    <?php
      hide($content['links']);
      print render($content);
    ?>
	</div>

  <footer class="comment-submitted">
	 <div class='author-headline'><strong><?php print t('Created by'); ?>:</strong></div>
   <div class='comment-author'>
	   <div class='author-picture'><?php print $picture; ?></div>
	   <div class='author-name'><?php print $author; ?></div>
	   <div class='created'><?php print $created; ?></div>
   </div>
   
  <?php if (!empty($content['links'])): ?>
    <nav class="links comment-links clearfix"><?php print render($content['links']); ?></nav>
  <?php endif; ?>
  	
  </footer>

</article>

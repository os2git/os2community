<?php
/**
 * @file
 * Default theme implementation to display a list of forums and containers.
 *
 * Available variables:
 * - $forums: An array of forums and containers to display. It is keyed to the
 *   numeric id's of all child forums and containers.
 * - $forum_id: Forum id for the current forum. Parent to all items within
 *   the $forums array.
 *
 * Each $forum in $forums contains:
 * - $forum->is_container: Is TRUE if the forum can contain other forums. Is
 *   FALSE if the forum can contain only topics.
 * - $forum->depth: How deep the forum is in the current hierarchy.
 * - $forum->zebra: 'even' or 'odd' string used for row class.
 * - $forum->name: The name of the forum.
 * - $forum->link: The URL to link to this forum.
 * - $forum->description: The description of this forum.
 * - $forum->new_topics: True if the forum contains unread posts.
 * - $forum->new_url: A URL to the forum's unread posts.
 * - $forum->new_text: Text for the above URL which tells how many new posts.
 * - $forum->old_topics: A count of posts that have already been read.
 * - $forum->total_posts: The total number of posts in the forum.
 * - $forum->last_reply: Text representing the last time a forum was posted or
 *   commented in.
 * - $forum->forum_image: If used, contains an image to display for the forum.
 *
 * @see template_preprocess_forum_list()
 * @see theme_forum_list()
 */
?>

<?php
/*
  The $tables variable holds the individual tables to be shown. A table is
  either created from a root level container or added as needed to hold root
  level forums. The following code will loop through each of the tables.
  In each table, it loops through the items in the table. These items may be
  subcontainers or forums. Subcontainers are printed simply with the name
  spanning the entire table. Forums are printed out in more detail. Subforums
  have already been attached to their parent forums in the preprocessing code
  and will display under their parents.
 */


?>

<?php foreach ($tables as $table_id => $table): ?>
  <?php $table_info = $table['table_info']; ?>
	<div id="forum-wrapper">
    <?php foreach ($table['items'] as $item_id => $item): ?>
	
	<div class="forum-item">
		<div class="forum-item-wrap">
		<?php if (!empty($item->forum_image)): ?>
		<div class="forum-icon">
		<?php print $item->forum_image; ?>
		</div>
		<?php endif; ?>
		<div class="forum-name">
		<h3><a href="<?php print $item->link; ?>"><span class="ting-icon-bubbles2"></span><?php print $item->name; ?><span class="total">(<?php print $item->total_topics; ?>)</span></a></h3>
		</div>
	
		<?php if (!empty($item->description)): ?>
		<div class="forum-description">
		<?php print $item->description; ?>
		</div>
		<?php endif; ?>
		<div class="forum-lastest-reply">
		<p class="latest-label">Seneste indlæg:</p>
		<?php foreach($item->latest as $posts): ?>
			<div class="latest-posts">
			<?php	
				$user = user_load($posts->uid, TRUE);							
				print l($posts->title, 'node/'.$posts->nid); ?>			
			<p><?php print format_date($posts->created, $type = 'medium'); ?> / Af: <span class="user"><a href="<?php print drupal_get_path_alias('user/' . $user->uid); ?>"><?php print $user->field_user_firstname['und'][0]['safe_value']; ?> <?php print $user->field_user_lastname['und'][0]['safe_value']; ?></a></span></p>
			</div>
		<?php endforeach; ?>
		</div>
		<div class="goto-forum">
			<a href="<?php print $item->link; ?>" class="goto-link">Se alle indlæg</a>		
		</div>
		</div>
	</div>
	
    <?php endforeach; ?>
	</div>
<?php endforeach; ?>

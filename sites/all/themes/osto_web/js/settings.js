var $ = jQuery;

$(function() {

	/**
	 * Slideshow 
	 */
	$('#flexslider-1').bind('start', function(e) {
			$(".flex-active-slide").toggleClass("animated");
	});

	$('#flexslider-1').bind('after', function(e) {
			$(".flex-active-slide").toggleClass("animated");
	});
	
	$('#flexslider-1').bind('before', function(e) {
			$(".flex-active-slide").toggleClass("animated");
	});

	/**
	 * Equal Heights
	 */
	
	// Signup Block
	$(".field-name-field-signup-columns .field-item").matchHeight();

	// Footer Menu
	$("#zone-footer li.expanded").matchHeight();

	// Latest Activity Blocks
	$(".page-community .region-content .view-content").matchHeight();
	
	/**
	 * Form Styling 
	 */
	$(".views-exposed-form select").fancySelect();
	//$(".block-superfish select").fancySelect();
	
	Drupal.behaviors.ting = {
  	attach: function (context, settings) {
			$(".views-exposed-form select").fancySelect();
	  }
	};
	
});
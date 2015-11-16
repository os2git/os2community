/**
 * @file
 *
 * Setting default value of ajax select to none on window load.
 */

(function ($) {
	$(window).load(function() {
	  $('.add_one_social_service').val('_none');
	});
})(jQuery);

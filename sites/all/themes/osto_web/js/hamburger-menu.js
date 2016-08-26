/**
 * @file
 * Toggle hamburger menu.
 */
(function ($) {
  'use strict';

  $(document).ready(function() {
    var hamburger_button = $('.js-menu-toggle');
    var hamburger_menu = $('.js-hamburger-menu');
    var html = $('html');
    var body = $('body');
    var overlay = $('.js-hamburger-menu-overlay');

    hamburger_button.click(function () {
      hamburger_button.toggleClass('is-open');

      // Toggle hamburger menu.
      hamburger_menu.toggleClass('is-open');

      // Toggle overlay.
      overlay.toggleClass('is-visible');

      // Toggle html and body element.
      html.toggleClass('is-locked');
      body.toggleClass('is-locked');
    });

    hamburger_menu.click(
      function (e) {
        e.stopPropagation();
      }
    );
  });

})(jQuery);

/**
 * @file
 * Adds siteimprove to the current page.
 */

(function ($, Drupal) {
  'use strict';

  Drupal.behaviors.itkSiteimprove = {
    attach: function (context, settings) {
      var key = settings.itk_siteimprove.key;

      if (key) {
        (function () {
          var sz = document.createElement('script');
          sz.type = 'text/javascript';
          sz.async = true;
          sz.src = '//ssl.siteimprove.com/js/siteanalyze_' + key + '.js';
          var s = document.getElementsByTagName('script')[0];
          s.parentNode.insertBefore(sz, s);
        })();
      }
    }
  };
})(jQuery, Drupal);

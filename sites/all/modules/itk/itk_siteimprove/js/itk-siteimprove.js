/**
 * @file
 * Adds siteimprove to the current page.
 */

(function ($, Drupal) {
  'use strict';

  Drupal.behaviors.itkSiteimprove = {
    attach: function (context, settings) {
      let key = settings.itk_siteimprove.key;
      if (key) {
        window.addEventListener('CookieInformationConsentGiven', function (event) {
          if (CookieInformation.getConsentGivenFor('cookie_cat_statistic')) {
            (function () {
              let sz = document.createElement('script');
              sz.type = 'text/javascript';
              sz.async = true;
              sz.src = '//ssl.siteimprove.com/js/siteanalyze_' + key + '.js';
              let s = document.getElementsByTagName('script')[0];
              s.parentNode.insertBefore(sz, s);
            })();
          }
        }, false);
      }
    }
  };
})(jQuery, Drupal);

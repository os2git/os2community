<?php print $doctype; ?>
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf->version . $rdf->namespaces; ?>>
<head<?php print $rdf->profile; ?>>
  <script id="CookieConsent" src="https://policy.app.cookieinformation.com/uc.js" data-culture="DA" type="text/javascript"></script>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <?php print $scripts; ?>
  <!--[if lt IE 9]><script src="//html5shiv.googlecode.com/svn/trunk/html5.js"></script><![endif]-->

  <meta property="og:site_name" content="OS2">
  <meta property="og:url" content="https://os2.eu">
  <meta property="og:description" content="Offentligt Digitaliseringsfællesskab - Offentligt Samarbejde, Open Source">
  <meta property="og:type" content="website">
  <meta property="og:image" content="https://os2.eu/sites/all/themes/osto_web/opengraph/facebook.jpg">
  <meta property="og:image:width" content="1200"/>
  <meta property="og:image:height" content="630"/>

  <meta name="twitter:card" content="summary_large_image">
  <meta name="twitter:site" content="@OS2offdig">
  <meta name="twitter:title" content="OS2 Offentligt Digitaliseringsfællesskab">
  <meta name="twitter:description" content="Offentligt Digitaliseringsfællesskab - Offentligt Samarbejde, Open Source">
  <meta name="twitter:image" content="https://os2.eu/sites/all/themes/osto_web/opengraph/twitter.jpg">
</head>
<body<?php print $attributes;?>>
  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
</body>
</html>

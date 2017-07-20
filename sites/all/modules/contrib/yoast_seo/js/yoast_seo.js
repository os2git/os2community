/**
 * JavaScript file that handles initializing and firing the Yoast
 * js-text-analysis library.
 * Support YoastSEO.js v1.2.2.
 */
(function ($) {
  Drupal.yoast_seo = Drupal.yoast_seo || {};

  Drupal.behaviors.yoast_seo = {
    attach: function (context, settings) {
      // Making sure we actually have data.
      if (typeof settings.yoast_seo != 'undefined') {
        // Making sure we only initiate Yoast SEO once.
        $('body', context).once('yoast_seo', function() {
          YoastSEO.analyzerArgs = {
            source: YoastSEO_DrupalSource,
            analyzer: settings.yoast_seo.analyzer,
            snippetPreview: settings.yoast_seo.snippetPreview,
            elementTarget: [settings.yoast_seo.targetId],
            typeDelay: 300,
            typeDelayStep: 100,
            maxTypeDelay: 1500,
            dynamicDelay: true,
            multiKeyword: false,
            targets: {
              output: settings.yoast_seo.targets.output,
              overall: settings.yoast_seo.targets.overall,
              snippet: settings.yoast_seo.targets.snippet
            },
            snippetFields: {
              title: "snippet-editor-title",
              url: "snippet-editor-slug",
              meta: "snippet-editor-meta-description"
            },
            sampleText: {
              baseUrl: settings.yoast_seo.baseRoot + '/',
              title: settings.yoast_seo.defaultText.title,
              keyword: settings.yoast_seo.defaultText.keyword,
              meta: settings.yoast_seo.defaultText.meta,
              text: settings.yoast_seo.defaultText.body
            },
            fields: {
              keyword: settings.yoast_seo.fields.focusKeyword,
              title: settings.yoast_seo.fields.pageTitle,
              nodeTitle: settings.yoast_seo.fields.nodeTitle,
              meta: settings.yoast_seo.fields.description,
              text: settings.yoast_seo.fields.bodyText,
              url: settings.yoast_seo.fields.url
            },
            placeholderText: {
              title: settings.yoast_seo.placeholderText.title,
              description: settings.yoast_seo.placeholderText.description,
              url: settings.yoast_seo.placeholderText.url
            },
            SEOTitleOverwritten: settings.yoast_seo.SEOTitleOverwritten,
            scoreElement: settings.yoast_seo.fields.seoStatus,
            baseRoot: settings.yoast_seo.baseRoot
          };

          // Create a new Yoast SEO instance.
          if (typeof YoastSEO != "undefined") {
            var DrupalSource = new YoastSEO_DrupalSource(YoastSEO.analyzerArgs);

            // Declaring the callback functions, for now we bind DrupalSource.
            YoastSEO.analyzerArgs.callbacks = {
              getData: DrupalSource.getData.bind(DrupalSource),
              bindElementEvents: DrupalSource.bindElementEvents.bind(DrupalSource),
              saveSnippetData: DrupalSource.saveSnippetData.bind(DrupalSource),
              saveScores: DrupalSource.saveScores.bind(DrupalSource)
            };

            // Make it global.
            window.YoastSEO.app = new YoastSEO.App( YoastSEO.analyzerArgs );

            // Parse the input from snippet preview fields to their corresponding metatag and path fields
            DrupalSource.parseSnippetData( YoastSEO.analyzerArgs.snippetFields.title, YoastSEO.analyzerArgs.fields.title );
            DrupalSource.parseSnippetData( YoastSEO.analyzerArgs.snippetFields.url, YoastSEO.analyzerArgs.fields.url );
            DrupalSource.parseSnippetData( YoastSEO.analyzerArgs.snippetFields.meta, YoastSEO.analyzerArgs.fields.meta );

            // No enter on contenteditable fields.
            $("#snippet_title, #snippet_cite, #snippet_meta").keypress(function(e) {
              if (e.keyCode == 13) {
                e.preventDefault();
              }
            });

            if (typeof CKEDITOR !== "undefined") {
              CKEDITOR.on('instanceReady', function( ev ) {
                var editor = ev.editor;
                for (var text_field in YoastSEO.analyzerArgs.fields.text) {
                  // Check if this the instance we want to track.
                  if (typeof YoastSEO.analyzerArgs.fields.text[text_field] != 'undefined') {
                    if (editor.name == YoastSEO.analyzerArgs.fields.text[text_field]) {
                      editor.on('change', function() {
                        // Let CKEditor handle updating the linked text element.
                        editor.updateElement();
                        // Dispatch input event so Yoast SEO knows something changed!
                        DrupalSource.triggerEvent(editor.name);
                      });
                    }
                  }
                }
              });
            }
          }
          else {
            $('#' + settings.yoast_seo.targets.output).html('<p><strong>' + Drupal.t('It looks like something went wrong when we tried to load the Yoast SEO content analysis library. Please check it the module is installed correctly.') + '</strong></p>');
          }
        });
      }
    }
  }
})(jQuery);

/**
 * Inputgenerator generates a form for use as input.
 * @param args
 * @param refObj
 * @constructor
 */
YoastSEO_DrupalSource = function(args) {
  this.config = args;
  this.refObj = {};
  this.analyzerData = {};
};

/**
 * Sets field value and dispatches an event to fire content analysis magic
 * @param field
 */
YoastSEO_DrupalSource.prototype.triggerEvent = function(field) {
  if ("createEvent" in document) {
    var ev = document.createEvent("HTMLEvents");
    ev.initEvent("input", false, true);
    document.getElementById(field).dispatchEvent(ev);
  }
  else {
    document.getElementById(field).fireEvent("input");
  }
};

/**
 * Parses the input in snippet preview fields on input evt to data in the metatag and path fields
 * @param source
 * @param target
 */
YoastSEO_DrupalSource.prototype.parseSnippetData = function(source, target) {
  var listener = function ( ev ) {
    // textContent support for FF and if both innerText and textContent are
    // undefined we use an empty string.
    document.getElementById(target).value = (ev.target.value || "");
    this.triggerEvent(target);
  }.bind(this);
  if (document.getElementById(source) !== null) {
    document.getElementById(source).addEventListener('blur', listener);
  }
};


/**
 * Grabs data from the refObj and returns populated analyzerData
 * @returns analyzerData
 */
YoastSEO_DrupalSource.prototype.getData = function() {
  // Default data in here.
  data = {
    keyword: this.getDataFromInput( "keyword" ),
    meta: this.getDataFromInput( "meta" ),
    snippetMeta: this.getDataFromInput( "meta" ),
    text: this.getDataFromInput( "text" ),
    pageTitle: this.getDataFromInput( "title" ),
    snippetTitle: this.getDataFromInput( "title" ),
    baseUrl: this.config.baseRoot + '/',
    url: this.config.baseRoot + '/' + this.getDataFromInput( "url" ),
    snippetCite: this.getDataFromInput( "url" )
  };

  // Placeholder text in snippet if nothing was found.
  if (data.meta == '') {
    data.snippetMeta = this.config.placeholderText.description;
  }
  if (data.pageTitle == '') {
    data.snippetTitle = this.config.placeholderText.title;
  }
  if (data.snippetCite == '') {
    data.snippetCite = this.config.placeholderText.url;
  }

  return data;
};

YoastSEO_DrupalSource.prototype.getDataFromInput = function( field ) {
  // If this is an array of id's
  if (this.config.fields[field] instanceof Array) {
    var output = [];
    for (var text_field in this.config.fields[field]) {
      if (
        typeof this.config.fields[field][text_field] != 'undefined'
        && document.getElementById(this.config.fields[field][text_field])
        && document.getElementById(this.config.fields[field][text_field]).value != ''
      ) {
        output.push(document.getElementById(this.config.fields[field][text_field]).value);
      }
    }

    return output.join("\n");
  }else{
    var fieldElem = document.getElementById(this.config.fields[field]);
    return (fieldElem !== null) ? fieldElem.value : '';
  }
};

/**
 * Grabs data from the refObj and returns populated analyzerData
 * @returns analyzerData
 */
YoastSEO_DrupalSource.prototype.updateRawData = function() {
  var data = {
    keyword: this.getDataFromInput( "keyword" ),
    meta: this.getDataFromInput( "meta" ),
    snippetMeta: this.getDataFromInput( "meta" ),
    text: this.getDataFromInput( "text" ),
    nodeTitle: this.getDataFromInput( "nodeTitle" ),
    pageTitle: this.getDataFromInput( "title" ),
    baseUrl: this.config.baseRoot + '/',
    url: this.config.baseRoot + '/' + this.getDataFromInput( "url" ),
    snippetCite: this.getDataFromInput( "url" )
  };

  if (!this.config.SEOTitleOverwritten) {
    data.pageTitle = data.nodeTitle;
    data.snippetTitle = data.nodeTitle;

    document.getElementById(this.config.fields.title).value = data.nodeTitle;
  }

  // Placeholder text in snippet if nothing was found.
  if (data.meta == '') {
    data.snippetMeta = this.config.placeholderText.description;
  }
  if (data.pageTitle == '') {
    data.snippetTitle = this.config.placeholderText.title;
  }
  if (data.snippetCite == '') {
    data.snippetCite = this.config.placeholderText.url;
  }

  YoastSEO.app.rawData = data;
};

/**
 * Calls the eventbinders.
 */
YoastSEO_DrupalSource.prototype.bindElementEvents = function() {
  this.inputElementEventBinder();
};

/**
 * Binds the renewData function on the change of inputelements.
 */
YoastSEO_DrupalSource.prototype.inputElementEventBinder = function() {
  for (field in this.config.fields) {
    if (this.config.fields[field] instanceof Array) {
      for (var text_field in this.config.fields[field]) {
        if (typeof this.config.fields[field][text_field] != 'undefined' && document.getElementById(this.config.fields[field][text_field])) {
          document.getElementById(this.config.fields[field][text_field]).__refObj = this;
          document.getElementById(this.config.fields[field][text_field]).addEventListener("input", this.renewData.bind(this));
        }
      }
    }
    if (typeof this.config.fields[field] != 'undefined' && document.getElementById(this.config.fields[field])) {
      document.getElementById(this.config.fields[field]).__refObj = this;
      document.getElementById(this.config.fields[field]).addEventListener("input", this.renewData.bind(this));
    }
  }
};

/**
 * Calls getAnalyzerinput function on change event from element
 * @param event
 */
YoastSEO_DrupalSource.prototype.renewData = function ( ev ) {
  // @TODO: implement snippetPreview rebuild
  if (!this.config.SEOTitleOverwritten && (ev.target.id == this.config.fields.nodeTitle || ev.target.id == this.config.snippetFields.title)) {
    var $this = this;
    setTimeout(function(){
      $this.config.SEOTitleOverwritten = true;
      document.getElementById(YoastSEO.app.config.fields.title).value = ev.target.value;
      document.getElementById($this.config.snippetFields.title).value = ev.target.value;
      $this.triggerEvent(YoastSEO.app.config.snippetFields.title);
    }, 3000);
  }

  if (ev.target.id == this.config.fields.title) {
    document.getElementById(this.config.snippetFields.title).value = ev.target.value;
    this.triggerEvent(this.config.snippetFields.title);
  }

  if (ev.target.id == this.config.fields.meta) {
    document.getElementById(this.config.snippetFields.meta).value = ev.target.value;
    this.triggerEvent(this.config.snippetFields.meta);
  }

  if (ev.target.id == this.config.fields.url) {
    document.getElementById(this.config.snippetFields.url).value = ev.target.value;
    this.triggerEvent(this.config.snippetFields.url);
  }

  YoastSEO.app.refresh();
};

/**
 * Save the snippet values, but in reality we ignore this.
 *
 * @param {Object} ev
 */
YoastSEO_DrupalSource.prototype.saveSnippetData = function (ev) {
};

/**
 * retuns a string that is used as a CSSclass, based on the numeric score
 * @param score
 * @returns output
 */
YoastSEO_DrupalSource.prototype.scoreRating = function (rating) {
  var scoreRate;

  if (rating <= 4) {
    scoreRate = "bad";
  }

  if (rating > 4 && rating <= 7) {
    scoreRate = "ok";
  }

  if (rating > 7) {
    scoreRate = "good";
  }

  if (rating == 0) {
    scoreRate = "na";
  }

  return Drupal.t("SEO: <strong>" + scoreRate + "</strong>");
};

/**
 * Sets the SEO score in the hidden element.
 * @param score
 */
YoastSEO_DrupalSource.prototype.saveScores = function ( score ) {
  var rating = 0;
  if (typeof score == "number" && score > 0) {
    rating = ( score / 10 );
  }

  document.getElementById(this.config.targets.overall).getElementsByClassName("score_title")[0].innerHTML = this.scoreRating( rating );
  document.getElementById(this.config.scoreElement).value = rating;
};

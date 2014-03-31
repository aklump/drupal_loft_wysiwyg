## Installation

There are two modules on d.o. with machine names ckeditor.  Therefor there is a namespace conflict.  Don't get trapped by this.  Make sure you download from the link below.

1. The module and path are mismatched at d.o.  Download and enable <https://drupal.org/project/wysiwyg_ckeditor> like this

        drush dl wysiwyg_ckeditor; drush en ckeditor

1. Enable this module

## Configuration
1. Disable the slim wysiwyg filter if not needed, e.g. no users here: _admin/config/content/formats/slim_wysiwyg/disable_.
2. Visit _admin/config/content/wysiwyg_ and associate the CKEditor with the slim and full html profiles.
1. Define which roles can user _admin/config/content/formats/full_wysiwyg_.
5. Configure both the full and slim versions.
6. Set the order of formats here: _admin/config/content/formats_

## Bundle configuration
1. Add field_inline_images to each bundle that needs inline images.
1. Add a collapsed fieldset titled _Upload Images_ around the above.  Place it below the main body field of the bundle.

## Important Configuration Links
| uri | admin menu | description |
|----------|----------|----------|
| admin/config/content/formats  | Configuration > Content authoring > Text Formats | Set order of formats per role; Admin all formats  |
| admin/config/content/formats/{format}  | Configuration > Content authoring > Text Formats > Full WYSIWYG | Disable a format; Edit a single text format  |
| admin/config/content/wysiwyg | Configuration > Content authoring > WYSIWYG profiles | Associate CKEditor with text formats; adjust editor options |

After installing the Address Field Static Map, it needs to be configured.

First, add a new Address Field to an existing or a new content type. A content
type may have several address fields - "Physical Address", "Mailing Address",
and "Owner's Address" for example. In this readme, we'll use a single address
field named "Physical Address".

Next, tell Address Field Static Map to use your address field. Go to
Admin/Configuration/System/Address Field Static Map Block. In the box labeled
"Address Field" choose the name of your address field. On this screen, you'll
also want to enter your Google Maps API key and tweak other settings.  Click
Save Configuration at the bottom of the page.

Third, you need to tell Drupal where to put the map. Go to
Admin/Structure/Blocks. The Address Field Static Map will initially be at the
bottom under "Disabled". Move it to your desired region and order within that
region and then click "Save Blocks" at the bottom of the page.

You will probably have to experiment with the map size and the position a few
times to get it how you want it.

Your map should be working now. Go enter an address and test it out.

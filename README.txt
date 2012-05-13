= Resource Conflict =

This module allows for users to detect overlapping dates and respond with Rules.
This is most often used for tracking bookable resources.  For example, a student 
can book a microscope for use within their lab, but only one microscope can be 
booked at a time.

== Requirements ==

Entity: http://drupal.org/project/entity
Rules: http://drupal.org/project/rules
Date: http://drupal.org/project/date

== Installation ==

Download the module to your modules directory, and enable it from admin/modules.

You may wish to disable or modify the built in example Rule, which shows an error
message for conflicts as they are detected.

== Usage ==

1) Create a content type with a date field.
2) On the Content Type Edit page, enable Conflict Checking for this Content Type.
   Select the date field which should be used for conflict checking, and save 
   the form.
3) Create a Rule which reacts to "A conflict has been detected".

== Contact ==
This module was originally developed by Andrew Berry (andrewberry@sentex.net) 
for use at the Protein Dynamics lab at the University of Guelph.
Project Page: http://drupal.org/project/resource_conflict

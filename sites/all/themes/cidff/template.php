<?php

/**
 * @file
 * template.php
 */

/*
 * Supprime les attributs width et heigt des images
 */
function cidff_preprocess_image(&$variables) {
  foreach (array('width', 'height') as $key) {
  
   unset($variables[$key]);
   unset($variables[$key]);
 }
}

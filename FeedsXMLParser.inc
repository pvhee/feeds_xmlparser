<?php
// $Id$

/**
 * Parses a given file as an XML file.
 */
class FeedsXMLParser extends FeedsParser {

  /**
   * Implementation of FeedsParser::parse().
   */
  public function parse(FeedsImportBatch $batch, FeedsSource $source) {
    // Use XML Parser to parse the file and return a formatted PHP array.
    $rows = xml_parser_xml_to_array(realpath($batch->getFilePath()));
    
    // Populate batch.
    $batch->setItems($rows);
  }
  
}
<?php

// Create a SimpleXMLElement object for the root element
$xml = new SimpleXMLElement('<?xml version="1.0" encoding="UTF-8"?><Courses></Courses>');

// Adding details for Arts course
$arts = $xml->addChild('Arts');
$artsCourse = $arts->addChild('Course');
$artsCourse->addChild('Level', 'Undergraduate');
$artsCourse->addChild('Intake_Capacity', '150');

// Adding details for Science course
$science = $xml->addChild('Science');
$scienceCourse = $science->addChild('Course');
$scienceCourse->addChild('Level', 'Undergraduate');
$scienceCourse->addChild('Intake_Capacity', '200');

// Adding details for Commerce course
$commerce = $xml->addChild('Commerce');
$commerceCourse = $commerce->addChild('Course');
$commerceCourse->addChild('Level', 'Undergraduate');
$commerceCourse->addChild('Intake_Capacity', '180');

// Adding details for Management course
$management = $xml->addChild('Management');
$managementCourse = $management->addChild('Course');
$managementCourse->addChild('Level', 'Postgraduate');
$managementCourse->addChild('Intake_Capacity', '50');

// Save the XML content to "Course.xml"
$xml->asXML('Course.xml');

echo "XML file 'Course.xml' has been created successfully.";

?>


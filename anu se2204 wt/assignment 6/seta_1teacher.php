<?php

// Create a SimpleXMLElement object for the XML structure
$xml = new SimpleXMLElement('<?xml version="1.0" encoding="UTF-8"?><Department></Department>');

// Add the Computer Science department to the XML
$computerScience = $xml->addChild('Computer_Science');

// Adding teacher details
$teacher1 = $computerScience->addChild('Teacher');
$teacher1->addChild('Name', 'John Doe');
$teacher1->addChild('Qualification', 'NET');
$teacher1->addChild('Subject_Taught', 'Data Structures');
$teacher1->addChild('Experience', '5 years');

$teacher2 = $computerScience->addChild('Teacher');
$teacher2->addChild('Name', 'Jane Smith');
$teacher2->addChild('Qualification', 'PhD');
$teacher2->addChild('Subject_Taught', 'Operating Systems');
$teacher2->addChild('Experience', '10 years');

$teacher3 = $computerScience->addChild('Teacher');
$teacher3->addChild('Name', 'Alice Brown');
$teacher3->addChild('Qualification', 'NET');
$teacher3->addChild('Subject_Taught', 'Database Management');
$teacher3->addChild('Experience', '3 years');

$teacher4 = $computerScience->addChild('Teacher');
$teacher4->addChild('Name', 'Bob White');
$teacher4->addChild('Qualification', 'M.Tech');
$teacher4->addChild('Subject_Taught', 'Computer Networks');
$teacher4->addChild('Experience', '7 years');

$teacher5 = $computerScience->addChild('Teacher');
$teacher5->addChild('Name', 'David Green');
$teacher5->addChild('Qualification', 'NET');
$teacher5->addChild('Subject_Taught', 'Software Engineering');
$teacher5->addChild('Experience', '8 years');

// Save the XML to a file
$xml->asXML('Teacher.xml');

// Display teachers who have NET qualification
echo "Teachers with NET qualification: <br><br>";

foreach ($computerScience->Teacher as $teacher) {
    if ((string)$teacher->Qualification === 'NET') {
        echo "Name: " . $teacher->Name . "<br>";
        echo "Qualification: " . $teacher->Qualification . "<br>";
        echo "Subject Taught: " . $teacher->Subject_Taught . "<br>";
        echo "Experience: " . $teacher->Experience . "<br><br>";
    }
}

?>

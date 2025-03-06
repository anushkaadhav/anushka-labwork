<?php

// Create a new XML structure with root element 'studentdetail'
$xml = new SimpleXMLElement('<?xml version="1.0" encoding="UTF-8"?><studentdetail></studentdetail>');

// Add student data manually (you can change this to add more students easily)
$student1 = $xml->addChild('students');
$student1->addChild('studName', 'John Doe');
$student1->addChild('class', '10th Grade');
$student1->addChild('mobileno', '1234567890');
$student1->addChild('marks', '85');

$student2 = $xml->addChild('students');
$student2->addChild('studName', 'Jane Smith');
$student2->addChild('class', '9th Grade');
$student2->addChild('mobileno', '2345678901');
$student2->addChild('marks', '60');

$student3 = $xml->addChild('students');
$student3->addChild('studName', 'Alice Brown');
$student3->addChild('class', '10th Grade');
$student3->addChild('mobileno', '3456789012');
$student3->addChild('marks', '92');

// Save the XML to a file called 'Teacher.xml'
$xml->asXML('student.xml');

// Display students with marks greater than 75
echo "Students with marks greater than 75: <br><br>";

foreach ($xml->students as $student) {
    if ((int)$student->marks > 75) {
        echo "Name: " . $student->studName . "<br>";
        echo "Class: " . $student->class . "<br>";
        echo "Mobile No: " . $student->mobileno . "<br>";
        echo "Marks: " . $student->marks . "<br><br>";
    }
}
?>

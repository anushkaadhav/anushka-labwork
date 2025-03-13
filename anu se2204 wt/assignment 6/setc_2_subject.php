<?php

// Create a SimpleXMLElement object for the root element
$xml = new SimpleXMLElement('<?xml version="1.0" encoding="UTF-8"?><subject></subject>');

// Add player data
$subject1= $xml->addChild('code');
$subject1->addChild('subcode', 'BCA 245');
$subject1->addChild('name', 'web technology laboratory');

$subject2= $xml->addChild('code');
$subject2->addChild('subcode', 'BCA 243');
$subject2->addChild('name', 'web technology');

$subject3= $xml->addChild('code');
$subject3->addChild('subcode', 'BCA 123');
$subject3->addChild('name', 'CPP');

$subject4= $xml->addChild('code');
$subject4->addChild('subcode', 'BCA 167');
$subject4->addChild('name', 'SE');

$subject5= $xml->addChild('code');
$subject5->addChild('subcode', 'BCA456');
$subject5->addChild('name', 'PYTHON');


// Save the XML content to a file
$xml->asXML('subject.xml');

// Display players who have scored more than 100 runs
echo "subject code of web tech lab:<br><br>";
foreach ($xml->code as $code) {
    if ($code->name== 'web technology laboratory')
     {
        echo "code: " . $code->subcode. "<br>";
        echo "name: " . $code->name. "<br>";
        
    }
    }
   

?>

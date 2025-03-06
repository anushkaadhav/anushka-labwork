<?php

// Create a SimpleXMLElement object for the root element
$xml = new SimpleXMLElement('<?xml version="1.0" encoding="UTF-8"?><cricket></cricket>');

// Add player data
$player1 = $xml->addChild('player');
$player1->addChild('name', 'Abe');
$player1->addChild('runs', '100');
$player1->addChild('wickets', '20');

$player2 = $xml->addChild('player');
$player2->addChild('name', 'Bob');
$player2->addChild('runs', '150');
$player2->addChild('wickets', '25');

$player3 = $xml->addChild('player');
$player3->addChild('name', 'Charlie');
$player3->addChild('runs', '90');
$player3->addChild('wickets', '15');

$player4 = $xml->addChild('player');
$player4->addChild('name', 'David');
$player4->addChild('runs', '120');
$player4->addChild('wickets', '30');

$player5 = $xml->addChild('player');
$player5->addChild('name', 'Eve');
$player5->addChild('runs', '80');
$player5->addChild('wickets', '100');

// Save the XML content to a file
$xml->asXML('cricket.xml');

// Display players who have scored more than 100 runs
echo "Players who have scored more than 100 runs: or  20 wickets: <br><br>";
foreach ($xml->player as $player) {
    if ($player->runs > 100 || $player->wickets > 20 )
     {
        echo "Name: " . $player->name . "<br>";
        echo "Runs: " . $player->runs . "<br>";
        echo "Wickets: " . $player->wickets . "<br><br>";
    }
    }
   

?>


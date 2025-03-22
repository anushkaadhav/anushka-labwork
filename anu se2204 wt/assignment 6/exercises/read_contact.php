<?php

header("Content-Type: application/json");


$filename = "contact.dat";

if (file_exists($filename))
 {
    $lines = file($filename, FILE_IGNORE_NEW_LINES); 
    $contacts = [];


    foreach ($lines as $line) 
    {
        $data = explode(",", $line); 
        $contacts[] = [
            'srno' => $data[0],
            'name' => $data[1],
            'residence_number' => $data[2],
            'mobile_number' => $data[3],
            'relation' => $data[4],
        ];
    }

    
    echo json_encode($contacts);
} 
else 
{
    
    echo json_encode(['error' => 'File not found']);
}
?>


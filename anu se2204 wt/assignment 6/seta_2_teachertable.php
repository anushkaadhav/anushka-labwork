<?php

// Load the XML file
$xml = simplexml_load_file('Teacher.xml');

// Check if the XML file was loaded successfully
if (!$xml) {
    echo "Error: Cannot load XML file.";
    exit;
}

// Display the data in a tabular format
echo "<table border='1' cellpadding='10'>";
echo "<tr><th>Teacher Name</th><th>Qualification</th><th>Subject Taught</th><th>Experience</th></tr>";

// Loop through each teacher and display their details in table rows
foreach ($xml->Computer_Science->Teacher as $teacher) {
    echo "<tr>";
    echo "<td>" . $teacher->Name . "</td>";
    echo "<td>" . $teacher->Qualification . "</td>";
    echo "<td>" . $teacher->Subject_Taught . "</td>";
    echo "<td>" . $teacher->Experience . "</td>";
    echo "</tr>";
}

echo "</table>";

?>


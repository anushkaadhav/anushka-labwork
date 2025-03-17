<?php

$host = "localhost";
$db = "your_database";
$user = "your_username";
$pass = "your_password";

$conn = pg_connect("host=$host dbname=$db user=$user password=$pass");

if (!$conn) {
    die("Database connection failed.");
}

$query = "SELECT * FROM Teacher";
$result = pg_query($conn, $query);

if (!$result) {
    echo "Error fetching data.";
    exit;
}

if (pg_num_rows($result) > 0) {
    echo "<table border='1' cellpadding='10' cellspacing='0'>";
    echo "<tr><th>Tno</th><th>Name</th><th>Subject</th><th>Research Area</th></tr>";
    while ($row = pg_fetch_assoc($result)) {
        echo "<tr>";
        echo "<td>{$row['tno']}</td>";
        echo "<td>{$row['name']}</td>";
        echo "<td>{$row['subject']}</td>";
        echo "<td>{$row['research_area']}</td>";
        echo "</tr>";
    }
    echo "</table>";
} else {
    echo "<p>No data found.</p>";
}

pg_close($conn);

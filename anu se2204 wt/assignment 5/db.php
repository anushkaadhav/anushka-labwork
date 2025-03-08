<?php
    $db = pg_connect("host=localhost port=5432 dbname=postgres user=postgres password=mit@2022");
    if (!$db)
     {
        die("Cannot connect: " . pg_last_error());
    }

    // Creating the database
    $query = "CREATE DATABASE my_db2;";
    if (pg_query($db, $query)) 
    {
        echo "DATABASE created";
    } else 
    {
        echo "Error creating database: " . pg_last_error();
    }

    // Closing the connection
    pg_close($db);
?>
           

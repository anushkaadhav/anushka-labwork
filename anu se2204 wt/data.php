<?php
    $db=pg_connect("host=localhost port=5432 dbname=postgres user=postgres password=12345");
    echo "connection is successfully done";
      if(!$db)
       {
          die("cannot connect".pg_error());
        }
        
        pg_close($db);
       
  ?>


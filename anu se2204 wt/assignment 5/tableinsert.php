<?php
    $db=pg_connect("host=localhost port=5432 dbname=postgres user=postgres password=mit@2022");
    echo "connection is successfully done";
      if(!$db)
       {
          die("cannot connect".pg_error());
        }
    echo "connection is successfully done";

        pg_query("INSERT INTO person7(FirstName,LastName,Age)VALUES('anushka','adhav',21);")  or die(pq_error());
        
    echo "<br>REcord inserted";
        
 pg_close($db);
       
  ?>


<?php
    $db=pg_connect("host=localhost port=5432 dbname=postgres user=postgres password=mit@2022");
    echo "connection is successfully done";
      if(!$db)
       {
          die("cannot connect".pg_error());
        }
        $sql="CREATE TABLE person7(FirstName varchar(15),LastName varchar(15),Age int)";
        
  pg_query($db,$sql);
    echo "<br>table is created";
        
 pg_close($db);
       
  ?>


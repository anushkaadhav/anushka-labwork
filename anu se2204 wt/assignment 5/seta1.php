<?php
   $name=$_POST['oname'];
   $con=pg_connect("host=localhost port=5432 dbname=postgres user=postgres password=mit@2022");
    if (!$con)
     {
        die("Cannot connect: " . pg_last_error());
    }
       echo"connection is successfully done<br>";
       
      
      
       $result=pg_query("select desc1,oname from property1 where oname='$name' ") ;
       if(!$result)
       {
        die(pg_last_error());
        }
       
       echo "<table border='1'>
       <tr>
          <th>property name</th>
          <th>owner name</th>
        </tr>";
       while($row=pg_fetch_array($result))
       {
         echo "<tr>";
         echo "<td>".$row['desc1']."</td>";
         echo "<td>".$row['oname']."</td>";
         echo "</tr>";
       }
  pg_close($con);
?>
         

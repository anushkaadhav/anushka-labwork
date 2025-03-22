<?php
$department=$_POST['department'];
$con=pg_connect("host=localhost port=5432 dbname=postgres user=postgres password=mit@2022");
if(!$con)
{
 die("cannot connect".pg_error());
}
echo"connection is successfully done<br>";
$result=pg_query("select count(eno) as cn from department where dname='$department';") or die(pg_error());

echo"<table border='1'>
     <tr>
    
     <th>count</th>
     </tr>";
  while($row=pg_fetch_array($result))
  {
  echo"<tr>";
  
  echo"<td>".$row['cn']."</td>";
  echo"</tr>";
  }
  pg_close($con);
 
 ?>

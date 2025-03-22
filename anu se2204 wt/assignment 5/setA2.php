<?php
$sodate=$_POST['s_order_date'];
$con=pg_connect("host=localhost port=5432 dbname=postgres user=postgres password=mit@2022");
if(!$con)
{
 die("cannot connect".pg_last_error());
}
echo"connection is successfully done<br>";
$result=pg_query("select sonumber,s_order_date from sales_order where s_order_date<'$sodate' ") ;
if(!$result)
{
 die(pg_last_error());
 }

echo"<table border='1'>
     <tr>
     <th>sales number</th>
     <th>order date</th>
     </tr>";
  while($row=pg_fetch_array($result))
  {
  echo"<tr>";
  echo"<td>".$row['sonumber']."</td>";
  echo"<td>".$row['s_order_date']."</td>";
  echo"</tr>";
  }
  pg_close($con);
 
 ?>

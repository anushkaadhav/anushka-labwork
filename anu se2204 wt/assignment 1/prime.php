<!DOCTYPE html>
<html>
<head>
     <title>prime number checker</title>
</head>
<body>
   <h1>prime number checker</h1>
   <form action="prime.php" method="post">
    <label for="numbers" >enter numbers:</label><br>
    <input type="text"  name="numbers">
           <br><br>
           <input type="submit">
       </form>
        
     </body>
     </html>
<?php
   
  $number=$_POST['numbers'];
    
 echo "<h1>prime number result:</h1>";
   $flag=true;
 for ($i = 2; $i <$number; $i++) 
 {
        if ($number % $i == 0) 
        {
            $flag=false;
            break;
        }
      
   }
   
    if ($flag==false) 
        {
           echo "$number is a  not prime number.";
        }
      else
      {
    echo "$number is  a prime number.";
   }
?>

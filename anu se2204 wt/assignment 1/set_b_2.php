<html>
<head>
   <title>while loop</title>
</head>
<body>
 <form action="set_b_2.php" method="post">
    <label for="numbers" >enter numbers:</label><br>
    <input type="text"  name="numbers">
           <br><br>
           <input type="submit">
       </form>
       
   <?php
    $n=$_POST['numbers'];
    $temp=$n;
    $digit=0;
    while($temp>0)
    {
       $temp=round($temp/10);
         $digit++;
      }
      $sum=0;
      $temp=$n;
      for($i=0;$i<$digit;$i++)
      {
          $digits=$temp%10;
          $sum +=pow($digits,$digit);
          $temp /=10;
        }
        if($sum==$n)
            echo "the number is armstrong".$n."<br>";
        else
           echo "the number is not armstrong".$n."<br>";
   
    ?>
</body>
</html>

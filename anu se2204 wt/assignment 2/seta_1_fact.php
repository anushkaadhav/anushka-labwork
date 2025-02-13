<html>
<head>
   <title>factorial of number</title>
 </head>
 <body>
 <form action="seta_1_fact.php" method="post">
    <label for="number" >enter number:</label><br>
    <input type="text"  name="number">
           <br><br>
           <input type="submit">
       </form>
     <?php
     $number=$_POST['number'];
         function factorial($number)
         {
            $fact=1;
            for($i=1;$i<=$number;$i++)
            {
               $fact=$fact*$i;
               }
               return $fact;
          }
          echo "the factorial of number  {$number} is:" . factorial($number);
        ?>
        </body>
    </html>
    
        
  

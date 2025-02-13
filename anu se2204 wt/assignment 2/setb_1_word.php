<html>
<head>
   <title> number in word</title>
 </head>
 <body>
 <form action="setb_1_word.php" method="post">
    <label for="number" >enter number:</label><br>
    <input type="text"  name="number">
           <br><br>
           <input type="submit">
       </form>
       <?php
          $num=$_POST['number'];
          $word= array( 0 => "zero", 1 =>"one",2=>"Two",3=>"Three",4=>"Four",5=>"five",6=>"six",7=>"seven",8=>"eight",9=>"nine");
         
          
          
    echo "the number {$num} in words is: ";
            
         for($i=0;$i<strlen($num);$i++)
          {
            echo $word[$num[$i]] . " ";
          }
      
             
         ?>
    </body>
    </html>

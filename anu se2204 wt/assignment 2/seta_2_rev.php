<html>
<head>
   <title> reverse string</title>
 </head>
 <body>
 <h1>reverse of string</h1>
 <form action="seta_2_rev.php" method="post">
    <label for="string" >enter string:</label><br>
    <input type="text"  name="string">
           <br><br>
           <input type="submit">
       </form>
       <?php
           $string=$_POST['string'];
           echo "orginal string:" . $string;
           echo "<br>"; 
           $rev=strrev($string);
           echo "reverse string:" . $rev;
        ?>
    </body>
    </html>

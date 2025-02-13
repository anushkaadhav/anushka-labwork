<html>
<head>
   <title>palindrome of string</title>
 </head>
 <body>
 <h1>palindrome of string</h1>
 <form action="seta_3_palin.php" method="post">
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
           echo "<br>"; 
           if($string==$rev)
            echo "{$string} string is palindrome";
          else
            echo "{$string} string is not a palindrome";
        ?>
    </body>
    </html>

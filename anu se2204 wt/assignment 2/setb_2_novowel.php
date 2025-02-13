<html>
<head>
   <title>count no of vowel</title>
 </head>
 <body>
 <h1>count no of vowel</h1>
 <form action="setb_2_novowel.php" method="post">
    <label for="string" >enter string:</label><br>
    <input type="text"  name="string">
           <br><br>
           <input type="submit">
       </form>
       </body>
       </html>
       <?php
           $str=$_POST['string'];
           function countVowel($str)
           {
           $vowels= [ 'a','e','i','o','u','A','E','I','O','U'];
           $count=0;
           for($i=0;$i<strlen($str);$i++)
           {
              if( in_array($str[$i],$vowels))
              {
                  $count++;
                }
            }
            return $count;
         }
         $vcount=countVowel($str);
         echo "the total number of vowel in a string {$str} is:" . $vcount;
       ?>
           

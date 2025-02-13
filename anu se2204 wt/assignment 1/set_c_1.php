 <html>
 <head>
    <title>floyd triangle</title>
   </head>
   <body>
       <?php
          $n=4;
          $num=1;
       for($i=1;$i<=$n;$i++)
        {
           for($j=1;$j<=$i;$j++)
            {
                echo $num. "  " ;
               $num++;
              }
        echo "<br>";
        }
       ?>
    </body>
    </html> 

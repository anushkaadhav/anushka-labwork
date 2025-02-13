<html>
<head>
    <title> if statement</title>
 </head>
   <body> 
              <?php
                       $x=Date("D");
                       if($x=="Sun")
                           echo "weekend";
                        elseif($x=="Mon")
                           echo "welcome to monday";
                           elseif($x=="Tue")
                           echo "welcome to Tue";
                            elseif($x=="wed")
                           echo "welcome to wednesday"; 
                           else
                             echo "Today is ".$x;
                ?>
   </body>
   
</html>

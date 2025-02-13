<html>
<head>
   <title> array</title>
</head>
<body>
   <?php
         $families=array
            {
             "dashrath"=>array
             { 
                 "Anu",
                 "vaishu",
                 "dadu"
               }
              "balasaheb"=>array
              {
                "santosh",
                "avi"
               }
               "ram"=>array
               {
                  "madhuri"
                }
              }
              
            foreach($families as $value)
         {
           echo $value."<br>";
         }     
                 
         
       
         
    ?>
</body>
</html>

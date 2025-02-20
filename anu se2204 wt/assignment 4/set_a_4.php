<?php
   class person
   {
      public $id,$name;
      function __construct($id,$name)
      {
          $this->id=$id;
          $this->name=$name;
        }
        function show()
        {
           echo "hello {$this->name}";
         }
   }
   
   $p=new person(1,'Anushka');
   
   echo "classname=".get_class($p);
   echo"<br>";
   print_r(get_class_methods($p));
   echo"<br>";
 echo method_exists($p,'show')?'method exit':'method not exit';
      echo"<br>";
   echo property_exists($p,'id')?'property exit':'property not exit';
      echo"<br>";
   echo class_exists('person')?'class exit':'class not exit';
      echo"<br>";
   echo interface_exists('int')?'interface exit':'interface not exit';
   ?>

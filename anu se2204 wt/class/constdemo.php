<?php
    class Emp
      {
        
     private  $E_id;
     private $E_name;
     private $Designation;
         
     public  function __construct($id,$name,$dign)
     {
         echo "constructor called";
        $this->E_id=$id;
              $this->E_name=$name;
              $this->Designation=$dign;
      }
      
      public function display()
          {
             echo "<br>employee id:$this->E_id";
             echo "<br>employee name:$this->E_name";
             echo "<br>employee designation:$this->Designation";
           }
         public   function __destruct()
           {
             echo "<br>destructor called";
           }
       }
       $E1=new Emp(1,"datta","businessman");
      
       $E1->display();
    ?>

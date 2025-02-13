<?php
    class Emp
      {
        
     private  $E_id,$E_name,$Designation;
         
     public function accept($E_id,$E_name,$Designation)
         {
            $this->E_id=$E_id;
              $this->E_name=$E_name;
              $this->Designation=$Designation;
           }
          public function display()
          {
             echo "<br>employee id:$this->E_id";
             echo "<br>employee name:$this->E_name";
             echo "<br>employee designation:$this->Designation";
           }
       }
       $E1=new Emp;
       $E1->accept(1,"Anushka","teacher");
       $E1->display();
    ?>

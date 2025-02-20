<html>
<body>
<form action="set_a_2.php" method="post">
  <input type="radio" name='op'  value='1'>Triangle<br>
  <input type="radio" name='op'  value='2'>Square<br>
  <input type="radio" name='op'  value='3'>Circle<br>
  <input type="radio" name='op'  value='4'>Rectangle<br>
  <input type="submit" value="submit">
</form>
</body>
</html>

<?php
    $op=$_POST['op'];
    
    abstract class shape
    {
       abstract function area();
    }
    class Triangle extends shape
    {
           var $h,$w;
           function __construct($h,$w)
          {
              $this->h=$h;
              $this->w=$w;
           }
           function area()
          {
              echo"<br>area of triangle=".(0.5*$this->w*$this->h)."<br>";
           }
     }
      class Square extends shape
    {
           var $side;
           function __construct($side)
          {
              $this->side=$side;
              
           }
           function area()
          {
              echo"<br>area of square=".($this->side*$this->side)."<br>";
           }
     }
      class Circle extends shape
    {
           var $r;
           function __construct($r)
          {
              $this->r=$r;
             
           }
           function area()
          {
              echo"<br>area of circle=".(3.14*$this->r*$this->r)."<br>";
           }
     }
      class Rectangle extends shape
    {
           var $l,$b;
           function __construct($l,$b)
          {
              $this->l=$l;
              $this->b=$b;
           }
           function area()
          {
              echo"<br>area of rectangle=".($this->l*$this->b)."<br>";
           }
     }
     switch($op)
     {
        case 1:$T=new Triangle(12,25);
                 $T->area();
                 break;
       case 2:$S=new Square(5);
                 $S->area();
                 break;
       case 3:$C=new Circle(4);
                 $C->area();
                 break;
       case 4:$R=new Rectangle(8,6);
                 $R->area();
                 break;
      default:
           echo"invalid case";
           
     }
   ?>

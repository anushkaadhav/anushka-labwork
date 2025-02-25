<?php
interface Shape
 {
    public function area();
    public function volume();
}

class Cylinder implements Shape 
{
    private $radius;
    private $height;
    
    public const PI = 3.1459;

    public function __construct($r, $h) 
    {
        $this->radius = $r;
        $this->height = $h;
    }
    
    public function display()
    {
        echo "Radius: " . $this->radius. "<br>";
        echo "Height: " . $this->height."<br>";
    }

    public function area()
     {
        $area = 2 * self::PI * $this->radius * ($this->radius +$this->height);
        echo "\nSurface Area of Cylinder: " . $area . "<br>";
    }

    public function volume() 
    {
        $volume = self::PI * ($this->radius * $this->radius * $this->height);
        echo "\nVolume of Cylinder: " . $volume . "<br>";
    }
}

$cylinder = new Cylinder(5, 4);
$cylinder->display();
$cylinder->area();
$cylinder->volume();

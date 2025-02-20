<?php


interface PropertyInterface 
{
    public function setProperty($property);
    public function getProperty();
}

interface HomeInterface 
{
    public function setHasApartment($bool);
    public function getHasSociety();
}


class Bunglow implements PropertyInterface, HomeInterface
 {
    private $property;
    private $hasApartment;
    private $hasGarden;

   
    public function setProperty($property)
     {
        $this->property = $property;
    }

   
    public function getProperty()
     {
        return $this->property;
    }

    
    public function setHasApartment($bool) 
    {
        $this->hasApartment = $bool;
    }

    
    public function getHasSociety()
     {
        return $this->hasApartment;
    }

    
    public function setHasGarden($bool) 
    {
        $this->hasGarden = $bool;
    }

    
    public function getHasGarden() 
    {
        return $this->hasGarden;
    }

    
    public function displayDetails() 
    {
        echo "Property: " . $this->getProperty() . "\n";
        echo "Has Apartment: " . ($this->getHasSociety() ? "Yes" : "No") . "\n";
        echo "Has Garden: " . ($this->getHasGarden() ? "Yes" : "No") . "\n";
    }
}


$bunglow = new Bunglow();


$bunglow->setProperty("Luxury Bunglow in Beverly Hills");


$bunglow->setHasApartment(true);
$bunglow->setHasGarden(true);


$bunglow->displayDetails();

?>


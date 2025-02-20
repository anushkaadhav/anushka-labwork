<?php

// Employee Class
class Employee
 {
    private $id;
    private $name;
    private $department;
    private $salary;

   
    public function __construct($id, $name, $department, $salary)
     {
        $this->id = $id;
        $this->name = $name;
        $this->department = $department;
        $this->salary = $salary;
    }

    
    public function getId()
     {
        return $this->id;
    }

    public function getName() 
    {
        return $this->name;
    }

    public function getDepartment()
     {
        return $this->department;
    }

    public function getSalary()
     {
        return $this->salary;
    }

    
    public function displayEmployeeDetails() 
    {
        echo "<br>ID: " . $this->id ;
        echo "<br>Name: " . $this->name ;
        echo "<br>Department: " . $this->department ;
        echo "<br>Salary: " . $this->salary ;
    }
}

class Manager extends Employee
 {
    private $bonus;

 
    public function __construct($id, $name, $department, $salary, $bonus) 
    {
        parent::__construct($id, $name, $department, $salary);
        $this->bonus = $bonus;
    }

    
    public function getBonus() 
    {
        return $this->bonus;
    }

    
    public function displayManagerDetails()
     {
        $this->displayEmployeeDetails();
        echo "Bonus: " . $this->bonus ;
        echo "<br>Total Salary (Salary + Bonus): " . ($this->getSalary() + $this->bonus) ;
    }

    
    public function getTotalSalary() 
    {
        return $this->getSalary() + $this->bonus;
    }
}


$managers = [
    new Manager(101, "Alice", "HR", 50000, 8000),
    new Manager(102, "Bob", "Finance", 60000, 10000),
    new Manager(103, "Charlie", "IT", 70000, 12000),
    new Manager(104, "David", "Sales", 55000, 9000),
    new Manager(105, "Eva", "Marketing", 65000, 11000),
    new Manager(106, "Frank", "Operations", 80000, 15000)
];


$max_salary_manager = $managers[0];
foreach ($managers as $manager) 
{
    if ($manager->getTotalSalary() > $max_salary_manager->getTotalSalary()) 
    {
        $max_salary_manager = $manager;
    }
}


echo "Manager with the Maximum Total Salary:";
$max_salary_manager->displayManagerDetails();

?>


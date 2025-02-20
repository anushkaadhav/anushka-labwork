<?php


class Teacher
 {
    protected $code;
    protected $name;
    protected $qualification;

    public function __construct($code, $name, $qualification) 
    {
        $this->code = $code;
        $this->name = $name;
        $this->qualification = $qualification;
    }

    public function displayTeacherDetails()
     {
        echo "Code: " . $this->code . ", Name: " . $this->name . ", Qualification: " . $this->qualification . "\n";
    }
}

class teach_account extends Teacher
 {
    protected $account_no;
    protected $joining_date;

    public function __construct($code, $name, $qualification, $account_no, $joining_date) 
    {
        parent::__construct($code, $name, $qualification);
        $this->account_no = $account_no;
        $this->joining_date = $joining_date;
    }

    public function displayAccountDetails() 
    {
        echo "Account No: " . $this->account_no . ", Joining Date: " . $this->joining_date . "\n";
    }
}


class teach_sal extends teach_account
 {
    protected $basic_pay;
    protected $earnings;
    protected $deduction;

    public function __construct($code, $name, $qualification, $account_no, $joining_date, $basic_pay, $earnings, $deduction)
     {
        parent::__construct($code, $name, $qualification, $account_no, $joining_date);
        $this->basic_pay = $basic_pay;
        $this->earnings = $earnings;
        $this->deduction = $deduction;
    }

    public function displaySalaryDetails() 
    {
        $total_salary = $this->basic_pay + $this->earnings - $this->deduction;
        echo "Basic Pay: " . $this->basic_pay . ", Earnings: " . $this->earnings . ", Deductions: " . $this->deduction . ", Total Salary: " . $total_salary . "\n";
    }
}

function sortTeachers(&$teachers) 
{
    usort($teachers, function($a, $b)
     {
        return strcmp($a->name, $b->name);
    }
    );
}


$teachers = [];

do {
    echo "\nMenu:\n";
    echo "1. Build Master Table\n";
    echo "2. Sort All Entries\n";
    echo "3. Search an Entry\n";
    echo "4. Display Salary of All Teachers\n";
    echo "5. Exit\n";
    $choice = (int)readline("Enter your choice: ");

    switch ($choice) 
    {
        case 1: 


        case 2: 
            sortTeachers($teachers);
            echo "Teachers sorted by name.\n";
            break;

     
    case 3: 
      
    


        case 4: 
            foreach ($teachers as $teacher) 
            {
                echo "\nTeacher: " . $teacher->name . "\n";
                $teacher->displaySalaryDetails();
            }
            break;

        case 5: 
            echo "Exiting the program.\n";
            break;

        default:
            echo "Invalid choice. Please try again.\n";
            break;
    }
} while ($choice != 5);

?>



  

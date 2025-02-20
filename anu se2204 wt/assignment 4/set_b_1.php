<?php

// Base class Account
class Account {
    protected $accno;
    protected $cust_name;

    // Constructor to initialize account number and customer name
    public function __construct($accno, $cust_name) {
        $this->accno = $accno;
        $this->cust_name = $cust_name;
    }

    // Method to display account details
    public function displayAccountDetails() {
        echo "Account No: " . $this->accno . "\n";
        echo "Customer Name: " . $this->cust_name . "\n";
    }
}

// Derived class Saving_Acc from Account
class Saving_Acc extends Account {
    private $balance;
    private $min_amount;

    // Constructor to initialize balance and minimum amount
    public function __construct($accno, $cust_name, $balance, $min_amount) {
        parent::__construct($accno, $cust_name);
        $this->balance = $balance;
        $this->min_amount = $min_amount;
    }

    // Method to display saving account details
    public function displaySavingDetails() {
        $this->displayAccountDetails();
        echo "Balance: " . $this->balance . "\n";
        echo "Minimum Amount: " . $this->min_amount . "\n";
    }

    // Method to deposit amount into the saving account
    public function deposit($amount) {
        $this->balance += $amount;
        echo "Deposited: " . $amount . ". New Balance: " . $this->balance . "\n";
    }

    // Method to withdraw amount from the saving account
    public function withdraw($amount) {
        if ($this->balance - $amount >= $this->min_amount) {
            $this->balance -= $amount;
            echo "Withdrew: " . $amount . ". New Balance: " . $this->balance . "\n";
        } else {
            echo "Insufficient balance or below minimum required balance.\n";
        }
    }
}

// Derived class Current_Acc from Account
class Current_Acc extends Account {
    private $balance;
    private $min_amount;

    // Constructor to initialize balance and minimum amount
    public function __construct($accno, $cust_name, $balance, $min_amount) {
        parent::__construct($accno, $cust_name);
        $this->balance = $balance;
        $this->min_amount = $min_amount;
    }

    // Method to display current account details
    public function displayCurrentDetails() {
        $this->displayAccountDetails();
        echo "Balance: " . $this->balance . "\n";
        echo "Minimum Amount: " . $this->min_amount . "\n";
    }

    // Method to deposit amount into the current account
    public function deposit($amount) {
        $this->balance += $amount;
        echo "Deposited: " . $amount . ". New Balance: " . $this->balance . "\n";
    }

    // Method to withdraw amount from the current account
    public function withdraw($amount) {
        if ($this->balance - $amount >= $this->min_amount) {
            $this->balance -= $amount;
            echo "Withdrew: " . $amount . ". New Balance: " . $this->balance . "\n";
        } else {
            echo "Insufficient balance or below minimum required balance.\n";
        }
    }
}

// Main menu-driven program
$accounts = [];

do {
    echo "\nMain Menu:\n";
    echo "1. Saving Account\n";
    echo "2. Current Account\n";
    echo "3. Exit\n";
    $choice = (int)readline("Enter your choice: ");

    switch ($choice) {
        case 1: // Saving Account Menu
            echo "\nSaving Account Menu:\n";
            echo "1. Create Account\n";
            echo "2. Deposit\n";
            echo "3. Withdraw\n";
            echo "4. Back to Main Menu\n";
            $sub_choice = (int)readline("Enter your choice: ");

            switch ($sub_choice) {
                case 1: // Create Saving Account
                    $accno = readline("Enter Account Number: ");
                    $cust_name = readline("Enter Customer Name: ");
                    $balance = (float)readline("Enter Initial Balance: ");
                    $min_amount = (float)readline("Enter Minimum Balance: ");
                    $saving_acc = new Saving_Acc($accno, $cust_name, $balance, $min_amount);
                    array_push($accounts, $saving_acc);
                    echo "Saving Account Created Successfully!\n";
                    break;

                case 2: // Deposit to Saving Account
                    $accno = readline("Enter Account Number to Deposit: ");
                    $amount = (float)readline("Enter Deposit Amount: ");
                    foreach ($accounts as $account) {
                        if ($account instanceof Saving_Acc && $account->accno == $accno) {
                            $account->deposit($amount);
                            break;
                        }
                    }
                    break;

                case 3: // Withdraw from Saving Account
                    $accno = readline("Enter Account Number to Withdraw: ");
                    $amount = (float)readline("Enter Withdrawal Amount: ");
                    foreach ($accounts as $account) {
                        if ($account instanceof Saving_Acc && $account->accno == $accno) {
                            $account->withdraw($amount);
                            break;
                        }
                    }
                    break;

                case 4: // Back to Main Menu
                    break;

                default:
                    echo "Invalid choice. Try again.\n";
                    break;
            }
            break;

        case 2: // Current Account Menu
            echo "\nCurrent Account Menu:\n";
            echo "1. Create Account\n";
            echo "2. Deposit\n";
            echo "3. Withdraw\n";
            echo "4. Back to Main Menu\n";
            $sub_choice = (int)readline("Enter your choice: ");

            switch ($sub_choice) {
                case 1: // Create Current Account
                    $accno = readline("Enter Account Number: ");
                    $cust_name = readline("Enter Customer Name: ");
                    $balance = (float)readline("Enter Initial Balance: ");
                    $min_amount = (float)readline("Enter Minimum Balance: ");
                    $current_acc = new Current_Acc($accno, $cust_name, $balance, $min_amount);
                    array_push($accounts, $current_acc);
                    echo "Current Account Created Successfully!\n";
                    break;

                case 2: // Deposit to Current Account
                    $accno = readline("Enter Account Number to Deposit: ");
                    $amount = (float)readline("Enter Deposit Amount: ");
                    foreach ($accounts as $account) {
                        if ($account instanceof Current_Acc && $account->accno == $accno) {
                            $account->deposit($amount);
                            break;
                        }
                    }
                    break;

                case 3: // Withdraw from Current Account
                    $accno = readline("Enter Account Number to Withdraw: ");
                    $amount = (float)readline("Enter Withdrawal Amount: ");
                    foreach ($accounts as $account) {
                        if ($account instanceof Current_Acc && $account->accno == $accno) {
                            $account->withdraw($amount);
                            break;
                        }
                    }
                    break;

                case 4: // Back to Main Menu
                    break;

                default:
                    echo "Invalid choice. Try again.\n";
                    break;
            }
            break;

        case 3: // Exit
            echo "Exiting the program.\n";
            break;

        default:
            echo "Invalid choice. Try again.\n";
            break;
    }
} while ($choice != 3);

?>


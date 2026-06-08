<?php
echo "example of encapsulation\n";
class employee {
    // private data members
    private $salary;
    private $name;

    // constructor
    function __construct($s, $n) {
        $this->salary = $s;
        $this->name = $n;
    }

    // public method to set salary
    public function setsalary($s) {
        if($s > 0) {
            $this->salary = $s;
        } else {
            echo "invalid salary\n";
        }
    }

    // public method to get salary
    public function getsalary() {
        return $this->salary;
    }

    // public method to display details
    public function display() {
        echo "name: $this->name\n";
        echo "salary: $this->salary\n";
    }
}

// creating object
$e1 = new employee(45000, "bashanta");

// accessing data through methods
$e1->display();
$e1->setsalary(80000);

$e1->display();
echo "\n name:bashanta pokharel \n roll no:62(A)\n ";
?>

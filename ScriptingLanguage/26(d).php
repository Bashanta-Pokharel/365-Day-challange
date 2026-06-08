<?php
// parent class
class person {
    public $name;
    public $address;

    // parent constructor
    public function __construct($n, $a) {
        $this->name = $n;
        $this->address = $a;
        echo "parent constructor received  name: $n, address: $a\n";
    }

    public function display() {
        echo "name: $this->name\n";
        echo "address: $this->address\n";
    }
}

// child class
class student extends person {
    public $salary;

    // child constructor
    public function __construct($n, $a, $s) {
        // call parent constructor
        parent::__construct($n, $a);
        $this->salary = $s;
        echo "child constructor received  salary: $s\n";
    }

    public function displaystudent() {
        $this->display(); // call parent display method
        echo "salary: $this->salary\n";
    }
}

// create object of child class
$s1 = new student("bashanta pokharel", "kathmandu", 62000);
echo "final student details:\n";
$s1->displaystudent();
echo "\n name:bashanta pokharel \n roll no:62(A)\n";
?>


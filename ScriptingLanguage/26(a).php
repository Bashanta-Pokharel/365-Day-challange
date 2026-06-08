<?php
class employee {
    // 3 member variables
    public $salary;
    public $id;
    public $name;
    function __construct($s, $i, $n) {
        $this->salary = $s;
        $this->id = $i;
        $this->name = $n;
    }

    function display() {
        echo "name: $this->name\n";
        echo "id: $this->id\n";
        echo "salary: $this->salary\n";
    }

    function updatesalary($newsalary) {
        $this->salary = $newsalary;
    }

    function updateid($newid) {
        $this->id = $newid;
    }

    function updatename($newname) {
        $this->name = $newname;
    }
}


$e1 = new employee(45000, 45, "bashanta pokharel");
$e2 = new employee(52000, 32, "sweekriti karki");
echo "example of class and object\n";


echo "employee 1 details\n";
$e1->display();

$e1->updatesalary(50000);
$e1->updatename("saksham pokharel.");
echo "after update\n";
$e1->display();

echo "employee 2 details\n";
$e2->display();

$e2->updateid(40);
echo "after update\n";
$e2->display();
echo "\n name:bashanta pokharel \n roll no:62(A)\n";
?>

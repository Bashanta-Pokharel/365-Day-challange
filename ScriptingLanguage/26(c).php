<?php
// base class: person
class person {
    public $name;
    public $address;

    public function setname($n) {
        $this->name = $n;
    }

    public function setaddress($a) {
        $this->address = $a;
    }

    public function getname() {
        return $this->name;
    }

    public function getaddress() {
        return $this->address;
    }
}

// single inheritance (person -> student)
class student extends person {
    public $roll;

    public function setroll($r) {
        $this->roll = $r;
    }

    public function getroll() {
        return $this->roll;
    }
}

// multilevel inheritance (person -> student -> campus)
class campus extends student {
    public $campusname;

    public function setcampusname($c) {
        $this->campusname = $c;
    }

    public function getcampusname() {
        return $this->campusname;
    }
}

// hierarchical inheritance (person -> employee)
class employee extends person {
    public $salary;

    public function setsalary($s) {
        $this->salary = $s;
    }

    public function getsalary() {
        return $this->salary;
    }
}

// --- testing the inheritance ---
echo "single inheritance(person)\n";
$p1 = new person();
$p1->setaddress("kathmandu, jorpati");
$p1->setname("bashanta pokharel");
echo "name = " . $p1->getname() . "\naddress = " . $p1->getaddress() . "\n";

$c1 = new campus();
$c1->setcampusname("ratna rajya laxmi campus");
$c1->setaddress("kathmandu, pradashani marg");
$c1->setname("bashanta pokharel");
$c1->setroll(62);

echo "\nmultilevel inheritance(person with campus)\n";
echo "college name = " . $c1->getcampusname() . "\n";
echo "name = " . $c1->getname() . "\n";
echo "roll = " . $c1->getroll() . "\n";
echo "address = " . $c1->getaddress() . "\n";

echo "\nhierarchical inheritance(person as employee)\n";
$e1 = new employee();
$e1->setname("bashanta pokharel");
$e1->setaddress("kathmandu, baneshwor");
$e1->setsalary(50000000);
echo "name = " . $e1->getname() . "\n";
echo "address = " . $e1->getaddress() . "\n";
echo "salary = " . $e1->getsalary() . "\n";
?>
\n name:bashanta pokharel \n roll no:62(A)\n
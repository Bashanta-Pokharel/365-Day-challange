<?php
echo "example of dynamic polymorphism\n";

class shape {
    public function area() {
        return 0;
    }
}

class rectangle extends shape {
    private $length;
    private $width;
    
    public function __construct($l, $w) {
        $this->length = $l;
        $this->width = $w;
    }
    
    public function area() {
        return $this->length * $this->width;
    }
}

class Circle extends shape {
    private $radius;
    
    public function __construct($r) {
        $this->radius = $r;
    }
    
    public function area() {
        return 3.14 * $this->radius * $this->radius;
    }
}

// Dynamic polymorphism objects
$shape1 = new rectangle(5, 10);
$shape2 = new Circle(7);
$shape3 = new shape();

// Calling area() without foreach
echo "area: " . $shape1->area() . "\n";
echo "area: " . $shape2->area() . "\n";
echo "area: " . $shape3->area() . "\n";
echo " name:bashanta pokharel \n roll no:62(A)";

?>

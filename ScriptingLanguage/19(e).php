<!doctype html>
<html lang="en">

<head>
    <meta charset="utf-8">
    <title>19(e)</title>
</head>

<body>
    <h2>array functions demo</h2>
 
    <?php
    // sample array
    $friends = array("bashanta", "sujan", "ram", "shyam", "sweekriti", "bipina");
    echo "original array";
    foreach ($friends as $f) {
        echo "- $f ";
    }

    echo "<h3>add  remove elements</h3>";

    // array_push
    array_push($friends, "sweekar"); 
    echo "after array_push('sweekar'): ";
    print_r($friends);
    echo "<br><br>";

    // array_unshift
    array_unshift($friends, "susmita"); 
    echo "after array_unshift('susmita') at beginning: ";
    print_r($friends);
    echo "<br><br>";

    // array_shift
    array_shift($friends); 
    echo "after array_shift removed first element: ";
    print_r($friends);
    echo "<br><br>";

    


    echo "<h3>sorting arrays</h3>";
    $numbers = array(24, 45, 55, 17, 19, 18);
    echo "original numbers array: ";
    foreach ($numbers as $n) {
        echo "- $n  ";
    }
    echo "<br>";

    $copy = $numbers;
    sort($copy);
    echo "sort in ascending numbers: ";
    print_r($copy);
    echo "<br>";

    $copy = $numbers;
    rsort($copy);
    echo "rsort in descending numbers: ";
    print_r($copy);
    echo "<br><br>";

    $ages = array("bashanta" => 19, "sweekriti" => 17, "sweekar" => 16);
    asort($ages);
    echo "asort in by values ascending: ";
    print_r($ages);
    echo "<br>";

    arsort($ages);
    echo "arsort in by values descending: ";
    print_r($ages);
    echo "<br>";

    ksort($ages);
    echo "ksort in by keys ascending : ";
    print_r($ages);
    echo "<br>";

    krsort($ages);
    echo "krsort in by keys descending: ";
    print_r($ages);
    echo "<br><br>";
    // array_search
    echo "index of 'sweekriti' using array_search: " . array_search("sweekriti", $friends);
    echo "<br><br>";


    echo "<h3>pointer functions</h3>";
    $district = array("kathmandu", "lalitpur", "bhaktapur", "pokhara", "chitwan", "solukhumbu");

    echo "district array:";
    foreach ($district as $f) {
        echo "- $f ";
    }
    echo "<br>";

    echo "using current: " . current($district) . "<br>";
    echo "using next: " . next($district) . "<br>";
    echo "using pos: " . pos($district) . "<br>";
    echo "using end: " . end($district) . "<br>";
    echo "using prev: " . prev($district) . "<br>";
    echo "using reset: " . reset($district) . "<br><br>";


    echo "<h3>shuffle and reverse</h3>";
    $nums = array(1, 2, 3, 4, 5);

    shuffle($nums);
    echo "shuffle in  random order: ";
    print_r($nums);
    echo "<br>";

    $rev = array_reverse($nums);
    echo "array_reverse: ";
    print_r($rev);
    ?>
    <br><br>name: bashanta pokharel <br>roll no: 62 <br>sec: a
</body>

</html>
<!doctype html>
<html lang="en">
<head>
    <meta charset="utf-8">
    <title>19(c)</title>
</head>
<body>
    <h2>php arrays demo</h2>

    <?php
    $names = array("bashanta", "sujan", "ram", "shyam","sweekriti","bipina");
    echo "<h3>indexed array names</h3>";
    echo "using var_dump()==<br>";
    var_dump($names);
    echo "<br><br>using print_r()==<br>";
    print_r($names);
    echo "<br><br>";

    // 2. associative array
    $age = array("Bashanta"=>19, "sweekriti"=>17, "shyam"=>28,"sweekar"=>16,"bipina"=>18);
    echo "<h3>associative array (age)</h3>";
    echo "using var_dump()==<br>";
    var_dump($age);
    echo "<br><br>using print_r()==<br>";
    print_r($age);
    echo "<br><br>";

    // 3. multidimensional array
    $student = array(
        array("name"=>"bashanta", "age"=>19),
        array("name"=>"sweekriti", "age"=>17),
        array("name"=>"sweekar", "age"=>16),
        array("name"=>"shyam", "age"=>18)
    );
    echo "<h3>multidimensional array (student)</h3>";
    echo "using var_dump()==<br>";
    var_dump($student);
    echo "<br><br>using print_r()==<br>";
    print_r($student);
    echo "<br><br>name== bashanta pokharel <br>roll no== 62 <br> sec== a";
    ?>
</body>
</html>

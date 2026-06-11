<!doctype html>
<html lang="en">

<head>
    <meta charset="utf-8">
    <title>19(a )</title>
</head>

<body>
    <h2>multiplication table of greatest number </h2>
    <form method="post">
        enter first number: <input type="text" name="num1" required><br><br>
        enter second number: <input type="text" name="num2" required><br><br>
        <input type="submit" value="show table">
    </form>
</body>

</html>

<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $num1 = $_POST['num1'];
    $num2 = $_POST['num2'];
    echo "first number: " . $num1 . "<br>";
    echo "second number: " . $num2 . "<br>";
    // find greatest number
    if ($num1 > $num2) {
        $greatest = $num1;
    } else {
        $greatest = $num2;
    }
    echo "greatest number is: " . $greatest ;


    echo "<h3>multiplication table of $greatest</h3>";
    for ($i = 1; $i <= 10; $i++) {
        echo $greatest . " x " . $i . " = " . ($greatest * $i) . "<br>";
    }

    echo "<br><br>name: bashanta pokharel <br>roll no: 62 <br>sec: a";
}
?>
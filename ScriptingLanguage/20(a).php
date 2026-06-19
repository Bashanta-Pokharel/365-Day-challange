<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>19(a)</title>
</head>
<body>
        <h1>php age checking</h1>
        <form action="" method="post">
            enter your age: <input type="number" name="age1" required>
            enter second age: <input type="number" name="age2" required>
            <input type="submit" value="Submit">
        </form>
        
    
</body>
</html>

<?php
function agevalue($age) {
    if ($age < 18) {
        echo " is  restricted";
    } else {
        echo " is welcome";
    }
}

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $age1 = $_POST['age1'];
    $age2 = $_POST['age2'];

    echo "first Age= ".$age1;
    agevalue($age1);
    echo "<br>";

    echo "second Age: ".$age2;
    agevalue($age2);
    echo "<br>";
    
}
echo "<br>name:bashanta pokharel <br>roll no: 62 <br> sec:A";
?>



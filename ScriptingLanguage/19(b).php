<!doctype html>
<html lang="en">

<head>
    <meta charset="utf-8">
    <title>19(b)</title>
</head>

<body>
    <h2>calculation using combo box</h2>
    <form method="post">
        enter first number: <input type="text" name="num1" required><br><br>
        enter second number: <input type="text" name="num2" required><br><br>
        choose operator:
        <select name="operator" required>
            <option value="+">+</option>
            <option value="-">-</option>
            <option value="*">*</option>
            <option value="/">/</option>
            <option value="%">%</option>
        </select><br><br>
        <input type="submit" value="calculate">
    </form>

    <?php
    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        $num1 = $_POST['num1'];
        $num2 = $_POST['num2'];
        $operator = $_POST['operator'];
        $result = "";

        switch ($operator) {
            case '+':
                $result = $num1 + $num2;
                break;
            case '-':
                $result = $num1 - $num2;
                break;
            case '*':
                $result = $num1 * $num2;
                break;
            case '/':
                $result = $num1 / $num2;
                break;
            case '%':
                    $result = $num1 % $num2;
               
                break;
            default:
                $result = "invalid operator";
        }

        echo "result: $result";
        echo "<br><br>name: bashanta pokharel <br>roll no: 62 <br>sec: a";
    }
    ?>
</body>

</html>

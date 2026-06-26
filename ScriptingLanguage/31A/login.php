<?php
session_start();

// if remember me cookie exists, auto fill username
$saveuserpass = "";
if (isset($_COOKIE["remember_user"])) {
    $saveuserpass = $_COOKIE["remember_user"];
}
?>
<!doctype html>
<html>
<head>
    <title>login page</title>
</head>
<body>

<h2>login form</h2>

<form action="loginprocess.php" method="post">

    <label>username:</label>
    <input type="text" name="username" value="<?php echo $saveuserpass; ?>" required><br><br>

    <label>password:</label>
    <input type="password" name="password" required><br><br>

    <input type="checkbox" name="remember" 
        <?php if($saveuserpass != "") echo "checked"; ?>>
    remember me<br><br>

    <button type="submit">login</button>

</form>
<p>name:bashanta pokharel</p>
<p>roll no:62(A)</p>

</body>
</html>

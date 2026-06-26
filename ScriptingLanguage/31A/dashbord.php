<?php
session_start();

// if no session → force login page
if (!isset($_SESSION["user"])) {
    header("location: login.php");
    exit();
}
?>
<!doctype html>
<html>
<head>
    <title>dashboard</title>
</head>
<body>

<h2>welcome</h2>
<p>you are successfully logged in.</p>

<a href="logout.php">logout</a>
<p>name:bashanta pokharel</p>
<p>roll no:62(A)</p>

</body>
</html>

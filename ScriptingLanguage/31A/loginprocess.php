<?php
session_start();

// get form values
$username = $_POST["username"];
$password = $_POST["password"];

// simple fixed login for demonstration
$userreal = "admin";
$passreal = "12345";

if ($username == $userreal && $password == $passreal) {

    // set session variable
    $_SESSION["user"] = $username;

    // if remember me checked, set cookie for 7 days
    if (isset($_POST["remember"])) {
        setcookie("remember_user", $username, time() + (7 * 24 * 60 * 60));
    } else {
        // clear cookie
        setcookie("remember_user", "", time() - 3600);
    }

    // redirect to dashboard
    header("location: dashbord.php");
    exit();

} else {
    echo "<h3>username password wrong</h3>";
    echo "<a href='login.php'>go back</a>";
}
?>

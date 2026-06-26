<?php
session_start();

// destroy all sessions
session_unset();
session_destroy();
setcookie("remember_user", "", time() - 3600);

echo "<h3>you have been logged out</h3>";
echo "<a href='login.php'>Login Again</a>";
echo "<p>name:bashanta pokharel</p>";
echo "<p>roll no:62(A)</p>";
?>

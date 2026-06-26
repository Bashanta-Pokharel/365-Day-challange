<?php 
    include 'cruddatabase.php';

    $id = $_GET["id"];

    // safer query using prepared statement
    $selectsql = "select * from student where id = ?";
    $stmt = mysqli_prepare($con, $selectsql);
    mysqli_stmt_bind_param($stmt, "i", $id);
    mysqli_stmt_execute($stmt);
    $result = mysqli_stmt_get_result($stmt);

    if ($result) {
        while ($row = mysqli_fetch_assoc($result)) {
?>
<!doctype html>
<html lang="en">
<head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>student management system</title>
</head>
<body>

    <?php include 'crudheader.php'; ?>

    <a href="crud.php">home page</a>

    <br><br>

    <form action="crud.php" method="post">

        <label>student id: </label>
        <input type="number" name="id" id="id" value="<?php echo $row['id']; ?>" readonly><br>

        <label>student name: </label>
        <input type="text" name="name" id="name" value="<?php echo $row['name']; ?>" readonly><br>

        <label>address: </label>
        <input type="text" name="address" id="address" value="<?php echo $row['address']; ?>" readonly><br>

        <label>grade:</label>
        <input type="number" name="grade" id="grade" value="<?php echo $row['grade']; ?>" readonly><br>

        <label>marks:</label>
        <input type="number" name="marks" id="marks" value="<?php echo $row['marks']; ?>" readonly><br>

    </form>
    <p>name:bashanta pokharel</p>
    <p>roll no:62(A)</p>

</body>
</html>

<?php
        }
    }
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>studentdetails</title>
</head>
<body>


     <?php include 'crudheader.php';?>

    <a href="crud.php">Home Page</a>

    <h3>Add new details</h3>
    <form action="crud.php" method="post">

        <label >student id: </label>
        <input type="text" name="id" id="id"><br>

        <label >student Name: </label>
        <input type="text" name="name" id="name"><br>

        <label >adderss: </label>
        <input type="text" name="address" id="address"><br>
        <label >grade:</label>
        <input type="number" name="grade" id="grade"><br>
        <label >Marks:</label>
        <input type="number" name="marks" id="pmarks"><br>

        <input type="submit" name="adddetails" value="Add New ">
        <input type="reset">
    </form>
    <p>name:bashanta pokharel</p>
    <p>roll no:62(A)</p>

    
</body>
</html>
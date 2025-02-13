<!DOCTYPE html>
<html>
<head>
    <title>Number Test using Ternary Operator</title>
</head>
<body>

<h1>Test if a Number is Greater Than 30, 20, or 10</h1>

<form action="" method="post">
    <label for="number">Enter a number:</label><br>
    <input type="number" name="number" required><br><br>
    <input type="submit" value="Check Number">
</form>

<?php
if ($_SERVER["REQUEST_METHOD"] == "POST")
 {
    $number = $_POST['number'];

    
    $result = ($number > 30) ? "The number is greater than 30." :
             (($number > 20) ? "The number is greater than 20 but less than or equal to 30." :
             (($number > 10) ? "The number is greater than 10 but less than or equal to 20." :
             "The number is 10 or less."));

    echo "<h2>Result:</h2>";
    echo "<p>$result</p>";
}
?>

</body>
</html>

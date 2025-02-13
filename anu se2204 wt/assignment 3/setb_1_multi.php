<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>PHP Multidimensional Array Operations</title>
</head>
<body>

<?php

$array = [
    ['John', 'Doe', 25],
    ['Jane', 'Smith', 30],
    ['Alice', 'Johnson', 22]
 ];


echo "<h2>Original Array:</h2>";
echo "<pre>";
print_r($array);
echo "</pre>";


echo "<h2>Specific Element (First name of second person):</h2>";
echo $array[1][0] . "<br>"; 


unset($array[1]);


echo "<h2>Array After Deletion of Second Element:</h2>";
echo "<pre>";
print_r($array);
echo "</pre>";
?>

</body>
</html>



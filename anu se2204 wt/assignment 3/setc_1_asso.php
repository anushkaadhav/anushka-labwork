<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Associative Arrays Operations</title>
</head>
<body>

<h1>Associative Arrays Operations</h1>

<form method="POST">
    <label for="array1">Enter first associative array (comma-separated key:value pairs): </label><br>
    <input type="text" id="array1" name="array1" placeholder="key1:value1,key2:value2"><br><br>

    <label for="array2">Enter second associative array (comma-separated key:value pairs): </label><br>
    <input type="text" id="array2" name="array2" placeholder="key1:value1,key2:value2"><br><br>

    <label for="operation">Choose operation:</label><br>
    <select name="operation" id="operation">
        <option value="merge">Merge</option>
        <option value="intersection">Intersection</option>
        <option value="union">Union</option>
        <option value="set_difference">Set Difference</option>
    </select><br><br>

    <input type="submit" name="submit" value="Perform Operation">
</form>

<?php
if (isset($_POST['submit'])) 
{
    
    $array1 = stringToAssociativeArray($_POST['array1']);
    $array2 = stringToAssociativeArray($_POST['array2']);
    $operation = $_POST['operation'];

    
    switch ($operation)
    {
        case 'merge':
            echo "<h3>Merge of Array1 and Array2:</h3>";
            print_r(array_merge($array1, $array2));
            break;

        case 'intersection':
            echo "<h3>Intersection of Array1 and Array2:</h3>";
            print_r(array_intersect_assoc($array1, $array2));
            break;

        case 'union':
            echo "<h3>Union of Array1 and Array2:</h3>";
            print_r(array_merge($array1, $array2)); 
            break;

        case 'set_difference':
            echo "<h3>Set Difference (Array1 - Array2):</h3>";
            print_r(array_diff_assoc($array1, $array2));
            break;

        default:
            echo "<h3>Invalid Operation</h3>";
    }
}


function stringToAssociativeArray($str)
 {
    $arr = [];
    $pairs = explode(',', $str);
    foreach ($pairs as $pair) {
        list($key, $value) = explode(':', $pair);
        $arr[trim($key)] = trim($value);
    }
    return $arr;
}
?>

</body>
</html>


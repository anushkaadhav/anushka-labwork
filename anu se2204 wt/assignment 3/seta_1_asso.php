<!DOCTYPE html>
<html lang="en">
<head>
    <title>A3Seta1</title>
</head>
<body>
    <h1>array</h1>
    <form action="seta_1_asso.php" method="post">
    
         <label for="input">Enter keys and values (key1:value1, key2:value2):</label><br>
    <input type="text" id="input" name="data" placeholder="key1:value1, key2:value2"><br>

        <br><br>
        
        
        <label>Select Operation:</label><br>
        
          <select id="array" name="array" required>  
                <option value="display">display</option>  
                <option value="displaysize">displaysize</option>  
              
            </select>

        <input type="submit" value="Calculate" name="submit">
    </form>
</body>
</html>



<?php

 $inputData = $_POST['data'];

    $pairs = explode(",", $inputData);
    $array1 = [];

    foreach ($pairs as $pair) 
    {
        list($key, $value) = explode(":", $pair);
        $array1[trim($key)] = trim($value);
    }
 if($_POST['array']=='display')
 {
 display($array1);
 }
 
 if($_POST['array']=='displaysize')
{
 displaysize($array1);
 }
 
function display($array1) 
{
    if (count($array1) > 0) 
    {
        echo "Associative Array (Key-Value Pairs):\n";
        foreach ($array1 as $key => $value)
         {
            echo "Key: $key, Value: $value\n";
         }
     } 
    else 
    {
        echo "Associative Array is empty.\n";
    }
}


function displaySize($array1)
 {
    echo "Size of the associative array: " . count($array1) . "\n";
    }
?>

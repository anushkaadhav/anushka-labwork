<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Stack Operations - Insert and Delete</title>
</head>
<body>

<h2>Stack Operations Menu</h2>

<?php

$stack = [4,5];

if ($_SERVER['REQUEST_METHOD'] === 'POST')
 {
    $operation = $_POST['operation'];
    $element = isset($_POST['element']) ? $_POST['element'] : null;

    switch ($operation) 
    {
      case 'insert':
            if ($element !== null && !empty($element)) 
            {
                array_push($stack, $element);
                echo "<p>'$element' inserted into the stack.</p>";
            } 
            else
             {
                echo "<p>Please enter an element to insert.</p>";
            }
            break;

    case 'delete':
            if (!empty($stack)) 
            {
                $deletedElement = array_pop($stack);
                echo "<p>'$deletedElement' deleted from the stack.</p>";
            } 
            else
             {
                echo "<p>Stack is empty. Cannot delete an element.</p>";
            }
            break;

     default:
            echo "<p>Invalid operation. Please select a valid option.</p>";
            break;
    }
}


echo "<h3>Current Stack:</h3>";
echo "<pre>";
print_r($stack);
echo "</pre>";
?>

<form method="POST">
    <h3>Select an operation:</h3>
    
    <label>
        <input type="radio" name="operation" value="insert"> Insert Element
    </label><br>

    <label>
        <input type="radio" name="operation" value="delete"> Delete Element
    </label><br><br>

    <!-- Input field for inserting an element -->
    <label for="element">Enter Element (for Insert):</label>
    <input type="text" name="element" id="element" placeholder="Enter element"><br><br>

    <button type="submit">Submit</button>
</form>

</body>
</html>


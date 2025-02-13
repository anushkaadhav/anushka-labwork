<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Queue Operations - Insert, Delete, Display</title>
</head>
<body>

<h2>Queue Operations Menu</h2>

<?php

$queue = [1,2,3];


if ($_SERVER['REQUEST_METHOD'] === 'POST')
 {
    $operation = $_POST['operation'];
    $element = isset($_POST['element']) ? $_POST['element'] : null;

    switch ($operation)
     {
        case 'insert':
            if ($element !== null && !empty($element))
            {
                array_shift($queue, $element);  
                echo "<p>'$element' inserted into the queue.</p>";
            }
             else
              {
                echo "<p>Please enter an element to insert.</p>";
            }
            break;

        case 'delete':
            if (!empty($queue)) 
            {
                $deletedElement = array_unshift($queue);  
                echo "<p>'$deletedElement' deleted from the queue.</p>";
            }
             else 
            {
                echo "<p>Queue is empty. Cannot delete an element.</p>";
            }
            break;

        case 'display':
            if (empty($queue)) 
            {
                echo "<p>The queue is empty.</p>";
            } 
            else 
            {
               foreach($queue as $value)
               {
                   echo $value." ";
                   }
               //echo "<p>Current Queue:</p>";
              //  echo "<pre>";
               // print_r($queue);
               // echo "</pre>";//
            }
            break;

        default:
            echo "<p>Invalid operation. Please select a valid option.</p>";
            break;
    }
}
?>


<form method="POST">
    <h3>Select an operation:</h3>
    
    <label>
        <input type="radio" name="operation" value="insert"> Insert Element (Enqueue)
    </label><br>

    <label>
        <input type="radio" name="operation" value="delete"> Delete Element (Dequeue)
    </label><br>

    <label>
        <input type="radio" name="operation" value="display"> Display Queue
    </label><br><br>

    
    <label for="element">Enter Element (for Insert):</label>
    <input type="text" name="element" id="element" placeholder="Enter element"><br><br>

    <button type="submit">Submit</button>
</form>

</body>
</html>


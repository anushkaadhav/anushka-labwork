<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Sort Multiple Arrays</title>
</head>
<body>
    <h2>Sort Multiple Arrays at a Glance</h2>
    <form method="POST">
        <label for="sortOrder">Choose Sort Order:</label><br><br>
        <select name="sortOrder" id="sortOrder">
            <option value="asc">Ascending Order</option>
            <option value="desc">Descending Order</option>
        </select><br><br>

        <label for="arraysToSort">Choose Arrays to Sort:</label><br><br>
        <input type="checkbox" name="arrays[]" value="array1"> Array 1<br>
        <input type="checkbox" name="arrays[]" value="array2"> Array 2<br>
        <input type="checkbox" name="arrays[]" value="array3"> Array 3<br><br>

        <input type="submit" value="Sort Arrays">
    </form>

    <?php
        
        $array1 = array("a" => 10, "b" => 25, "c" => 15, "d" => 30);
        $array2 = array("x" => 5, "y" => 50, "z" => 20);
        $array3 = array("p" => 100, "q" => 2, "r" => 40, "s" => 30);

       
        function sortArray(&$array, $sortOrder)
        {
            if ($sortOrder == "asc")
             {
                asort($array);  
            } 
            else 
            {
                arsort($array); 
            }
        }

       
        if ($_SERVER['REQUEST_METHOD'] == 'POST')
         {
            
            $sortOrder = $_POST['sortOrder'];

            
            $arraysToSort = isset($_POST['arrays']) ? $_POST['arrays'] : [];

            
            echo "<h3>Original Arrays:</h3><pre>";
            echo "Array 1: ";
            print_r($array1);
            echo "Array 2: ";
            print_r($array2);
            echo "Array 3: ";
            print_r($array3);
            echo "</pre>";

            
            echo "<h3>Sorted Arrays:</h3><pre>";
            if (in_array("array1", $arraysToSort))
             {
                sortArray($array1, $sortOrder);
                echo "Array 1: ";
                print_r($array1);
            }

            if (in_array("array2", $arraysToSort)) 
            {
                sortArray($array2, $sortOrder);
                echo "Array 2: ";
                print_r($array2);
            }

            if (in_array("array3", $arraysToSort)) 
            {
                sortArray($array3, $sortOrder);
                echo "Array 3: ";
                print_r($array3);
            }
            echo "</pre>";
        }
    ?>
</body>
</html>


<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Associative Array Operations</title>
</head>
<body>
    <h1>Associative Array Operations</h1>
    
    <form method="post">
        <label for="operation">Select Operation:</label>
        <select name="operation" id="operation">
            <option value="sort_asc">Sort by Values (Ascending Order)</option>
            <option value="sort_desc">Sort by Values (Descending Order)</option>
            <option value="sort_no_change">Sort by Values (Without Changing Keys)</option>
            <option value="filter_odd">Filter Odd Elements</option>
        </select><br><br>

        <input type="submit" value="Perform Operation">
    </form>

    <?php
      
        $arr = array(
            "a" => 10,
            "b" => 3,
            "c" => 15,
            "d" => 8,
            "e" => 25,
            "f" => 7
        );

       
        function displayArray($array) 
        {
            echo "<pre>";
            print_r($array);
            echo "</pre>";
        }

       
        if ($_SERVER["REQUEST_METHOD"] == "POST") {
            $operation = $_POST["operation"];
            
            switch($operation) 
            {
                case "sort_asc":
                    
                    asort($arr);
                    echo "<h2>Array Sorted by Values (Ascending Order):</h2>";
                    displayArray($arr);
                    break;

                case "sort_desc":
                    
                    arsort($arr);
                    echo "<h2>Array Sorted by Values (Descending Order):</h2>";
                    displayArray($arr);
                    break;

                case "sort_no_change":
                    
                    $sortedArr = $arr;
                    asort($sortedArr);
                    echo "<h2>Array Sorted by Values (Without Changing Keys):</h2>";
                    displayArray($sortedArr);
                    break;

                case "filter_odd":
                    
                    $filteredArr = array_filter($arr, function($value) 
                    {
                        return $value % 2 == 0; 
                    });
                    echo "<h2>Array After Filtering Odd Elements:</h2>";
                    displayArray($filteredArr);
                    break;

                default:
                    echo "<h2>Invalid Operation!</h2>";
            }
        }
    ?>

</body>
</html>


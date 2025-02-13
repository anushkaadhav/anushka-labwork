<?php

    $myarray = array('1','2','3','4','5','6');

    echo "Original Array: ";
    
    foreach ($myarray as $x)
    {
        echo ($x). ' ';
    }
    
    echo "<br><br>Reversed Array: ";
    foreach (array_reverse($myarray) as $x)
    {
        echo ($x). ' ';
    }
?>

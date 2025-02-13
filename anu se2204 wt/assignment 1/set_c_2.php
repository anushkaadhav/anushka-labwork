<!DOCTYPE html>
<html>
<head>
    <title>Display Webpage Source Code</title>
</head>
<body>

<h1>Webpage Source Code Viewer</h1>

<form action="" method="post">
    <label for="url">Enter URL of the webpage:</label><br>
    <input type="text" name="url" placeholder="e.g., https://www.example.com" required><br><br>
    <input type="submit" value="Get Source Code">
</form>

<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $url = $_POST['url'];

  
    if (filter_var($url, FILTER_VALIDATE_URL)) {
    
        $sourceCode = file_get_contents($url);

    
        if ($sourceCode !== false) {
            echo "<h2>Source Code of $url:</h2>";
            echo "<pre>" . htmlspecialchars($sourceCode) . "</pre>";
        } else {
            echo "Could not retrieve the source code from the provided URL.";
        }
    } else {
        echo "Please enter a valid URL.";
    }
}
?>

</body>
</html>

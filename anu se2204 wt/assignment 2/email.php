<!DOCTYPE html>
<html lang="en">
<head>
    <title>A2SetC1</title>
</head>
<body>
    <h1>Email Validation</h1>
    <form action="email.php" method="post">
    
        <label for="email">Enter your email:</label>
        <input type="text" id="email" name="email" required>
        <button type="submit">Submit</button>
    </form>
</body>
</html>
<?php
     $my_email=$_POST['email'];
     if(preg_match("/^[a-zA-Z0-9._-]+@[a-zA-Z0-9-]+\.[a-zA-Z.]{2,6}$/", $my_email))
     {
        echo("$my_email is valid");
      }
      else
      {
         echo("$my_email is not vaild");
       }
  ?>

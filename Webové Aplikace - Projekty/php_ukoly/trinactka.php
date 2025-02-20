<!doctype html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport"
          content="width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>13</title>
</head>
<body>
<fieldset>
    <legend>Login</legend>
    <form action="trinactka.php" method="post">
        <label>Username: </label><input type="text" name="username" placeholder="Bomboclad_23">
        <label>Password: </label><input type="password" name="password">
        <input type="submit" name="login">
    </form>
</fieldset>

<?php
    if($_POST){
        if(isset($_POST['login'])){
            $username = $_POST['username'];
            $password = $_POST['password'];

            $username1 = "Jano";
            $password1 = "meowmeow";

            if ($username == $username1 && $password == $password1) {
                echo $username . " was successfully logged in";
            }
            else{
                echo "Access denied";
            }
        }
    }
?>

</body>
</html>


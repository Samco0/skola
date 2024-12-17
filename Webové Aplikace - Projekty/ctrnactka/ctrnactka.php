<!doctype html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport"
          content="width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>Riddle</title>
</head>
<body>
    <h3>Riddle</h3>
    <p>I can fly without wings,</p>
    <p>I can cry without eyes,</p>
    <p>Whenever I go, darkness flies,</p>
    <form method="post" action="ctrnactka.php">
        <label>What am I? </label><input type="text" name="answer">
        <input type="submit" name="riddle">
    </form>
</body>

<?php
    if($_POST){
        if (isset($_POST["riddle"])){
            $userAnswer = $_POST["answer"];
            $corrAnswer = "cloud";

            if ($userAnswer == $corrAnswer){
                header("Location: correctAns.php");
            }
            else{
                header("Location: wrongAns.php");
            }

        }
    }
?>
</html>
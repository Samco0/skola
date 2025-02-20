<!doctype html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport"
          content="width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>12</title>
</head>
<body>
<fieldset>
    <legend>Sum</legend>
    <form action="dvanact.php" method="get">
        <label>First number: </label><input type="number" name="firstNum">
        <label>Second number: </label><input type="number" name="secondNum">
        <input type="submit" name="sum" value="Sum">
    </form>
    <?php
        if($_GET){
            if(isset($_GET["sum"])){
                $firstNum = $_GET["firstNum"];
                $secondNum = $_GET["secondNum"];

                $sum = $firstNum + $secondNum;
                echo "Sum of your numbers " . $firstNum . " and " . $secondNum . " is: " . $sum;
            }
            else echo "Button was not pressed";
        }
    ?>
</fieldset>
</body>
</html>
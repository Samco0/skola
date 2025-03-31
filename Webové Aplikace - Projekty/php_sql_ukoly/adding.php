<?php
    include_once "join.php";

    $sqlTable = "CREATE TABLE IF NOT EXISTS drinks (id INT PRIMARY KEY AUTO_INCREMENT, name VARCHAR(50) NOT NULL, cost_in_kc FLOAT(8,2), color VARCHAR(50), cost FLOAT(8,2))";

    $send = mysqli_query($join, $sqlTable)
    or die ("Error: request wasn't fulfilled");

    if ($_POST){
        if (isset($_POST["submit"])){
            $name = $_POST["name"];
            $cost_in_kc = $_POST["cost_in_kc"];
            $color = $_POST["color"];
            $cost = $_POST["cost"];

            $sqlInsert = "INSERT INTO drinks (name, cost_in_kc, color, cost) VALUES ('$name', '$cost_in_kc', '$color', '$cost')";

            if (mysqli_query($join, $sqlInsert)) {
                echo "Drink successfully added!";
            } else {
                echo "Error inserting data: " . mysqli_error($join);
            }
        }
    }

    mysqli_close($join);
?>

<!doctype html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport"
          content="width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>Drinks</title>
</head>
<body>
    <h1>Create your drink!</h1>
    <form method="post" action="adding.php">
        <table>
            <tr>
                <td><label for="name">Name: </label></td>
                <td><input name="name" id="name" type="text" max="50" required></td>
            </tr>
            <tr>
                <td><label for="cost_in_kc">Cost in kc: </label></td>
                <td><input name="cost_in_kc" id="cost_in_kc" type="number" min="0"></td>
            </tr>
            <tr>
                <td><label for="color">Color: </label></td>
                <td><input name="color" id="color" type="text" max="50"></td>
            </tr>
            <tr>
                <td><label for="cost">Cost: </label></td>
                <td><input name="cost" id="cost" type="number" min="0"></td>
            </tr>
            <tr>
                <td></td>
                <td><input name="submit" id="submit" type="submit" value="Submit"></td>
            </tr>
        </table>
    </form>
</body>
</html>

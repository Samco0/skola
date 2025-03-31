<!doctype html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport"
          content="width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>Eveything</title>
</head>
<body>
<h1>Everything</h1>
<?php
include_once "join.php";

$sqlData = mysqli_query($join, "SELECT * FROM drinks");
$sqlDataByColor = mysqli_query($join, "SELECT * FROM drinks ORDER BY color ASC");

echo "<table>";
    echo "<tr>";
        echo "<th>ID</th>";
        echo "<th>Name</th>";
        echo "<th>Cost in KČ</th>";
        echo "<th>Color</th>";
        echo "<th>Cost</th>";
        echo "</tr>";
    if (mysqli_num_rows($sqlData) > 0) {
    while ($drinks = mysqli_fetch_assoc($sqlData)) {
    echo "<tr>";
        echo "<form action='update.php' method='post'>";

        echo "<td id='id'>".$drinks['id']."<input type='number' id='id' name='id' value='".$drinks['id']."' hidden></td>";
        echo "<td id='name'>".$drinks['name']."<input type='text' id='name' name='name' value='".$drinks['name']."' hidden></td>";
        echo "<td id='cost_in_kc'>".$drinks['cost_in_kc']."<input type='number' id='cost_in_kc' name='cost_in_kc' value='".$drinks['cost_in_kc']."' hidden></td>";
        echo "<td id='color'>".$drinks['color']."<input type='text' id='color' name='color' value='".$drinks['color']."' hidden></td>";
        echo "<td id='cost'>".$drinks['cost']."<input type='number' id='cost' name='cost' value='".$drinks['cost']."' hidden></td>";

        echo "<td><input type='submit' id='update' name='update' value='Update'></td>";
        echo "<td><input type='submit' id='remove' name='remove' value='Remove'></td>";
        echo "</form>";
        echo "</tr>";
    }
    } else {
    echo "<tr><td colspan='5'>0 results</td></tr>";
    }
    echo "</table><br>";

    mysqli_close($join);
?>
</body>
</html>

<!doctype html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport"
          content="width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>3</title>
</head>
<body>
<?php
include_once "join.php";

$sqlData = mysqli_query($join, "SELECT * FROM drinks");
$sqlDataByColor = mysqli_query($join, "SELECT * FROM drinks ORDER BY color ASC");

echo "<table border='1'>";
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
        echo "<td>".$drinks['id']."</td>";
        echo "<td>".$drinks['name']."</td>";
        echo "<td>".$drinks['cost_in_kc']."</td>";
        echo "<td>".$drinks['color']."</td>";
        echo "<td>".$drinks['cost']."</td>";
        echo "</tr>";
    }
} else {
    echo "<tr><td colspan='5'>0 results</td></tr>";
}
echo "</table><br>";

echo "<table border='1'>";
echo "<tr>";
echo "<th>ID</th>";
echo "<th>Name</th>";
echo "<th>Cost in KČ</th>";
echo "<th>Color</th>";
echo "</tr>";
if (mysqli_num_rows($sqlData) > 0) {
    mysqli_data_seek($sqlData, 0);
    while ($drinks = mysqli_fetch_assoc($sqlData)) {
        echo "<tr>";
        echo "<td>".$drinks['id']."</td>";
        echo "<td>".$drinks['name']."</td>";
        echo "<td>".$drinks['cost_in_kc']."</td>";
        echo "<td>".$drinks['color']."</td>";
        echo "</tr>";
    }
} else {
    echo "<tr><td colspan='4'>Žádné záznamy v databázi.</td></tr>";
}
echo "</table><br>";

echo "<table border='1'>";
echo "<tr>";
echo "<th>ID</th>";
echo "<th>Name</th>";
echo "<th>Color</th>";
echo "</tr>";
if (mysqli_num_rows($sqlData) > 0) {
    mysqli_data_seek($sqlData, 0);
    while ($drinks = mysqli_fetch_assoc($sqlData)) {
        echo "<tr>";
        echo "<td>".$drinks['id']."</td>";
        echo "<td>".$drinks['name']."</td>";
        echo "<td>".$drinks['color']."</td>";
        echo "</tr>";
    }
} else {
    echo "<tr><td colspan='3'>Žádné záznamy v databázi.</td></tr>";
}
echo "</table><br>";

echo "<table border='1'>";
echo "<tr>";
echo "<th>ID</th>";
echo "<th>Name</th>";
echo "<th>Color</th>";
echo "</tr>";
if (mysqli_num_rows($sqlDataByColor) > 0) {
    while ($drinks = mysqli_fetch_assoc($sqlDataByColor)) {
        echo "<tr>";
        echo "<td>".$drinks['id']."</td>";
        echo "<td>".$drinks['name']."</td>";
        echo "<td>".$drinks['color']."</td>";
        echo "</tr>";
    }
} else {
    echo "<tr><td colspan='3'>Žádné záznamy v databázi.</td></tr>";
}
echo "</table><br>";

mysqli_close($join);
?>
</body>
</html>
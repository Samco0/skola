<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>PHP ukol 9</title>
</head>
<body>

<?php
//1.
echo "<select>";
for ($i = 0; $i < 10; $i++) {
    echo "<option>" . ($i + 1) . "</option>";
}
echo "</select><br>";

//2
$months = array("jan", "feb", "mar", "apr", "may", "jun", "jul", "aug", "sep", "oct", "nov", "dec");

echo "<select>";
foreach ($months as $month) {
    echo "<option>" . $month . "</option>";
}
echo "</select><br>";

//3
echo "<select>";
for ($j = 0; $j < 4; $j++) {
    echo "<option>" . ($j + 1) . ".A</option>";
    echo "<option>" . ($j + 1) . ".B</option>";
    echo "<option>" . ($j + 1) . ".C</option>";
}
echo "</select><br>";

//4
$monthsStr = "jan,feb,mar";
$monthsArr = explode(",", $monthsStr);

foreach ($monthsArr as $month) {
    echo $month . "<br>";
}

//5
$numsOneStr = "12,39,23";
$numsOneArr = explode(",", $numsOneStr);

$numsTwoStr = "24,64";
$numsTwoArr = explode(",", $numsTwoStr);

echo "<br>Prvni pole <br>";
foreach ($numsOneArr as $numOne) {
    echo $numOne . "<br>";
}

echo "Soucet hodnot prvniho pole je: " . array_sum($numsOneArr);

echo "<br><br>Druhe pole <br>";
foreach ($numsTwoArr as $numTwo) {
    echo $numTwo . "<br>";
}

echo "<br>Prumer hodnot druheho pole je: " . (array_sum($numsTwoArr)/count($numsTwoArr));
echo "<br>Soucet hodnot druheho pole je: " . array_sum($numsTwoArr);
?>

</body>
</html>
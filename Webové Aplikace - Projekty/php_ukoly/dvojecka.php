<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>PHP ukol 2</title>
</head>
<body>

<?php
//1.
$randomInt = rand(0,20);

if($randomInt == 0){
    echo "<p>Vase cislicko je nula | $randomInt</p>";
}
else if($randomInt % 2 > 0){
    echo "<p>Vase cislicko je liche | $randomInt</p>";
}
else{
    echo "<p>Vase cislicko je sude | $randomInt </p>";
}

//2.
$pocetDnu = cal_days_in_month(CAL_GREGORIAN, date("m"), date("Y"));

echo "<p>Pocet dnu v mesici je $pocetDnu</p>";

//3.
for ($x = 1; $x <= 6; $x++) {
    echo "<h$x>Tohle je nadpis $x. urovne</h$x>";
}

//4.
echo "<table border='1'>";
for ($x = 1; $x <= 10; $x++) {
    echo "<tr><td>$x. bunka</td></tr>";
}
echo "</table><br>";

//5.
echo "<table border='1'><tr>";
for ($x = 1; $x <= 10; $x++) {
    echo "<td>$x. bunka</td>";
}
echo "</tr></table>";
?>

</body>
</html>
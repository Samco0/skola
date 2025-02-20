<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>PHP ukol 6</title>
</head>
<body>

<?php
//ukol 1
for ($i = 0; $i <= 9; $i++) {
    $cisla[$i] = $i + 1;
}

foreach ($cisla as $x) {
    echo "$x  ";
}

echo "<br><br>";

//ukol 2
for ($i = 0; $i <= 15; $i++) {
    $nahCisla[$i] = rand(1, 50);
}

foreach ($nahCisla as $y){
    echo "$y  ";
}

echo "<br><br>";

arsort($nahCisla, 0);

foreach ($nahCisla as $z) {
    echo "$z  ";
}

echo "<br><br>";
echo count($nahCisla);

echo "<br><br>";
echo array_sum($nahCisla);

foreach ($nahCisla as $y) {
    if ($y == 8){
        echo "<br><br>Ve vasem arrayi se nachazi cislo 8";
        break;
    }
}

//ukol 3
for ($i = 0; $i <= 9; $i++) {
    $tabulkovaCisla[$i] = $i + 1;
}

echo "<table border='1' bgcolor='#6495ed'><tr>";
foreach ($tabulkovaCisla as $k) {
    echo "<td>$k</td>";
}
echo "</tr></table>";
?>

</body>
</html>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>PHP ukol 5</title>
</head>
<body>

<?php

//ukol 1
echo "<table border='1px'>";
for ($i = 1; $i <= 4; $i++) {
    echo "<tr>";
    for ($j = 1; $j <= 4; $j++) {
        $nahodneCislo = rand(1, 10);
        if ($nahodneCislo==5){
            echo "<td><img src='petka_obrazky/tux.png' alt='Tuxik'></td>";
        }
        else{
            echo "<td>$nahodneCislo</td>";
        }
    }
    echo "</tr>";
}
echo "</table>";

//ukol 2

echo "<table border='1px'>";
for ($i = 1; $i <= 10; $i++) {
    echo "<tr>";
    for ($j = 1; $j <= 10; $j++) {
        if ($i == 0) {
            $ij = 1*j;
        }
        else {
            $ij = $i * $j;
        }
        echo "<td>$ij</td>";
    }
    echo "</tr>";
}
echo "</table>";
?>

</body>
</html>
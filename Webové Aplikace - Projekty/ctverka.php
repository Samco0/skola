<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>PHP ukol 2</title>
</head>
<body>

<?php
    //0 - black
    //1 - blue
    $barva = 0;


    echo "<table>";
    for ($i = 1; $i <= 8; $i++) {
        if ($barva == 0) $barva = 1;
        else $barva = 0;

        echo "<tr>";
        for ($j = 1; $j <= 8; $j++) {
            if ($barva == 0) $barva = 1;
            else $barva = 0;

            if ($barva == 0) echo "<img src='ctverka_obrazky/black.png'>";
            else echo "<img src='ctverka_obrazky/blue.png'>";
        }
        echo "</tr> <br>";
    }
    echo "</table>";
?>

</body>
</html>

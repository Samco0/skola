<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>PHP ukol 3</title>
</head>
<body>

<?php
//3.
$cas = 12;

if ($cas < 8){
    echo "Dobre rano";
}
elseif ($cas >= 8 && $cas < 18){
    echo "Dobry den";
}
elseif ($cas >= 18 && $cas < 22){
    echo "Dobry vecer";
}
else{
    echo "Dobrou noc";
}

//4
//0-6 pro dny v tydnu
$den = 6;
$body = 76;
$znamka = 0;

if($body>60 && $body<=70) $znamka = 4;
if($body>70 && $body<=80) $znamka = 3;
if($body>80 && $body<=90) $znamka = 2;
else $znamka = 1;

if($den > 6) $den = $den - 1;

if($body>60){
    echo "<p>Prospel jsi se znamkou $znamka</p>";
}
else{
    echo "<p>Neprospel jsi</p>";
}

if($den > 5){
    echo "<p>Hezky vikend</p>";
}
?>

</body>
</html>
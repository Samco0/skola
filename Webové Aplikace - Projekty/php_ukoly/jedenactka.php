<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>PHP ukol 11</title>
</head>
<body>

<?php

//1.
function printTen(){
    for ($i=1; $i<=10; $i++){
        echo $i." ";
    }
}

printTen();

//2.
function cubeNum($num) {
    return $num*$num*$num;
}
$cis = 3;

echo "<br><br>treti mocnina cisla ".$cis." je ".cubeNum($cis);

//3.
function arraySum($array){
    $sum = 0;

    foreach ($array as $a) {
        $sum += $a;
    }

    return $sum;
}

$cislicka1 = array(2, 1, 4, 3, 6, 5, 8, 7, 10, 9);
$cislicka2 = array(2, 3, 5, 7, 11, 13, 17, 19, 23, 29);

echo "<br><br>soucet prvniho arraye je ".arraySum($cislicka1);
echo "<br>soucet druheho arraye je ".arraySum($cislicka2);

//4.
function arrayCollumnChart($array){
    foreach ($array as $a) {
        $w = $a * 5;

        echo "<img src='jedenactka_obrazky/grafik.png' height='$w px' width='10px' title='$a'> ";
    }
}

$grafocislo = array(5, 10, 8, 8, 9, 14, 12, 8, 16, 10);

echo "<br><br>";
arrayCollumnChart($grafocislo);

//5.
function create($n, $m) {
    $hlasy = array();

    for ($i = 0; $i < $n; $i++) {
        $hlasy[$i] = 0;
    }

    for ($i = 0; $i < $m; $i++) {
        $index = rand(0, $n - 1);
        $hlasy[$index] += 1;
    }

    return $hlasy;
}


function showResults($arr){
    foreach ($arr as $a){
        $w = $a * 10;

        echo "<img src='jedenactka_obrazky/grafik.png' width='$w px' height='10px' title='$a'> $a <br>";
    }
}

echo "<br><br>";
showResults(create(4, 10));
?>

</body>
</html>
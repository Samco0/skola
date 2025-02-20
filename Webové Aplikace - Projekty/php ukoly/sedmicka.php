<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>PHP ukol 7</title>
</head>
<body>

<?php
//ukol 1
$jmena = array("Spiderman", "Travis", "Wolverine", "Witcher");
$tyden = array("Pondeli", "Utery", "Streda", "Ctvrtek", "Patek");
array_push($tyden, "Sobota", "Nedele");

print_r($jmena);
echo "<br>";
print_r($tyden);

echo "<br><br> $jmena[1]<br>";
foreach ($jmena as $x) {
    if ($x != $jmena[1]) {
        echo "$x  ";
    }
}

$jmena[1] = "Elvis";
echo "<br><br>";

foreach ($jmena as $x) {
    echo "$x <br>";
}

echo "<br>";
foreach ($tyden as $x) {
    echo "$x <br>";
}

?>

</body>
</html>
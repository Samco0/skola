<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>PHP ukol GAL1</title>
</head>
<body>

<?php
//part 1
$student1 = array("firstName" => "Krystof", "lastName" => "Zelusko", "class" => "3.A");
$student2 = array("firstName" => "Jakub", "lastName" => "Ziduszka", "class" => "3.A");

echo "full name of student 1 is  " . $student1["firstName"] . " " . $student1["lastName"] . " and he goes to " . $student1["class"];
echo "<br>full name of student2 is " . $student2["firstName"] . " " . $student2["lastName"] . " and he goes to " . $student2["class"];

//part 2
$days = array("Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday");

echo "<br><br><label for=\"days\">Select a day: </label>";
echo "<select name=\"days\" id=\"days\">";
foreach ($days as $x) {
    echo "<option value=\"$x\">$x</option>";
}
echo "</select>";

//part 3
$nums = array();

for ($i = 1; $i < 50; $i++) {
    $nums[$i] = rand(-30, 30);
}

print_r($nums);
echo "<br><br>";

for ($i = 1; $i < 50; $i++) {
    if ($nums[$i]<=0){
        unset($nums[$i]);
    }
}

$nums = array_values($nums);

print_r($nums);

$cnt = 0;
echo "<br><br>";
echo "<table border='1'>";

$rows = count($nums)/5;

echo $rows;
$rows = $rows + 0.4;

$rows = round($rows, 0);

echo "<br>" . $rows;
for ($i = 0; $i < $rows; $i++) {
    echo "<tr>";
    for ($j = 0; $j < 5; $j++) {
        if (isset($nums[$cnt])) {
            echo "<td>" . $nums[$cnt] . "</td>";
        } else {
            echo "<td> / </td>";
        }
        $cnt++;
    }
    echo "</tr>";
}
echo "</table>";
?>

</body>
</html>
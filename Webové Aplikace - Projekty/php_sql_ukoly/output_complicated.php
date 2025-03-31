<!doctype html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport"
          content="width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>4</title>
</head>
<body>
    <?php
        include_once "join.php";

        $sqlByCost = mysqli_query($join, "SELECT * FROM drinks WHERE cost_in_kc > 20");
        $blueDrinksWithA = mysqli_query($join, "SELECT * FROM drinks WHERE color='blue' AND name LIKE '%a%'");
        $averagePriceQuery = mysqli_query($join, "SELECT AVG(cost_in_kc) AS average_price FROM drinks");
        $sortedDrinksQuery = mysqli_query($join, "SELECT * FROM drinks ORDER BY name ASC");

        $averagePrice = mysqli_fetch_assoc($averagePriceQuery)['average_price'];

        echo "<h1>Drinks, that cost more than 20 crowns</h1>";
        echo "<table border='1'>";
        echo "<tr>";
        echo "<th>ID</th>";
        echo "<th>Name</th>";
        echo "<th>Cost in KČ</th>";
        echo "<th>Color</th>";
        echo "</tr>";
        if (mysqli_num_rows($sqlByCost) > 0) {
            while ($drinks = mysqli_fetch_assoc($sqlByCost)) {
                echo "<tr>";
                echo "<td>".$drinks['id']."</td>";
                echo "<td>".$drinks['name']."</td>";
                echo "<td>".$drinks['cost_in_kc']."</td>";
                echo "<td>".$drinks['color']."</td>";
                echo "</tr>";
            }
        } else{
            echo "<tr><td colspan='4'>0 results</td></tr>";
        }
        echo "</table><br>";

        echo "<h1>Blue drinks with A in their name</h1>";
        echo "<table border='1'>";
        echo "<tr>";
        echo "<th>ID</th>";
        echo "<th>Name</th>";
        echo "<th>Cost in KČ</th>";
        echo "<th>Color</th>";
        echo "</tr>";
        if (mysqli_num_rows($blueDrinksWithA) > 0) {
            while ($drinks = mysqli_fetch_assoc($blueDrinksWithA)) {
                echo "<tr>";
                echo "<td>".$drinks['id']."</td>";
                echo "<td>".$drinks['name']."</td>";
                echo "<td>".$drinks['cost_in_kc']."</td>";
                echo "<td>".$drinks['color']."</td>";
                echo "</tr>";
            }
        } else{
            echo "<tr><td colspan='4'>0 results</td></tr>";
        }
        echo "</table><br>";

        echo "<h1>Drinks in ascending order</h1>";
        echo "<table border='1'>";
        echo "<tr><th colspan='4'>Average cost of drinks is ".number_format($averagePrice, 2)." KČ</th></tr>";
        echo "<tr>";
        echo "<th>ID</th>";
        echo "<th>Name</th>";
        echo "<th>Cost in KČ</th>";
        echo "<th>Color</th>";
        echo "</tr>";
        if (mysqli_num_rows($sortedDrinksQuery) > 0) {
            while ($drinks = mysqli_fetch_assoc($sortedDrinksQuery)) {
                echo "<tr>";
                echo "<td>".$drinks['id']."</td>";
                echo "<td>".$drinks['name']."</td>";
                echo "<td>".$drinks['cost_in_kc']."</td>";
                echo "<td>".$drinks['color']."</td>";
                echo "</tr>";
            }
        } else{
            echo "<tr><td colspan='4'>0 results</td></tr>";
        }
        echo "</table><br>";
    ?>
</body>
</html>

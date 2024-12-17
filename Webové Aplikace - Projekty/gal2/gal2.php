<!doctype html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport"
          content="width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>GAL2</title>
</head>
<body>
    <form action="" method="post">
        <label for="minVek">Minimalni vek: <input type="number" name="minVek" id="minVek" min="1" max="99"></label>
        <label for="maxVek">Maximalni vek: <input type="number" name="maxVek" id="maxVek" min="1" max="99"></label>
        <input type="submit" name="filter" id="filter">
    </form>
</body>

<?php

    if ($_POST){
        if (isset($_POST["filter"])){
            $file =  fopen("gal2.txt", "r");

            $minVek = $_POST["minVek"];
            $maxVek = $_POST["maxVek"];

            echo "<table border='1'>";
            echo "<tr><td>JMENO</td><td>PRIJMENI</td><td>VEK</td></tr>";
            while (!feof($file)) {
                $skvelyArray = explode(";",fgets($file));

                echo "<tr>";
                foreach ($skvelyArray as $x) {
                    echo "<td>" . $x . "</td>";
                }

                echo "</tr>";
            }
            echo "</table>";

            fclose($file);
        }
    }

?>
</html>
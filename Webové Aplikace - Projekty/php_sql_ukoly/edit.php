

<!doctype html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport"
          content="width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>Edit</title>
</head>
<body>
    <?php
    include_once("join.php");

    $data = mysqli_query($join, "SELECT * FROM drinks");

    echo "<h1>Table editing</h1>  
    <h2>Table</h2>
    <table><tr>
    <th>ID</th>
    <th>Name</th>
    <th>Cost in crowns</th>
    <th>Color</th>
    <th>Cost</th>
    </tr>";
    if (mysqli_num_rows($data) > 0) {
        while ($drinks = mysqli_fetch_assoc($data)) {
            echo "<tr>";
            echo "<td>".$drinks['id']."</td>";
            echo "<td>".$drinks['name']."</td>";
            echo "<td>".$drinks['cost_in_kc']."</td>";
            echo "<td>".$drinks['color']."</td>";
            echo "<td>".$drinks['cost']."</td>";
            echo "</tr>";
        }
    } else {
        echo "<tr><td colspan='3'>0 results</td></tr>";
    }
    echo "</table><br>";

    echo "<h2>Edit Form</h2>
    <form method='post'>
    <label for='drinkId'>ID: </label>
    <select name='drinkId' id='drinkId'>";
        if (mysqli_num_rows($data) > 0) {
            // Reset the internal pointer to the beginning of the result set
            mysqli_data_seek($data, 0);

            while ($drinks = mysqli_fetch_assoc($data)) {
                echo "<option value='".$drinks['id']."'>".$drinks['id']."</option>";
            }
        }
        echo "</select>
    </form>";

    mysqli_close($join);
    ?>
</body>
</html>

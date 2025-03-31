<?php
include_once "join.php";

if ($_POST){
    //this section is dedicated to deleting by ID
    if (isset($_POST["idDelete"])){
        $id = $_POST["id"];
        $sqlDelete = "DELETE FROM drinks WHERE id = $id";
    }

    //this section is dedicated to deleting by name
    else if (isset($_POST["nameDelete"])) {
        $name = mysqli_real_escape_string($join, $_POST["name"]);
        $sqlDelete = "DELETE FROM drinks WHERE name = '$name'";
    }

    //this section is dedicated to deleting by color
    else if (isset($_POST["colorDelete"])) {
        $color = mysqli_real_escape_string($join, $_POST["color"]);
        $sqlDelete = "DELETE FROM drinks WHERE color = '$color'";
    }

    //this section is dedicated to deleting by cost
    else if (isset($_POST["costDelete"])) {
        $cost = mysqli_real_escape_string($join, $_POST["cost"]);
        $sqlDelete = "DELETE FROM drinks WHERE cost = '$cost'";
    }

    //this section is dedicated to deleting by advanced id
    else if (isset($_POST["advIdDelete"])) {
        $advId = mysqli_real_escape_string($join, $_POST["advId"]);
        $sqlDelete = "DELETE FROM drinks WHERE id like '$advId'";
    }
}

if(isset($sqlDelete)) {
    if (mysqli_query($join, $sqlDelete)) {
        echo "Drink was successfully deleted";
    } else {
        echo "Error deleting record: " . mysqli_error($join);
    }
}

mysqli_close($join);
?>


<!doctype html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport"
          content="width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>Drinks</title>
</head>
<body>
    <!--This section is dedicated to deleting by ID-->
    <h1>Delete by ID</h1>
    <form method="post" action="remove.php">
        <table>
            <tr>
                <td><label for="id">ID: </label></td>
                <td><input name="id" id="id" type="number" min="0"></td>
            </tr>
            <tr>
                <td></td>
                <td><input name="idDelete" id="idDelete" type="submit" value="Delete"></td>
            </tr>
        </table>
    </form>

    <!--This section is dedicated to deleting by name-->
    <h1>Delete by name</h1>
    <form method="post" action="remove.php">
        <table>
            <tr>
                <td><label for="name">Name: </label></td>
                <td><input name="name" id="name" type="text" max="50"></td>
            </tr>
            <tr>
                <td></td>
                <td><input name="nameDelete" id="nameDelete" type="submit" value="Delete"></td>
            </tr>
        </table>
    </form>

    <!--This section is dedicated to deleting by color-->
    <h1>Delete by color</h1>
    <form method="post" action="remove.php">
        <table>
            <tr>
                <td><label for="color">Color: </label></td>
                <td><input name="color" id="color" type="text" max="50"></td>
            </tr>
            <tr>
                <td></td>
                <td><input type="submit" id="colorDelete" name="colorDelete" value="Delete"></td>
            </tr>
        </table>
    </form>

    <!--This section is dedicated to deleting by cost-->
    <h1>Delete by cost</h1>
    <form method="post" action="remove.php">
        <table>
            <tr>
                <td><label for="cost">Cost: </label></td>
                <td><input name="cost" id="cost" type="number"></td>
            </tr>
            <tr>
                <td></td>
                <td><input name="costDelete" id="costDelete" type="submit" value="Delete"></td>
            </tr>
        </table>
    </form>

    <!--This section is dedicated to deleting from an ID select-->
    <h1>Delete by ID (advanced)</h1>
    <form method="post" action="remove.php">
        <table>
            <tr>
                <td><label for="advId">ID: </label></td>
                <td>
                    <select id="advId" name="advId">
                        <?php
                        include_once "join.php";

                        $vyber = mysqli_query($join, "SELECT * FROM drinks");

                        if ($vyber) {
                            while ($drink = mysqli_fetch_assoc($vyber)) {
                                $id = $drink["id"];
                                echo "<option value='$id'>$id</option>";
                            }
                        } else {
                            echo "<option>Error fetching data</option>";
                        }

                        mysqli_close($join);
                        ?>

                    </select>
                </td>
            </tr>
            <tr>
                <td></td>
                <td><input type="submit" name="advIdDelete" id="advIdDelete" value="Delete"></td>
            </tr>
        </table>
    </form>
</body>
</html>
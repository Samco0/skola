<?php
include_once "join.php";

if($_POST) {
    if (isset($_POST['update'])) {
        $id = $_POST['id'];
        $name = $_POST['name'];
        $cost_in_kc = $_POST['cost_in_kc'];
        $color = $_POST['color'];
        $cost = $_POST['cost'];

        echo '<form method="post">
        <input type="hidden" name="id" value="'.$id.'">
        <table>
        <tr>
            <td><label for="name">Name</label></td>
            <td><input type="text" name="name" value="'.$name.'"></td>
        </tr>
        <tr>
            <td><label for="cost_in_kc">Cost in KC</label></td>
            <td><input type="text" name="cost_in_kc" value='.$cost_in_kc.'></td>
        </tr>
        <tr>
            <td><label for="color">Color</label></td>
            <td><input type="text" name="color" value="'.$color.'"></td>
        </tr>
        <tr>
            <td><label for="cost">Cost</label></td>
            <td><input type="text" name="cost" value="'.$cost.'"></td>
        </tr>
        <tr>
            <td></td>
            <td><input type="submit" name="actuallyUpdate" id="actuallyUpdate" value="Update"></td>
        </tr>
        </table>
        
        </form>';
    }

    if(isset($_POST['actuallyUpdate'])) {
        $id = $_POST['id'];
        $name = $_POST['name'];
        $cost_in_kc = $_POST['cost_in_kc'];
        $color = $_POST['color'];
        $cost = $_POST['cost'];

        $query = "UPDATE drinks SET 
                    name='$name', 
                    cost_in_kc='$cost_in_kc', 
                    color='$color', 
                    cost='$cost' 
                  WHERE id='$id'";

        mysqli_query($join, $query) or die("Update failed: " . mysqli_error($join));

        echo "<a href='everything.php'>Go back</a>";
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
    <title>Update</title>
</head>
<body>

</body>
</html>

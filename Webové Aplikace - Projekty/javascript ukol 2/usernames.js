let user1 = "Bobicek";
let user2 = "Zeliicko";
let user3 = "Krovinorez";

let user4 = prompt("Zadejte uzivatelske jmeno");

if(user4==user1||user4==user2||user4==user3){
    alert("This username is already taken!");
    document.write("You don't exist");
}
else {
    document.write("Hi "+user4+"<br><br>");
}
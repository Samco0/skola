function even_nums(){
    let usernum = parseInt(document.getElementById('users_number').value);
    let startingNum;
    let count;

    if((usernum)%2!=0){
        startingNum = usernum + 1;
    }
    else {
        startingNum = usernum;
    }
    count = startingNum;

    document.write("<p>"+startingNum+"  </p>");
    do {
        count = count + 2;
        documeznt.write("<p>"+count+"  </p>");
    } while (count != 50);
}

function odd_nums(){
    let usernum = parseInt(document.getElementById('users_number').value);
    let startingNum;
    let count;

    if((usernum)%2==0){
        startingNum = usernum + 1;
    }
    else {
        startingNum = usernum;
    }
    count = startingNum;

    document.write("<p>"+startingNum+"  </p>");
    do {
        count = count + 2;
        document.write("<p>"+count+"  </p>");
    } while (count != 49);
}

function bck_nums(){
    let usernum = parseInt(document.getElementById('users_number').value);
    let count = 50;

    document.write("<p>"+count+"  </p>");
    do {
        count = count -1;
        document.write("<p>"+count+"  </p>");
    } while (count != usernum);
}

function sqr(){
    let usernum = parseInt(document.getElementById('users_number').value);
    let rectangle = usernum*usernum;

    document.write("<p>"+rectangle+"</p>");
}
let age = Math.random() * 101;
let child = false, adult = false, pensioner = false;

if(age<18){
    child = true;
}
else if(age>=18&&age<65){
    adult = true;
}
else{
    pensioner = true;
}

document.write("Child -> "+child)
document.write("<br>Adult -> "+adult);
document.write("<br>Pensioner -> "+pensioner);
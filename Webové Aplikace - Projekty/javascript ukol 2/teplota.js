let teplota = 1000;

document.write("Home temperature: ")
if(teplota < 10){
    document.write("Cold");
}

if(teplota < 26&&teplota >= 10){
    document.write("Warm");
}

if(teplota >= 26){
    document,write("Hot");
}
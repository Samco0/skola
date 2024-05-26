function sachovnice(){
    let pocetRadku = parseInt(document.getElementById('pocetradku').value);
    let sloupecCounter = 0;
    let radekCounter = 0;
    
    document.write("<table>");
    do{
        radekCounter = 0;
        document.write("<tr>");
        do {
            document.write("<td></td>");
        } while (radekCounter<pocetRadku));
        document.write("</tr>");
    }while(sloupecCounter<pocetRadku);
    document.write("</table>");
};
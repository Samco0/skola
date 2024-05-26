let obor = prompt("O jake zamestnani se uchazite? (programator, administrator, sekretarka)");
let otazka;

switch(obor){
    case "programator", "Programator":
        otazka = prompt("Jaky je rozdil mezi HTML5, CSS3 a JavaScriptem?");
        document.write("Vase odpoved zni -> "+otazka);

        console.log("Uzivatel si vybral moznost PROGRAMATOR");
        break;


    case "administrator", "Administrator":
        otazka = prompt("Jake znate druhy siti?");
        document.write("Vase odpoved zni -> "+otazka);

        console.log("Uzivatel si vybral moznost ADMINISTRATOR");
        break;


    case "sekretarka", "Sekretarka":
        otazka = prompt("Jake znate funkce v excelu");
        document.write("Vase odpoved zni -> "+otazka);

        console.log("Uzivatel si vybral moznost SEKRETARKA");
        break;

        
    default:
        console.log("Na otazku nebyla zadna, nebo nespravna odpoved")
        break;
};

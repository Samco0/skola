function shrnutiObj(){
    let cenaZaJednu = 0;
    let nazevPizzy = document.getElementById('druhPizzy').value;
    var checkbox = document.getElementById('susenka');
    let pocetPizz = document.getElementById('pocetKusu').value;
    let celkovaCena = 0;

    if(document.getElementById('mala').checked){
        cenaZaJednu = 230;
    }
    else if(document.getElementById('velka').checked){
        cenaZaJednu = 300;
    }

    celkovaCena = pocetPizz * cenaZaJednu;

    document.write('<h2>Shrnutí objednávky</h2>');
    document.write('<p>Druh pizzy: '+nazevPizzy+'</p>');
    document.write('<p>Celkova cena: '+cenaZaJednu+'</p>');
    if(checkbox.checked == true){
        document.write('<p>Sušenka: Ano</p>');
    }
    else{
        document.write('<p>Sušenka: Ne</p>');
    }
}
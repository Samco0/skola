function potvrditObjednavku(){
    let volba = parseInt(document.getElementById('cislo_pizzy').value);
    let pocet = parseInt(document.getElementById('pocet_kusu').value);
    let cislo = Math.floor(Math.random() * 1500 + 1);
    let cena;
    let pizza;

    function datum(){
        let datumek = new Date();
        let year = datumek.getFullYear();
        let month = datumek.getMonth()+1;
        let day = datumek.getDay();
        document.write('<span>'+day+'.'+month+'.'+year+'</span>');
    }

    document.write('<p>Dobrý den, děkujeme za vaší obědnávku č. '+cislo+' ze dne '+datum()+'</p>');

    switch(volba){
        case 1:
            pizza = 'Margherita';
            cena = 180;
            break;
        case 2:
            pizza = 'Napoletana';
            cena = 220;
            break;
        case 3:
            pizza = 'Prosciutto';
            cena = 215;
            break;
        case 4:
            pizza = 'Diavola';
            cena = 230;
            break;
        case 5:
            pizza = 'Frutti di Mare';
            cena = 250;
            break;
        case 6:
            pizza = 'Hawaii';
            cena = 215;
            break;
        case 7:
            pizza = 'Quatro Formaggi';
            cena = 220;
            break;
    }

    document.write('<p>Druh pizzy: '+pizza+'</p>');
    document.write('<p>Cena za kus: '+cena+'</p>');
    document.write('<p>Počet: '+pocet+'</p>');
    document.write('<p>Částka k zaplacení: '+(pocet*cena)+'</p>');
}
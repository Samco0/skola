let myCanvas = document.createElement('canvas');
myCanvas.width = 800;
myCanvas.height = 800;
let context = myCanvas.getContext('2d');
document.body.appendChild(myCanvas);

//prideleni postavy cavebega
let cavebeg = new Image();
cavebeg.src = 'img/cavebeg.jpg';

//nastaveni vychozi pozice cavebega
let cavebegX  = 0;
let cavebegY = 60;

window.addEventListener('load',start);

function start() {
    context.drawImage(cavebeg, cavebegX, cavebegY);
}

//nastaveni rychlosti pohybu
let cavebegRychlost = 5;

window.addEventListener('keydown',function(event){
    switch(event.key){
        
    }
});

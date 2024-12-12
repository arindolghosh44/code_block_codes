// Canvas API= a means drawing graphics 
//             used for animation ,games ,data visualization

let canvas=document.getElementById("mycanvas");
let context=canvas.getContext("2d");



/*
context.strokeStyle="purple";
context.lineWidth=10;
context.beginPath();
//context.moveTo(10,10);//the corner start from 10,10(x,y)
//context.lineTo(500,500);
//context.lineTo(250,500);
//context.lineTo(50,50);
context.moveTo(0,0);
context.lineTo(250,250);
context.lineTo(250,500);
context.moveTo(500,0);
context.lineTo(250,250);

context.stroke();

*/

//draw triangle
/*context.strokeStyle="red";
context.fillStyle="green";
context.lineWidth=10;
context.beginPath();
context.moveTo(250,0);
context.lineTo(0,250);
context.lineTo(500,250);
context.lineTo(250,0);
context.stroke();
context.fill();
*/


// draw rectangle
/*
context.fillStyle="blue";
context.fillRect(0,0,250,250);
context.strokeStyle="black";
context.strokeRect(0,0,250,250);


context.fillStyle="red";
context.fillRect(0,250,250,250);
context.strokeStyle="black";
context.strokeRect(0,250,250,250);





context.fillStyle="green";
context.fillRect(250,250,250,250);
context.strokeStyle="black";
context.strokeRect(250,250,250,250);

context.fillStyle="yellow";
context.fillRect(250,0,250,250);
context.strokeStyle="black";
context.strokeRect(250,0,250,250);

*/

//DRAW CIRCLE


//(x,y,r,sAngle,eAngle,counterclockwise)
/*
context.fillStyle="green";
context.strokeStyle="yellow";
context.lineWidth=10;
context.beginPath();
context.arc(250,250,250,0,2*Math.PI);
context.stroke();
context.fill();
*/


//DRAW TEXT
context.font="50px MV Boli";
context.fillStyle="red";
context.textAlign="center";
//context.fillText("YOU NEVER LOSE!!!!!!",100,100);
context.fillText("YOU NEVER LOSE!!!!!!",canvas.width/2,canvas.height/2);

















































































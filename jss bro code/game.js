let x,y,z;
document.getElementById("rollbutton").onclick=function(){
    x=Math.floor(Math.random()*6)+1;
    y=Math.floor(Math.random()*6)+1;
    z=Math.floor(Math.random()*6)+1;
    document.getElementById("xlabel").innerHTML=x;/*innner html means the input x is go to x label*/
    document.getElementById("ylabel").innerHTML=y;
    document.getElementById("zlabel").innerHTML=z;
}
let c=0;
document.getElementById("decrease").onclick=function(){
    c-=1;
    document.getElementById("counter").innerHTML=c;
}
document.getElementById("reset").onclick=function(){
    c=0;
    document.getElementById("counter").innerHTML=c;
}
document.getElementById("increase").onclick=function(){
    c+=1;
    document.getElementById("counter").innerHTML=c;
}
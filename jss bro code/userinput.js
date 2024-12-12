/*let username=window.prompt("what is your name?");
console.log(username);*/
let username;
document.getElementById("mybutton").onclick=function(){
    username=document.getElementById("mytext").value;
    document.getElementById("mylabel").innerHTML="hello"+"  "+username;
    console.log(username);
}
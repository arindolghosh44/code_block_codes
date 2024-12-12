/*let x=6.90;
let y=5;
let z=9;
let m;
let n;
x=Math.round(x);
y=Math.ceil(x);
z=Math.sqrt(y);
m=Math.max(x,y,z);


console.log(y);
console.log(x);
console.log(z);
console.log(m);*/



let a,b,c;
/*a=window.prompt("Enter the first corner of the triangle");
a=Number(a);
b=window.prompt("Enter the second corner of the triangle");
b=Number(b);
c=Math.sqrt(Math.pow(a,2)+Math.pow(b,2));
console.log("side c:",c);*/


document.getElementById("submit").onclick=function(){
    a=document.getElementById("mytext").value;
a=Number(a);
b=document.getElementById("my1text").value;
b=Number(b);
c=Math.sqrt(Math.pow(a,2)+Math.pow(b,2));
document.getElementById("clabel").innerHTML="side c:"+c;
}
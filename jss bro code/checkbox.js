/*document.getElementById("mybutton").onclick=function()
{
const m=document.getElementById("mycheckbox");
const v=document.getElementById("visaBtn");
const mas=document.getElementById("matterBtn");
const p=document.getElementById("paypalBtn");



    if(m.checked)
    {
        console.log("you are already subscribe");

    }

    else{
    console.log("you not subscribe");
    }
   if(v.checked){
    console.log("you are paying with a visa");

}
else if(mas.checked)
{
    console.log("you are paying with a Mastercard");
}

else if(p.checked)
{
    console.log("you are paying with a PayPal");
}


all logical opeartor are same as c
}*/











/*
let grade=65;


switch(true)
{
case grade>=90:
    console.log("you did great");
    break;
    case grade==65:
        console.log("you did good");
    break;
    default:
        console.log("you do bad");



}*/




/*let temp=15;
let sunny=false;
if(!(temp>0))
{
    console.log("its cold outside");
}
else{
    console.log("its hot");
}
*/







/*let username="";


while (username=="")
{


    username=window.prompt("Enter your name");
}
console.log("hello",username);
*/




//it has same property for do while and for loop  and break and continue statement is as c

// here you also use nested for loop as c









let row,col;

let symbole=window.prompt("Enter the symbole to use");
row=window.prompt(" Enter the row count");
col=window.prompt("Enter the columnn numnber");
for(let i=1;i<=row;i++)
{
    for(j=1;j<=col;j++)
    {
//document.getElementById("my").innerHTML+=j;
document.getElementById("my").innerHTML+=symbole;
    }
document.getElementById("my").innerHTML+="<br>";


}







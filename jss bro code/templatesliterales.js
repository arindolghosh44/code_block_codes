// templates literals=delimited with (')
//instead of double and single quotes
//allows embedded variables and expressions



let username="bro";
let items=3;
let total=75;
let text='Hello ${username}  you have ${items} items in your Card your total is $${total}';

document.getElementById("mylabel").innerHTML=text;
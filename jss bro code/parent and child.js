/*let element=document.body;
let child=element.firstElementChild;
let p=element.lastElementChild;
console.log(p);
child.style.backgroundColor="lightgreen";*/


//===================================================================
/*let element=document.querySelector("#vegitable");
let parent=element.parentElement;
parent.style.backgroundColor="lightgreen"
*/


//=============================================================
/*let element=document.querySelector("#vegitable");
let sibling=element.nextElementSibling;//it will color the next sibling of vegitable
sibling.style.backgroundColor="lightgreen";
*/

//=============================================================
/*let element=document.querySelector("#vegitable");
let sibling=element.previousElementSibling;//it will color the previous sibling of vegitable
sibling.style.backgroundColor="lightgreen";
*/


//==================================================================

/*
let element=document.querySelector("#fruit");
let sibling=element.lastElementChild;
sibling.style.backgroundColor="lightgreen";
*/

//================================================================

/*
let element=document.querySelector("#fruit");
let sibling=element.children[1];
sibling.style.backgroundColor="lightgreen";
*/

//=====================================================================


let element=document.querySelector("#fruit");
let children=Array.from(element.children);
children.forEach(child => child.style.backgroundColor="blue");




































// .innerHTML (vulnerable to XSS attacks)
//.textContent(secure)



/*const nametag=document.createElement("h1");
nametag.innerHTML=window.prompt("Enter your name");
document.body.append(nametag);//virous follow
*/


/*
const nametag=document.createElement("h1");
nametag.textContent=window.prompt("Enter your name");
document.body.append(nametag);

*/


const mylist=document.querySelector("#fruit");

const listItem=document.createElement("li");
listItem.textContent="mango";

const listItem1=document.createElement("li");
listItem1.textContent="mango1";

const listItem2=document.createElement("li");
listItem2.textContent="grove";



mylist.append(listItem);//add the element in the last position
mylist.prepend(listItem1);//add the element in the first position

mylist.insertBefore(listItem2,mylist.getElementsByTagName("li")[1])







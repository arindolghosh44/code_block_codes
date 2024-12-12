//const element=document.getElementById("my");
//const element=document.body();
 /*const element=document.getElementById("mytext");
 element.onchange=dosomething;
*/

const element=document.getElementById("mydiv");
//element.onclick=dosomething;

//element.onload=dosomething;
//element.onmousemove=dosomething;
//element.onmouseout=do1;
element.onmousedown=dosomething;






function dosomething(){
   // alert("you did something");
   element.style.backgroundColor="red";
}
function do1(){
   // alert("you did something");
   element.style.backgroundColor="lightgreen";
}
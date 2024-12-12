/*const b=document.getElementById("mybutton");
const  myAnimation=document.getElementById("mydiv");


b.addEventListener("click",begin);



function begin()
{
let timerid=null;
let x=0;
let y=0;
timerid=setInterval(frame,5);
  

function frame()
{
    if(x>=200 || y>=200)
    {
        clearInterval(timerid);
    }
    else{
        x+=1;
        y+=1;
        myAnimation.style.left=x+ "px";
        myAnimation.style.top=y+ "px";
    }
}


}
*/


//=========================================================
/*const b=document.getElementById("mybutton");
const  myAnimation=document.getElementById("mydiv");


b.addEventListener("click",begin);



function begin()
{
let timerid=null;
let scalex=1;
let scaley=1;
timerid=setInterval(frame,5);
  

function frame()
{
    if(scalex>=3 ||scaley>=3)
    {
        clearInterval(timerid);
    }
    else{
        scalex+=0.01
        scaley+=0.01
        myAnimation.style.transform="scale("+scalex+","+scaley+")";
      
    }
}


}

*/

//===================================================
const b=document.getElementById("mybutton");
const  myAnimation=document.getElementById("mydiv");


b.addEventListener("click",begin);



function begin()
{
let timerid=null;
let scalex=1;
let scaley=1;
timerid=setInterval(frame,5);
  

function frame()
{
    if(scalex<=0.01 ||scaley<=0.03)
    {
        clearInterval(timerid);
    }
    else{
        scalex-=0.01
        scaley-=0.01
        myAnimation.style.transform="scale("+scalex+","+scaley+")";
      
    }
}


}

































































































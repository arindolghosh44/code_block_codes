//function expression=function without a name 

/*const t=function()
{
    console.log("hello bro");

}


t();*/


/*

let count=0;
 function increasecount(){
count+=1;
document.getElementById("mylabel").innerHTML=count;
 }

  function decreasecount()
{    count-=1;
    document.getElementById("mylabel").innerHTML=count;
    
    
} */


let count=0;



document.getElementById("incr").onclick=function()
{
    count+=1;
document.getElementById("mylabel").innerHTML=count;
 
}
  
    document.getElementById("dece").onclick=function()
    {
        count-=1;
        document.getElementById("mylabel").innerHTML=count;
        
    }
    
    

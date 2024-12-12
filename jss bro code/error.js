//error=object with a description of something went wrong
//        can't open a file

/*try{
    let x=window.prompt("Enter a #");
    x=Number(x);
    if(isNaN(x)) throw "that wasnot a number!";
    if(x== "") throw "this was empty";
    console.log(x,"is a number");
}
catch(error){
console.log(error);
}
finally{
    console.log("this always executed");
}
*/


//==============================================================================

//set timeout=invokes a function after a number of milisecond
//           asynchronous function(doesnot pause execution)

/*
let item="crytocurrency";
let price=420.78;


 let timer1=setTimeout(firstmessage,3000,item,price);//that is in mili second
 let timer2=setTimeout(twomessage,6000);
 let timer3=setTimeout(thirdmessage,9000);







function firstmessage(item,price)
{
    alert('Buy this course',item,' for ',price,'rupees');
}

function twomessage()
{
    alert('this is not a scam');
}

function thirdmessage()
{
    alert('do it!');
}

document.getElementById("my").onclick=function()
{
    clearTimeout(timer1);
    clearTimeout(timer2);
    clearTimeout(timer3);
    alert('thanks for buying');
}
*/


//==============================================================================

//setinterval=invokes a function reapeatedly of milisecond
//           asynchronous function(doesnot pause execution)


/*let count=0;
let max=window.prompt("count up to what range");
max=Number(max);
const my=setInterval(countup,1000);
 function countup()
 {
    count+=1;
    console.log(count);
    if(count>=max)
    {
        clearInterval(my);
    }
 }

*/



//====================================================================

let date=new Date();

//let date= new Date(1000000000000000);//this time will added with our recent time and show the output
//let date=new Date(0);
//let date=new Date(2024,0,1,2,3,4,5);//for setting the current time
//let date=new Date("january 1 ,2023,00:00:00");
//console.log(date);
//date=date.toLocaleString();
//console.log(date);
//document.getElementById("mylabel").innerHTML=date;




let year=date.getFullYear();
let dayofmonth=date.getDate();
let dayofweek=date.getDay();
let month=date.getMonth();
let hour=date.getHours();
let minu=date.getMinutes();
let second=date.getSeconds();
let milisecond=date.getMilliseconds();



/*document.getElementById("mylabel").innerHTML=year;
document.getElementById("mylabel").innerHTML=dayofmonth;
document.getElementById("mylabel").innerHTML=dayofweek;
*/

//document.getElementById("mylabel").innerHTML=month;
//document.getElementById("mylabel").innerHTML=hour;
//document.getElementById("mylabel").innerHTML=minu;


//document.getElementById("mylabel").innerHTML=second;
//document.getElementById("mylabel").innerHTML=ms;

/*document.getElementById("mylabel").innerHTML=format(date);

function format(date)
{
    let year=date.getFullYear();
    let month=date.getMonth();
    let dayofmonth=date.getDate();
return year+"/"+month+"/"+dayofmonth;
}
*/

document.getElementById("mylabel").innerHTML=formattime(date);

function formattime(date)
{
    let hour=date.getHours();
let minu=date.getMinutes();
let second=date.getSeconds();


let amorpm=hour >=12 ?"pm" :"am";
hour=(hour%12)||12;
return hour+":"+minu+":"+second+"   "+amorpm;


}


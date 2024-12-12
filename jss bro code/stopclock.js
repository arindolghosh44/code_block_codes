const timedisplay=document.querySelector("#timedisplay");
const startBtn=document.querySelector("#startBtn");
const pauseBtn=document.querySelector("#pauseBtn");
const resetBtn=document.querySelector("#resetBtn");


let startTime=0;
let elapsedTime=0;
let currentTime=0;
let paused=true;
let intervalId;
let hrs=0;
let mins=0;
let secs=0;


startBtn.addEventListener("click", () =>{
if(paused)
{
    paused=false;
    startTime=Date.now()-elapsedTime;
    intervalId=setInterval(updateTime,75);

}


});


resetBtn.addEventListener("click", () =>{
    paused=true;
    clearInterval(intervalId);
    let startTime=0;
let elapsedTime=0;
let currentTime=0;
let hrs=0;
let mins=0;
let secs=0;

timedisplay.textContent="00:00:00";



});

pauseBtn.addEventListener("click", () =>{
if(!paused)
{
    paused=true;
    elapsedTime=Date.now()-startTime;
    clearInterval(intervalId);
}




});
 function updateTime(){
elapsedTime=Date.now()-startTime;
 

secs=Math.floor((elapsedTime/1000)%60);
mins=Math.floor((elapsedTime/(1000*60))%60);
hrs=Math.floor((elapsedTime/(1000*60*60))%60);

secs=pad(secs);
mins=pad(mins);
hrs=pad(hrs);

timedisplay.textContent=hrs+":"+mins+":"+secs;

function pad(unit)
{
    return (("0")+unit).length >2 ? unit:  "0"+unit;
}



 }




























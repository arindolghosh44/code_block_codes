const mylabel=document.getElementById("mylabel");

update();
setInterval(update,1000);











function update()
{

let date=new Date();
mylabel.innerHTML=format(date);

function format(date){
    let hour=date.getHours();
let minu=date.getMinutes();
let second=date.getSeconds();


let amorpm=hour >=12 ?"pm" :"am";
hour=(hour%12)||12;

hour=formatzeros(hour);
minu=formatzeros(minu);
second=formatzeros(second);//thats include all the time preceeding with zero



return hour+":"+minu+":"+second+"  "+amorpm;

}

function formatzeros(time)
{
    time=time.toString();
    return time.length < 2 ? "0"+ time:time;
}








}
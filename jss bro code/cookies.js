
//const firstText=document.querySelector("#firstText");

//const lastText=document.querySelector("#lastText");

const submitBtn=document.querySelector("#submitBtn");

const cookieBtn=document.querySelector("#cookieBtn");



document.querySelector("#firstText").addEventListener("click", ()  => {

    setCookies("firstName",firstText.value,365);

setCookies("lastName",lastText.value,365);




});


document.querySelector("#lastText").addEventListener("click", ()  => {

   firstText.value=getCookies("firstName");

lastText.value=getCookies("lastName");
   


});

 deletecokie("firstName");
 deletecokie("lastName");



function setCookies(name,value,daysToLive)
{
    const date=new Date();
    date.setTime(date.getTime()+ daysToLive*24*60*60*1000);

    let expires="expires="+date.toUTCString();
    document.cookie=name+" "+value+" "+expires;
}


function deletecokie(name)
{
    setCookies(name,null,null);
}





function getCookies(name)
{
    const cDecoded=decodeURIComponent(document.cookie);
    const cArray=cDecoded.split(" ; ");
    let result=null;
    cArray.forEach(elements =>{

if(elements.indexOf(name) == 0)
{
    result=elements.substring(name.lenght+1);

}


    });

    return result;

}





















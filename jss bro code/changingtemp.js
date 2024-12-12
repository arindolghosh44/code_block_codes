document.getElementById("submitbutton").onclick=function()
{
    let temp;
    if(document.getElementById("cbutton").checked){
temp=document.getElementById("textbox").value;
temp=Number(temp);
temp=tocel(temp);
document.getElementById("templable").innerHTML=temp +" *c ";


    }
   else if(document.getElementById("fbutton").checked){
    temp=document.getElementById("textbox").value;
    temp=Number(temp);
    temp=tofer(temp);
    document.getElementById("templable").innerHTML=temp +"*F ";
    }


    else
    {

        document.getElementById("templable").innerHTML="select an unit";

    }
}
function tocel(temp)
{
    return (temp-32)*(5/9);
}
function tofer(temp)
{
    return temp*9/5+32;
}
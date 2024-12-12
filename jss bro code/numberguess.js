const an=Math.floor(Math.random()*10+1);
let guesses=0;

document.getElementById("submitButton").onclick=function()
{
    let guess=document.getElementById("guessfield").value;
    guesses+=1;
    if(guess==an)
    {
        console.log("it is the right one");
    }
else if(guess<an)
{
    alert("TOO TINKU");

}

else
{
    alert("TOO BIG");
}



}
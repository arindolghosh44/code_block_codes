const playerText=document.querySelector("#playerText");

const computerText=document.querySelector("#computerText");

const resultText=document.querySelector("#resultText");


const choiceBtns=document.querySelectorAll(".choiceBtn");



let player;
let computer;
let result;
 

choiceBtns.forEach(button =>button.addEventListener("click", ()  =>{


player=button.textContent;

computerTurn();
 playerText.textContent="Player"+" "+player;
computerText.textContent="Computer"+" "+computer;

resultText.textContent=checkwinner();


}));
 function computerTurn()
 {
    const randNum=Math.floor(Math.random()*3)+1;

    switch(randNum)
    {
        case 1:
            computer="Rock";
            break;



            case 2:
            computer="Paper";
            break;

            case 3:
            computer="Scissor";
            break;
    }
 }




function checkwinner()
{
if(player==computer){
return "draw!!!!!";

}
else if(computer=="Rock")
{
    return (player=="Paper") ? "YOU WIN":"YOU LOSE";

}

else if(computer=="Paper")
{
    return (player=="Scissor") ? "YOU WIN":"YOU LOSE";
    
}
else if(computer=="Scissor")
{
    return (player=="Rock") ? "YOU WIN":"YOU LOSE";
    
}




}























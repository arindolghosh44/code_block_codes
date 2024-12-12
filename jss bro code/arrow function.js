//compact alternatives to a traditional functional expression
/*const g=(username,age,c)=>console.log("bro code",username,age,"you are a ",c);
g("you",18,"coder");

const percent =(x,y)=>x/y*100;
console.log('${percent(37,50)}%')

let grades=[100,50,90,60,80,70];

grades.sort((x,y)=>y-x);
grades.forEach((element)=>console.log(element));
*/




let cards=["A","1","2","3","4","5","Q","J","K"];
sh(cards);


cards.forEach(cards=>console.log(cards));
console.log(cards);
function sh(array)
{
    let c=array.length;

while(c!=0)
{
    let r=Math.floor(Math.random()*array.length);
    c-=1;


let temp=array[c];
array[c]=array[r];
array[r]=temp;
}
return array;
}













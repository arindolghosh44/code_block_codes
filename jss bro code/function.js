/*startprogram();

function startprogram()
{
    let username="bro";
    let age=21;
    happy(username,age);
}


function happy(u,a)

{
    console.log("happy birthday to you ",u);
    console.log("you are ",a,"years old");
}
*/



/*let area,width,height;


width=window.prompt("Enter width:");
height=window.prompt("Enter height");

area=getarea(width,height);

console.log("Area is",area);
function getarea(width,height)
{
    return width*height;
}*/




/*let adult=check(21);
console.log(adult);


function check(age)
{


    return age>=18 ?true:false;
}*/



// let = variable are limited to block scope,its do not change the windows property

//var= limited to a function, its change the windows property

 dosomething();
function dosomething(){
for(var i=1;i<=3;i+=1){
    //console.log(i);
}
console.log(i);
}


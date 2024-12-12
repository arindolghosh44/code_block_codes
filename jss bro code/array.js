/*let fruit=["appel","lemon","banana"];

console.log(fruit);
fruit[2]="coconut";
console.log(fruit);
fruit.push("lemon1");// add atlast
//fruit.pop();
fruit.unshift("mango");//add at beginning
//fruit.shift() remeoved element from beginning



let l=fruit.length;
let i=fruit.indexOf("kiwi");
console.log(i);
console.log(fruit);
console.log(l);
*/
/*let prices=[5,10,15,20,25];
/*for(let i=prices.length-1;i>=0;i--)
{
    console.log(prices[i]);
}


for(let p of prices)
{
    console.log(p);
}*/

/*let drink=["coco cola","thumsup","mirinda"];
drink=drink.sort();

for(let fruit of drink)
{
    console.log(fruit);
}
p=drink.sort().reverse();
for(let fruit of p)
{
    console.log(fruit);
}*/



// array for-each()= excute a provide call back function once for each 
// array element


/*let students=["preteek","bishal","animash"];
students.forEach(capa);
students.forEach(print);
function capa(element,index,array)
{
    array[index]=element[0].toUpperCase()+element.substring(1);//thats change the array[0] element to uppercase only the first letter
}



function print(element)
{
    console.log(element);
}*/








//===================================================================
//     specal case

/*let student=["preteek","bishal","animash"];
student.forEach(capa);

function capa(element,index,array)
{
    array[index]=element[2].toUpperCase()+element.substring(3);//thats change the array[0] element to uppercase only the first letter
}


console.log(student[2]);*/






//array.map()=execute a provided callback function 
///                  once for each array element and 
//                   creates a new array



/*let num=[1,2,3,4,5,6];
//let sq=num.map(sq);
let cub=num.map(cubs);


cub.forEach(print);


/*function sq(element)
{
    return Math.pow(element,2);

}
function cubs(element)
{
    return Math.pow(element,3);
    
}


function print(element)
{
    console.log(element);
}*/




//array.filter()=creates a new array with all elements that
// pass the test provided by a function

/*
let age=[18,19,20,21,22,23,24];
let ad=age.filter(check);
ad.forEach(print);


function check(element)
{
    return element>=18;
}

function print(element)
{
    console.log(element);
}


*/







//array.reduce()=reduces an array to a single value

/*let prices=[5,10,20,30,45,60];
let total=prices.reduce(check);

console.log("the total is:",total);

function check(total,element)
{
    return total+element;
}*/


//=========================================



//                     SORTING



let gra=[100,50,90,60,80,70];
let gra1=[100,50,90,60,80,70];
 let g=gra.sort(decendingsort);


 let g1=gra1.sort(asencendingsort);
 g1.forEach(print);
 
g.forEach(print);


function decendingsort(x,y)
{
return y-x;

}

function asencendingsort(x,y)
{
return x-y;

}

function print(element)
{
    console.log(element);
}


























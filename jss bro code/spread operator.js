//spread operator=allows an iterable such as an string to be expended i place
//                where zero or more arguments are expected
//                unpack the elements


/*let user="bro code";
let number=[1,2,3,4,5,6,7,8,9];
console.log(...user);// this ... three dots unpack the elements


m1=Math.max(number);// without using spread operator
console.log(m1);





m=Math.max(...number);// with   using spread operator
console.log(m);*/




/*let c1=["spongibob","patrik","sandy"];
let c2=["squidard","prettek","plankton"];

c1.push(...c2);
console.log(...c1);*/



//rest paramenters=represent an indefinite number of parameter 
// (packs argumens into an array)



/*let a=1;
let b=2;
let c=3;
let d=4;
let e=5;
let f=6;


console.log(sum(a,b,c,d,e,f));


function sum(...numbers)
{

let total=0;
for(let t of numbers)
{
    total+=t;
}
return total;
}*/

// callback=a function passed as an argument 
//           to another function


/*let total=sum(2,3);

displayconsole(total);

function sum(x,y)
{
    let r=x+y;
    return r;
}

function displayconsole(o)
{
    console.log(o);
}
*/

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


sum(2,3,displayDOM,displayconsole);


function sum(x,y,f,p)
{
    let r=x+y;
    f(r);
    p(r);
}







function displayconsole(o)
{
    console.log(o);
}




function displayDOM(output)
{
    document.getElementById("mylabel").innerHTML=output;
}





































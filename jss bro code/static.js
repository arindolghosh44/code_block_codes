//class car{
/*    static numberofcars=0;
   constructor(model){
   this.model=model;
   car.numberofcars+=1;
   
   




   }
    static startrace()
{
    console.log("3........2..........1.go");
}
   
   
   }
   const c1=new car("woll");
   
   
   const c2=new car("woll1");
   const c3=new car("woll2");
   
   
   console.log(c1.numberofcars);
   
   
   
   console.log(c2.numberofcars);
   
   console.log(c3.numberofcars);
   


c1.startrace();

*/
//that is not work

//this is work with static keyword
class car{
 static numberofcars=0;
constructor(model){
this.model=model;
car.numberofcars+=1;

 

}

static startrace()
{
    console.log("3........2..........1.go");
}

}
const c1=new car("woll");


const c2=new car("woll1");
const c3=new car("woll2");


console.log(car.numberofcars);

car.startrace();

/*console.log(c2.numberofcars);

console.log(c3.numberofcars);




*/




//synchronous code= In  an ordered sequence
//            step by step linear instruction


/*console.log("START");
console.log("This step is synchrouns");
console.log("End");


//asynchronous code= Out of sequence.
//            Ex.Access a database
//             fetch a file
//          Tasks that time



console.log("START");
setTimeout(() =>console.log("This step is asynchrouns"),3000);
console.log("End");

*/



//==============================================================
//console.time()=Starts a timer you can use to track how long a operation
//             takes gives each timer a unique name

//start
console.time("Response time");


//alert("click the OK button");
setTimeout(()  =>console.log("hello"),3000);

//end
console.timeEnd("Response time");


















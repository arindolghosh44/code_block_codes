/*  promise=object that encaptuales the result of an asynchronous operation
let asynchronous methods return values like synchrous methods */


/*const promise= new Promise((resolve,reject) =>{


let fileloaded=false;
if(fileloaded)
{
    resolve("File loaded");
}
else{
    reject("File not loaded");
}

});
promise.then(value =>console.log(value))
.catch(error=>console.log(error));

*/


//=================================================================


/*const promise= new Promise(r => {

setTimeout(r,3000);

});


promise.then(() => console.log("Thanks for waiting"));

*/

//===========================================================

/*const wait= time => new Promise(r => {

    setTimeout(r,time);
    
    });
    
    
    wait(3000).then(() => console.log("Thanks for waiting"));

*/



//===============================================================
//async=makes a function return a promise

/*async function loadfile()
{
    let fileloaded=true;
    if(fileloaded)
    {
        return "File loaded";
    }
    else{
        throw "File not loaded";
    }
    
}


    loadfile().then(value =>console.log(value))
    .catch(error=>console.log(error));*/

//same to above

/*
     function loadfile()
{
    let fileloaded=true;
    if(fileloaded)
    {
        return Promise.resolve( "File loaded");
    }
    else{
        return Promise.reject( "File not loaded");
    }
    
}


    loadfile().then(value =>console.log(value))
    .catch(error=>console.log(error));
*/

    //same to above


   /*async function loadfile()
    {
        let fileloaded=true;
        if(fileloaded)
        {
            return Promise.resolve( "File loaded");
        }
        else{
            return Promise.reject( "File not loaded");
        }
        
    }
    
    
        loadfile().then(value =>console.log(value))
        .catch(error=>console.log(error));*/





//==========================================================
//await= makes an async function wait for a promise



async function loadfile()
{
    let fileloaded=true;
    if(fileloaded)
    {
        return "File loaded";
    }
    else{
        throw "File not loaded";
    }
    
}
async function startProcess()
{
    try{
        let message=await loadfile();
        console.log(message);

    }
    catch(r)
    {
        console.log(r);
    }
}

startProcess();
    /*loadfile().then(value =>console.log(value))
    .catch(error=>console.log(error));*/
    //using await function we  can eleminated this term








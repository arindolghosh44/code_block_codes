let username="Bro";
let userInbox=0;

//login();

//instead of using login we can directly use this
/*displayUsername();
displayUserinbox();


function login(){

displayUsername();
displayUserinbox();
}


function displayUsername(){


    console.log("welcome",username);
}
function displayUserinbox(){


    console.log("welcome",userInbox);
}
*/
//================================================================
//this gets wrong output we cannot do it
/*displayUsername();
displayUserinbox();


function login(){

displayUsername();
displayUserinbox();

function displayUsername(){


    console.log("welcome",username);
}
function displayUserinbox(){


    console.log("welcome",userInbox);
}



}*/

//if we use the upper code properly we need to use login(); as follows


login();
function login(){

    displayUsername();
    displayUserinbox();
    
    function displayUsername(){
    
    
        console.log("welcome",username);
    }
    function displayUserinbox(){
    
    
        console.log("welcome",userInbox);
    }
}
//=============================================================
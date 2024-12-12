const b=document.querySelector("#mybutton");
const i=document.querySelector("#myimage");


/*
b.addEventListener("click",() =>{


if(i.style.display =="none")
{
    i.style.display="block";
}

else{
    
        i.style.display="none";
    
    
    
}


})*/
b.addEventListener("click",() =>{


    if(i.style.visibility =="hidden")
    {
        i.style.visibility="visible";
    }
    
    else{
        
            i.style.visibility="hidden";
        
        
        
    }
    
    
    })
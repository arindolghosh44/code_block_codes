//object=A group of properties and method properties
/*
const car={

model:"Mustang",
color:"red",
year:2023,

drive: function(){

    console.log("You drive the car");
},

brack: function()
{
    console.log("You stop on the break");
}
}

const car2={

    model:"Bulloro",
    color:"green",
    year:2023,
    
    drive: function(){
    
        console.log("You drive the car2");
    },
    
    brack: function()
    {
        console.log("You stop on the break2");
    }
    }
    









console.log(car.model);
console.log(car.color);
console.log(car.year);


car.drive();
car.brack();



console.log(car2.model);
console.log(car2.color);
console.log(car2.year);


car2.drive();
car2.brack();



*/



//========================
//this=reference to a particular object
//the object depends on the imediate context














const car={

    model:"Mustang",
    color:"red",
    year:2023,
    
    drive: function(){
    
        console.log("You drive the car",this.color,"thats great");
    },
    
    brack: function()
    {
        console.log("You stop on the break");
    }
    }
    
    const car2={
    
        model:"Bulloro",
        color:"green",
        year:2023,
        
        drive: function(){
        
            console.log("You drive the car2");
        },
        
        brack: function()
        {
            console.log("You stop on the break2");
        }
        }
        
    
    
    
    
    
    
    
    
    
    console.log(car.model);
    console.log(car.color);
    console.log(car.year);
    
    
    car.drive();
    car.brack();
    
    
    
    console.log(car2.model);
    console.log(car2.color);
    console.log(car2.year);
    
    
    car2.drive();
    car2.brack();
    

this.name="hello";
console.log("bro",this.name);

window.name="hello";
console.log("bro",window.name);






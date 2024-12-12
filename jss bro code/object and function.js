class car{
constructor(model,year,color)
{
    this.model=model;
    this.year=year;
    this.color=color;
}

}





const c1=new car("mustang",2023,"red");
const c2=new car("corvette",2024,"blue");
const c3=new car("Lambo",2022,"yellow");



display(c1);


function display(car)
{
    console.log(car.model);

    console.log(car.color);
    
    console.log(car.year);
    
}


display1(c2);


function display1(car)
{
    console.log(car.model);

    console.log(car.color);
    
    console.log(car.year);
    
}




Change(c3,"white");

display2(c3);
function Change(car,color){
    car.color=color;
}

function display2(car)
{
    console.log(car.model);

    console.log(car.color);
    
    console.log(car.year);
    
}














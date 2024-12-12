class car{
    constructor(model,year,color)
    {
        this.model=model;
        this.year=year;
        this.color=color;
    }

drive()
{
    console.log("you drive the",this.model,"car");
}

    }
    const c1=new car("mustang",2023,"red");
    const c2=new car("corvette",2024,"blue");
    const c3=new car("Lambo",2022,"yellow");
    const c4=new car("ferreri",2025,"green");
    const cars=[c1,c2,c3,c4];


  /*  console.log(cars[1].model);

console.log(cars[2].year);


*/

/*cars[0].drive();
cars[1].drive();
cars[2].drive();

*/

Me(cars);


function Me(cars)
{
    for(const p of cars )
    {
        p.drive();
    }
}











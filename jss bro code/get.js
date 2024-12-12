//get=binds an object property to a function
//when that property is accessed

class car{
constructor(power){
    this._gas=25;
    this._power=power;
}//now that _gas method noone can changed because of using get method
get power(){
    return (this._power);
}
get gas()
{
    return (this._gas);
}

set gas(value)//using setter method one can changed the gas value
{
    if(value>50)
    {
       // this._gas=value;
       value=50;
    }
    else if(value<0)
    {
        value=0;
    }
}


}

let c=new car(400);
c.gas=12222222222222222222222222;
console.log(c.power);
console.log(c.gas);








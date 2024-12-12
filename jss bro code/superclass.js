//super=refers to the parent class
//commonly used to invoke the constructor of a parent class
/*class Animal{
   
}





class rabbit extends Animal{
constructor(name,age,runspeed)
{
    this.name=name;
    this.age=age;
    this.runspeed=runspeed;
}

}



class fish extends Animal{
    constructor(name,age,swimpeed)
    {
        this.name=name;
        this.age=age;
        this.swimpeed=swimpeed;
    }
    
    
    }





    class hawk extends Animal{
        constructor(name,age,flypeed)
{
    this.name=name;
    this.age=age;
    this.flypeed=flypeed;
}
        
        
        }

const r=new rabbit("hobbi",56,2);
const f=new fish("runny",23,89);
const h=new hawk("rocky",2333,78);

console.log(r.age);
console.log(r.name);
console.log(r.runspeed);

//its give an error because we use         this.name=name;
   //                                        this.age=age;
//                   in every class


*/
//================================================
//to resoled the solution we use superclass

class Animal{
    constructor(name,age)
    {
        this.name=name;
        this.age=age;
       
    }
}





class rabbit extends Animal{
constructor(name,age,runspeed)
{
   super(name,age);
    this.runspeed=runspeed;
}

}



class fish extends Animal{
    constructor(name,age,swimpeed)
    {
        super(name,age);
        this.swimpeed=swimpeed;
    }
    
    
    }


    class hawk extends Animal{
        constructor(name,age,flypeed)
{
    super(name,age);
    this.flypeed=flypeed;
}
        
        
        }

const r=new rabbit("hobbi",56,2);
const f=new fish("runny",23,89);
const h=new hawk("rocky",2333,78);

console.log(r.age);
console.log(r.name);
console.log(r.runspeed);




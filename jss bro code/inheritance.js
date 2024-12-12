class Animal{
    alive=true;
    eat()
{
    console.log("this",this.name,"is alive");
}
sleep()
{
    console.log("this",this.name,"is sleeping");
}
}





class rabbit extends Animal{
//alive=true;
name="rabbit";
/*eat()
{
    console.log("this",this.name,"is alive");
}
sleep()
{
    console.log("this",this.name,"is sleeping");
}*/
run()
{
    console.log("this",this.name,"is running");
}


}



class fish extends Animal{
   // alive=true;
    name="fish";
   /* eat()
    {
        console.log("this",this.name,"is alive");
    }
    sleep()
    {
        console.log("this",this.name,"is sleeping");
    }*/
    swim()
    {
        console.log("this",this.name,"is swiming");
    }
    
    
    }





    class hawk extends Animal{
        //alive=true;
        name="hawk";
       /* eat()
        {
            console.log("this",this.name,"is alive");
        }
        sleep()
        {
            console.log("this",this.name,"is sleeping");
        }*/
        fly()
        {
            console.log("this",this.name,"is flying");
        }
        
        
        }

const r=new rabbit();
const f=new fish();
const h=new hawk();


console.log(h.alive);
f.eat();
h.fly();









//annynomous objects=Objects without a name 
//                      Not directly refenced

//                      less syntex ,No need for unique name
/*
class cards{

constructor(value,suit)
{
    this.value=value;
    this.suit=suit;
}
}


let c1=new cards("A","hearts");
let c2=new cards("A","spades");

let c3=new cards("A","Diamonds");

let c4=new cards("A","Clubs");

let c5=new cards("A","hearts");

let c6=new cards("y","spades");

let c7=new cards("A","Diamonds");

let c8=new cards("A","clubs");



let c=[c1,c2,c3,c4,c5,c6,c7,c8];

console.log(c1.value+c1.suit);
console.log(c[5].value+c[3].suit);
*/
//==================================================

class cards{

    constructor(value,suit)
    {
        this.value=value;
        this.suit=suit;
    }
    }
    
    
    
    
    
    
    let c=[new cards("A","hearts"),
new cards("A","spades"),
    
    new cards("A","Diamonds"),
    
    new cards("A","Clubs"),
    
    new cards("A","hearts"),
    
    new cards("y","spades"),
    
    new cards("A","Diamonds"),
    
    new cards("A","clubs")
    ];
    
    //console.log(c1.value+c1.suit); we cannot use this array like this
    console.log(c[5].value+c[3].suit);
c.forEach(card => console.log(card.value,card.suit));




    
    
    
    
    
    
    
    
    
    
    
    
    
    












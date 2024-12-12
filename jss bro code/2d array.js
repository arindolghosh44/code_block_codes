let fruit=["appeal","orange","banana"];
let veg=["carrot","onion","potatoes"];
let meats=["eggs","chicken","fish"];

let gro=[fruit,veg,meats];


gro[2][2]="steak";


for( let list of gro)
{
    for(let f of list)
    {
        console.log(f);
    }


}
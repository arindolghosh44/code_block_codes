//The idea behind a module is this is a a file of reusable code
//we can import the section of prewritten code to use
//Great for any general utility values and functions
//separate chapter of a book








 /*import {PI,getArea,getcircumference} from "./math_util(module).js";


console.log(PI);
console.log(getcircumference(20));
*/

//=========================================================================
//same above work
import * as m from  "./math_util(module).js";

console.log(m.PI);
console.log(m.getcircumference(20));




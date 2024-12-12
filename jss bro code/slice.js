//slice()=extracts a section of a string and return it as a new string,
// without modifying the original string


let fullname="sonp dogg";
let firstname,lastname;

/*firstname=fullname.slice(0,3);
lastname=fullname.slice(4);
*/

firstname=fullname.slice(0,fullname.indexOf(" "));//it print the string and stop when an empty space is encounter

lastname=fullname.slice(0,fullname.indexOf(" ")+1);

console.log(firstname);
console.log(lastname);
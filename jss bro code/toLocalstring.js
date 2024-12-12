//toLocalstring=return a string with a language
// sensitive representation of this number

//number.toLocalstring(locale,{options});
 

//'locale'=specify that language (undefined = degfault set in broser)
//'option'=object with formatting options

//let mynum=123456.8907;
let t=100;
let p=100;
//mynum=mynum.toLocaleString("en-US",{style:"currency",currency:"USD"});// us english

//mynum=mynum.toLocaleString("hi-IN",{style:"currency",currency:"INR"});// Hindi
//mynum=mynum.toLocaleString("de-DE",{style:"currency",currency:"EUR"});// standard german
//t=t.toLocaleString(undefined,{style:"percent"});
p=p.toLocaleString(undefined,{style:"unit" , unit:"celsius"})
//console.log(t);
console.log(p);
//console.log(mynum);
/*console.log(mynum);
console.log(mynum);*/
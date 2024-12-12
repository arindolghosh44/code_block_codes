let username="bro code";
let phno="123-456-7890";
console.log(username.length);
console.log(username.charAt(0));
console.log(username.indexOf("o"));
console.log(username.lastIndexOf("o"));/* its print the elements number count that is not visisted*/
username=username.trim();
username=username.toUpperCase();
username=username.toLowerCase();

phno=phno.replaceAll("-",".");
console.log(phno);
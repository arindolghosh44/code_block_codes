//constructor=a special method of a class
//            accepts arguments and assigns properties


class student{
constructor(name,age,gpa)
{


    this.name=name;
    this.age=age;
    this.gpa=gpa;
}


study()
{
    console.log(this.name,"is studying");
}


}

const s=new student("song",30,56.89);
const s2=new student("songale",33,5566.89);

console.log(s2.age);
console.log(s2.gpa);
s.study();

console.log(s.age);
console.log(s.gpa);
s.study();




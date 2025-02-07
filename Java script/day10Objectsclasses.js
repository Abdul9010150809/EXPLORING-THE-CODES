/*Object is an entity having state and behaviour
It has an property called prototype.
We can set it by __proto__
Both object and prototype should be same to use object */
const student={
    name:"Ayub",
    marks:90,
    printMarks: function () {
        console.log("Marks are :",this.marks);
    }
};
console.log(student);
console.log(student.name);
console.log(student.marks);
const employee = {
    calc() {
        console.log("Tax is 10%");
    },
};
const Ayub = {
    salary:100,
    calc() {
        console.log("Tax is 20%");
    },
};
Ayub.__proto__ = employee;
console.log(Ayub);
console.log(Ayub.calc());
//If same fnc is present in the class then it is called rather than others
//Classes is a program template to create objects
class Cars {
    constructor(brand,prices){
        console.log("Hii",prices);
        this.brand=brand;
        this.prices=prices;
    }
    start(){
        console.log("start");
    }
    stop(){
        console.log("stop");
    }
    setprice(price) {
        this.price=price;
    }
}
let ashoka = new Cars("Hello",11);
let ashokas = new Cars("Luxury",12);
console.log(ashoka);
console.log(ashokas.brand);
ashoka.setprice("high");
console.log(typeof(ashoka));
/*constructor is automatically invoked by new,
Its generate use to intialize objects.
by default  a constructor is created.but we can create constructor by the name of constructor only as u observed above.

Inheritence-It is the passing down properties from parent to child class
If parent and child class has same methode,then child method will be used.
*/
class Parent{
    constructor(name){
        console.log("Enter parent constructor");
        this.species="homo sapiens";
        this.name=name;
    }
    eat(){
        console.log("Eat");
    }
    sleep(){
        console.log("Sleep");
    }
}
class Engineer extends Parent{
    work(){
        console.log("solve problems,build ur career");
    }
    constructor(branch,name){
        console.log("Enter child constructor");
        super(name);
        this.branch=branch;
        console.log("Exit child constructor");
    }
}
let rev=new Engineer("CSE","AYUB");
console.log(rev);
console.log(rev.sleep);
/*Super keyword
It is used to to call constructor of its parent class to acces parents properties and methods
*/
//P1
class User{
    constructor(name,email){
    this.name=name;
    this.email=email;}
    viewdata(){
        console.log("data = ",Data);
    }
}
let Data="secret information";
let student1 =new User("Ayub","ayub123");
let student2 =new User("Sammu","samm123");
console.log(student1);
console.log(student1.viewdata());
console.log(student2);
console.log(student2.viewdata());
//P2
class Admin extends User{
    constructor(name,email){
        super(name,email);
    }
    editdata(){
        Data="sone value";
    }
}
let Admin1 =new Admin("ayub","123@gmail.com");
console.log(Admin1);
/*Error handling
try catch
try{
..normal code
}catch(err){//error obj
...handling error
}
*/
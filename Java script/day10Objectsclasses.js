/*Object is an entity having state and behaviour
It has an property called prototype.
We can set it by __proto__
Both object and prototype should be same to use object */
const student={
    name:"Ayub",
    marks:90,
    printMarks: function () {
        console.log("Marks are :",this.marks);
    },
};
console.log(student);
console.log(student.name);
console.log(student.marks);
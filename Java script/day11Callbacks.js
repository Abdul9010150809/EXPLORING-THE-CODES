/*Call backs
async await>>promise chains>>callback hell
synchronized->code runs in particular sequence of instructions given
asynchronized->sometimes at synchronized,some imp instructions get blocked due to some previous instructions
It executes next instructions immediately and doesnt block the flow
*/
function hello(){
    console.log("Hello");
}
hello();
setTimeout(hello,1000) //timeout
console.log("one");
console.log("two");
/*setTimeout(() => {
    console.log("HELLO");
},4000); setTimeout in the form of fnc*/
/*Callback-It is a fnc passed as an argument to another fnc*/
console.log("Using callbacks");
function sum(a,b) {
    console.log(a + b);
}
function calculator(a,b,sumcall) {
    sumcall(a,b);
}
calculator(1,2,sum);
/*We can perform call back by separately calling as shown in the above method.And in a one method as 
shown in the below method*/
calculator(1,2,(a,b)=>{
    console.log(a+b);
})
/*Callback hell-Nested callbacks stacked below one another forming a pyramid like stucture */
function getdata(dataid,getnextdata) {
    setTimeout(() => {
        console.log(dataid,"data");
        if (getnextdata) {
            getnextdata();
        }
    },2000);
}
//I want to get data one after another data
getdata(1,()=>{
    console.log("data 2 is loading");
    getdata(2,()=>{
        console.log("data 3 is loading");
        getdata(3);
    })
});
/*Promises -
It is for eventual completion of task.It is an obj in js.
Syn:let promise=new Promise((resolve,reject)=>{...})
It has 3 stages:pending,fullfilled,rejected{fullfilled means resolved}

let promise=new Promise((resolve,reject)=>{
    console.log("Hii,This is a prom");
    //resolve(123);
    reject("error");
});
console.log(promise);*/
function getdata(dataid,getnextdata) {
    return new Promise((resolve,reject) => {
    setTimeout(() => {
        console.log(dataid,"data");
        resolve("Successful");
        if (getnextdata) {
            getnextdata();
        }
    },5000);
});
}
let promised=getdata(123);
console.log(promised);
/*Promises has two methods-.then() and .catch()
promise.then((res)=>{...})
promise.catch((err)=>{..})
*/
const getPromise= () =>{
return new Promise((resolve,reject)=>{
    console.log("Hii,This is a prom");
    reject("error");
    });
}
let promise = getPromise();
promise.catch((err)=>{
console.log("Promise not fullfilled",err)
});
//Similarly for then we use resolve in above fnc and promise.then at outside fnc
//Promise chain
function async() {
    return new Promise((resolve,reject) => {
    setTimeout(() => {
        console.log("data");
        resolve("Successful");
    },6000);
});
}
let p1=async();
p1.async((res))

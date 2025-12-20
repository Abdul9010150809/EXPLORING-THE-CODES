/*External event handling
*/
btn1.ondblclick= () =>{
console.log("U clicked a button");
let a=25;
a++;
console.log(a);//26
}
let div1=document.getElementById("div1");
div1.onmouseout =() =>{
alert("Hii");
}
/*priority is event handling in js than inline
Writing an event again executes the last event
Event object->
It is a special object that has details about event
It has properties.They are e.target,e.type,e.clientX,e.clientY
e means event
*/
btn1.ondblclick= (evt) =>{
    console.log(evt);
    console.log(evt.target);
    console.log(evt.type);
    console.log(evt.clientX);
    console.log(evt.clientY);
}
/*Event listeners-we main access multiple events for a single tag
node.addEventListener(event,callback)
node.removeEventListener(event,callback)
imp:the callback reference should be same to remove
*/
btn2.addEventListener("click",() =>{
    alert("You are using evnt by alert")
})
btn2.addEventListener("click",(evt) =>{
    confirm("You are using evnt handler by confirm");
    console.log(evt.target);
    console.log(evt.type);
})
btn2.addEventListener("click",() =>{
    console.log("You are using evnt by alert" )
})
btn2.addEventListener("click",() =>{
    console.log("You are using evnt by alert 2")
})
let click3 = ("click",() =>{
    console.log("You are using evnt by alert 3")
})
btn2.addEventListener("click",() =>{
    console.log("You are using evnt by alert 4")
})
//To remove first we have to save in a const or a variable
btn2.removeEventListener("click",click3 =>{})
//Change mode(P1)

let cmode =document.querySelector("#btn3");
let curr="light";
/*by using style we directyle write
    document.querySelector("body").style.backgroundColor="black";
    by using classes and editing in css
    document.querySelector("body").classList.add("dark");
    */
cmode.addEventListener("click",()=>{
    if(curr == "light"){
        curr ="dark";
        document.querySelector("body").classList.add("dark");
        document.querySelector("body").classList.remove("light");
    }
    else{
        curr ="light";
        document.querySelector("body").classList.add("light");
        document.querySelector("body").classList.remove("dark");
    }
    console.log(curr);
})

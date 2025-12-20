  //Window object is global with lots of properties and methods
window.console.log("Ayub");
  //DOM document object model
  //console.log=print
  //console.dir = to observe document properties
console.dir();
document.body.childNodes[1].innerText="Ayub";
//DOM manipulation
/*Selecting my ID
document,getElementById("myId")
Selecting my class
document,getElementByClassName("myclass")
Selecting with tag
document,getElementByTagname("p")
*/
let heading=document.getElementById("aw");
console.dir(heading);
let classes=document.getElementsByClassName("ff");
console.dir(classes);
let tags=document.getElementsByTagName("p");
console.dir(tags);
/*Query selector
document.querySelector("myId / myClass /tag")
returns first element
document.querySelectorAll("myId / myClass /tag")
returns a node List*/
let fas=document.querySelector(".gg");
console.log(fas);
console.dir(fas);
let fs=document.querySelectorAll("h5");
console.log(fs);
console.dir(fs);
/*Properties of DOM manipulation
tagName : returns tag for element nodes
innerText
innerHTML
textContent
*/
console.log(fas);
console.log(fas.tagName);
console.log(fas.innerText);
console.log(fas.innerHTML);
console.log(fas.textContent);
let divv=document.querySelector("ul");
console.log(divv);
console.log(divv.innerText);
console.log(divv.innerText="<li>inner list</li>");
//The changed was observed in elements in website
//We also change the style by running
//The running changes doesnt affect the the text code
let dive =document.querySelector("h5");
console.log(dive);
console.log(dive.innerText= "Ayuub");
//textContent used to obserrve the hidden text
let der=document.getElementsByTagName("h6");
//der.innerText="hii";
console.log(der.textContent);
console.log(dive.innerText);
//Append the text
dive.innerText = dive.innerText + " He likes everyone";
console.log(dive.innerText);
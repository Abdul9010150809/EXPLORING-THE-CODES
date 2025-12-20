/*DOM mainpulation part 2
getAttribute(attr) //to get attribute value
setAttribute(attr,value) to set attribute value
*/
let div = document.querySelector("div");
//console.log(div);
let id = div.getAttribute("id");
console.log(id);
let names = div.getAttribute("name");
console.log(names);
let newname =div.setAttribute("name","ayub");
console.log(div);
//node style
div.style.fontSize="26px";
div.style.backgroundColor="darkblue";
//Creating a element
let newD = document.createElement("button");
newD.innerText="Click here";
console.log(newD);
/*Insert elements
node.append(el)-adds at the end of noddle(inside)
node.prepend(el)-adds at the start of noddle(inside)
node.before(el)-adds before the node(outside)
node.after(el)-adds after the node(outside)
*/
let append =div.append(newD);
//console.log(append);
let p=document.querySelector("p");
let h2=document.querySelector("h2");
let h4=document.querySelector("h4");
let prepend =div.prepend(p);
let before=div.before(h2);
let after=div.after(h4);
//to delete we use node.remove()
h2.remove();
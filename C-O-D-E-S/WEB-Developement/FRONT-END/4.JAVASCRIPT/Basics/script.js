//---> 1) Ways to Print in javascript
/*
console.log("Hello World");
alert("Hii");
document.write("This is used to write in the web page.");
*/


//---> 2) Javascript console API
/*
console.log("Hello World");
console.warn("This is warning");     //-> this is used to give warning in console
console.error("This is an error");   //-> this is used to depict the error in console
*/


//---> 3) VARIABLES
/*
variables are containers to store data values-> 
declared as 'var'

var num1 = 17;
var num2 = 29;

console.log(num1+num2);
*/


//---> 4) Data Types
/*
At high level, there are 2 types of data types
    1. Primitive Data types : Number, String, Boolean, Null, Undefined and Symbol
    2. Reference Data types : Arrays and Objects
*/

//-> a) Primitive Data types
/*
// Numbers  -> numerical values
var num1 = 17;
var num2 = 29.10;
console.log(num1);
console.log(num2);

// Strings  -> collection of characters
var str1 = "This is a string 1";
var str2 = "This is a string 2";
console.log(str1);
console.log(str2);

// Boolean  -> true and false values
var a = true;
var b = false;
console.log(a);
console.log(b);

// Undefined  -> it is undefined
var und;
console.log(und);   //-> this will print 'undefined'

// Null  -> this is a null value (nothing is present in this)
var a = null;
console.log(a);
*/


//-> b) Reference Data types
/*
// Objects   -> collection of (key,value) pair
var marks = {
    pranav : 97,
    shravanee : 100
}
console.log(marks);

// Arrays   -> collection of all data type elements
var arr = [1,2,3,4,5,6,7,8,9,10];
console.log(arr);
*/


//---> 5) Operators

//-> a) Arithmetic Operators
/*
var a = 17;
var b = 29;
document.write("The value of a+b is ",a+b); 
document.write("The value of a-b is ",a-b); 
document.write("The value of a*b is ",a*b); 
document.write("The value of a/b is ",a/b); 
*/

//-> b) Assignment Operators
/*
var b = 29;
var c = b;    //-> we are assigning the value of b to c.
console.log(c);
*/

//-> c) Comparison Operators
/*
var a = 17;
var b = 29;
console.log(a == b);   //-> this will print 'false' as a is not equal to b
console.log(a >= b);
console.log(a <= b);
console.log(a > b);
console.log(a < b);    //-> this will print true as a is less than b
*/

//-> d) Logical Operators
/*
console.log(true && true);   //-> logical 'AND' operator
console.log(true && false);
console.log(true && true);
console.log(false && false);

console.log(true || true);   //-> logical 'OR' operator
console.log(true || false);
console.log(true || true);
console.log(false || false);

console.log(!false);       //-> logical 'NOT' operator
console.log(!true);
*/


//---> 6) Functions
/*
function avg(a,b){
    c = (a+b)/2;

    return c;
}

c1 = avg(17,29);
c2 = avg(17,33);

console.log(c1);
console.log(c2);
*/


//---> 7) Conditionals 

//-> Single if statement 
/*
var age = 17;
if(age >= 18){
    console.log("You are a teen.");
}
*/

//-> if-else statement
/*
var age = 17;
if(age >= 18){
    console.log("You are a teen.");
}
else{
    console.log("You are a kid.");
}
*/

//-> if-else ladder
/*
var age = 17;
if(age >= 30){
    console.log("You are a Adult.");
}
else if((age >= 18) && (age < 30) ){
    console.log("You are a Teen.");
}
else{
    console.log("You are a kid.");
}
*/


//---> 8) Loops

//-> a) 'for' loop
/*
var arr = [1,2,3,4,5];
console.log(arr);

for(var i=0 ; i<arr.length ; i++){
    console.log(arr[i]);
}
*/

//-> this is 'foreach' method which is used to iterate the array
/*
var arr = [1,2,3,4,5];
arr.forEach(function(element){
    console.log(element);
})
*/

//-> b) 'while' loop
/*
var arr = [1,2,3,4,5];
console.log(arr);
let i = 0;  //-> 'let' is used beacuse it works as a temporary variable and its scope is within the fuction.

while(i<arr.length){
    console.log(arr[i]);
    i++;
}
*/

//-> c) 'do-while' loop
/*
var arr = [1,2,3,4,5];
console.log(arr);
let i = 0;

do{
    console.log(arr[i]);
    i++;
}while(i<arr.length);
*/


//---> 8) Break-Continue Statement

//-> a) Break statement
/*
var arr = [1,2,3,4,5];
console.log(arr);

for(var i=0 ; i<arr.length ; i++){
    if(i == 2){
        break;    //-> when the value of i will become 2 it will break the loop
    }
    console.log(arr[i]);
}
*/

//-> b) Continue statement
/*
var arr = [1,2,3,4,5];
console.log(arr);

for(var i=0 ; i<arr.length ; i++){
    if(i == 2){
        continue;//-> when the value of i will become 2 it will skip this particular iteration and again continue further
    }
    console.log(arr[i]);
}
*/


//---> 9) Array Methods
/*
let myarr = ["Pranav", "Patil", 17, null, true];

// console.log(myarr.length);  //-> this will print the length of the array.
// myarr.pop();                //-> this will pop the last element from an array.
// myarr.push("29");           //-> this will push this element into the end of an array.
// myarr.shift();              //-> this will pop the first element from an array.
// myarr.unshift();            //-> this will push this element from the front of an array.
// myarr.toString();           //-> this will convert the array into an string.
// myarr.sort();               //-> this will sort the array according to dictionary after converting the array into string.
console.log(myarr);
*/


//---> 9) String Methods
/*
let mystring = "Pranav loves to play football but hates to play kabaddi.";

// console.log(mystring.length); 
// console.log(mystring.indexOf("play"));     //-> it returns the first index at which a particular string occurs. 
// console.log(mystring.lastIndexOf("play")); //-> it returns the index at which a particular string occurs at last. 
// console.log(mystring.slice(0,11));         //-> this will slice a particular string within the given index number and return it.
// mystring.replace("kabaddi", "chess");      //-> this will replace the first occurence of a particular string with another string.

console.log(mystring);
*/


//---> 10) Javascript Dates
/*
let mydate = new Date()

console.log(mydate)
console.log(mydate.getTime())      //-> it gives time in seconds
console.log(mydate.getFullYear())  //-> it gives the year
console.log(mydate.getDay())       //-> it gives the number of day from 1 to 7
console.log(mydate.getMinutes())   //-> it gives time in minutes
console.log(mydate.getHours())
*/


//---> 11) DOM Manipulation
/*
let elem = document.getElementById('click')  
console.log(elem)

let elemclass = document.getElementsByClassName('container')   //-> this will access a particular class
console.log(elemclass)
// elemclass[0].style.background = "Red";
elemclass[0].classList.add("bg-primary");  //-> this will add a css style to a particular element
elemclass[0].classList.add("text-success");

console.log(elem.innerHTML)   //-> this will access the html from the element
console.log(elem.innerText)   //-> this will access the text from the element

console.log(elemclass[0].innerHTML)   
console.log(elemclass[0].innerText)

tn = document.getElementsByTagName('div')
console.log(tn)
createdElement1 = document.createElement('p');
createdElement1.innerText = "This is a created and appended child element.";
tn[0].appendChild(createdElement1);

createdElement2 = document.createElement('b');
createdElement2.innerText = "This is a created and replaced child element.";
tn[0].replaceChild(createdElement2 , createdElement1);

sel = document.querySelector('.container')
console.log(sel)

sel = document.querySelectorAll('.container')
console.log(sel)
*/


//---> 12) Javascript Events
/*
function clicked(){
    console.log("Button was clicked.")
}

window.onload = function(){
    console.log("The document was loaded.")
}

firstContainer.addEventListener('click', function(){
    document.querySelectorAll('.container')[1].innerHTML = "<b> We have clicked </b>"
    console.log("Clicked on Container.")
})

firstContainer.addEventListener('mouseover', function(){
    console.log("Mouse on Container.")
})

firstContainer.addEventListener('mouseout', function(){
    console.log("Mouse out of Container.")
})

firstContainer.addEventListener('mouseup', function(){
    console.log("Mouse up when clicked on Container.")
})

firstContainer.addEventListener('mousedown', function(){
    console.log("Mouse down when clicked on Container.")
})
*/


//---> 13) Array functions

//-> Method 1 to write a function
/*
function sum(a,b){
    return a+b;
}
*/

//-> Method 2 to write a function
/*
sum = (a,b)=>{
    return a+b;
}
*/


//---> 14) SetTime and SetInterval

//-> SetTime 
/*
logkaro = ()=>{
    document.querySelectorAll('.container')[1].innerHTML = "<b> Set interval Fired!!! </b>"
    console.log("I am your log.")
}
setTimeout(logkaro,2000)   //-> this set a time after which the function is executed.
*/

//-> SetInterval
/*
logkaro = ()=>{
    document.querySelectorAll('.container')[1].innerHTML = "<b> Set interval Fired!!! </b>"
    console.log("I am your log.")
}
setInterval(logkaro,2000)   //-> this set a interval after which the function will be executing continously.
*/

//-> use clearInterval/clearTimeout to clear or cancel SetInterval/SetTimeout.


//-> 15) Javascript LocalStorage
/*
localStorage.setItem('name', 'Pranav')  //-> it is stored in the form of key-value pairs
localStorage
localStorage.getItem('name')
localStorage.removeItem('name')   //-> to remove one item from localStorage
localStorage.clear();             //-> to clear the localStorage  
*/


//-> 16) JSON ( Javascript Object Notation )
/*
obj = {name:"Pranav", length:17, a:{this:"that"}}
jso = JSON.stringify(obj);
console.log(typeof jso)
console.log(jso)

parsed = JSON.parse(`{"name":"Pranav","length":17,"a":{"this":"that"}}`)
console.log(typeof parsed)
console.log(parsed);
*/
 

//-> 17) Javascript DOM
/*
jso = JSON.stringify(obj);
console.log(typeof jso)
console.log(jso)

parsed = JSON.parse(`{"name":"Pranav","length":17,"a":{"this":"that"}}`)

*/
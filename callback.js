// function cb(){
//     console.log("hello inside cb " );
// }
// function fun (f){
//     console.log("inside fun ")
//  f();
// }
//  fun (cb);


// // loop  SIMPLE 

// console.log ("START");
// for(let x=2;x<=9;x++){
//     console.log (x);
// }
// console.log ("END ");


//DELAY OF EXECUTION BY TIMEOUT FUNCTION 

function fun(){
     for (x=1;x<=10;x++){
        console.log(x);

     }


}
console.log("START");
setTimeout(fun ,5000);   //this will create the delay of 5000ms which is 5 sec .....timeout work by callback function functionality 
console.log("END");


// console.log("START");
// setInterval(cb ,3000);   //this will create the delay of 5000ms which is 5 sec .....timeout work by callback function functionality 
// console.log("END");

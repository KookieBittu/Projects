let display=document.getElementById('display')

function appenddisplay(value){
    display.innerHTML+=value
    let length=display.innerHTML.length
    if(length>12){
        display.style.fontSize='2rem'
    }

    else if(length>8){
        display.style.fontSize='3rem'
    }

    else{
            display.style.fontSize='4rem'
    }
}

function calculate(){
    try{
        display.innerHTML=eval(display.innerHTML)
    }
    catch(error) {
        display.innerHTML='Chudi Bara'
    }
    
    
}

function allclear(){
    display.innerHTML=''
}
function signcng(){
    let change=display.innerHTML
    if(change>0){
        display.innerHTML=-change
    }
    else if(change<0){
        display.innerHTML=Math.abs(change)
    }
}


// function clear() {
//     // Get the display element
//     let display = document.getElementById('display');
    
//     // Check if display element exists and has a value
//     if (display && display.value.length > 0) {
//       // Remove the last character from the display's value
//       display.value = display.value.slice(0, -1);
//     }
//   }
  




function clear(){
    let buffer="0"
    screen.innerText = buffer;
    if(buffer.length === 1){
        buffer = '0';
    }
    else
    {
        buffer=buffer.substring(0,buffer.length - 1);
    }
    screen.innerText = buffer;
}
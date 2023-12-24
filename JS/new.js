'use strict';
//let message = 'Hello'
function ask(question, yes, no){
    if(confirm(question))
        yes();
    else
        no();
}

function showOk(){
    alert('You are confirm');
}

function showCancel(){
    alert("You canceled action");
}

ask("Are you ready?", showOk, showCancel);
'use strict'

let fruit = prompt('What fruit do you want?', 'apple');

let bag = {
    [fruit]: 5,
};

alert( `There is ${bag[fruit]} ${fruit} in the bag...` )
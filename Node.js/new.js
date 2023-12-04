let command = process.argv

let date = new Date()
let year = date.getFullYear()
let mon = date.getMonth() + 1
let day = date.getDate()
let data = `${year}:${mon}:${day}`

if(command[2] == 'current'){
    if(command.length == 3)
        console.log(data)
    if(command[3] == '--year' || command[3] == '-y')
        console.log(year)
    if(command[3] == '--month' || command[3] == '-m')
        console.log(mon)
    if(command[3] == '--day' || command[3] == '-d')
        console.log(day)
}
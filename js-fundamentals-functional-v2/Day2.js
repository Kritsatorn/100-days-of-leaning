// Array and obj
var ple = "FUCK";
var obj = [];

obj[3] = true;
obj.Heelo = "Hello"
obj[10] = false
console.log(obj)

// Game CHracter Exercise
// create obj
var game = {}

game.murder = "???"
game["weapons"] = ["laser", "drinks", "bazooka"]

// Create Array fron bracket and dot notation

var clue = []

clue[1] = "Blood"
clue.suspect = "Mrs. White"
clue[10] = "Blod split"
console.log("clue", clue)

// destructuring
const x = 0

//didnt work
// x = 1

const j = {
    x: 0
}
j.x = 3
console.log(j)

// destructuring challengr
const A = {
    "name": "nasty",
    "room": "kitchen",
    "weapon": "candlestick"
}

const {
    name,
    room,
    weapon
} = A
console.log(name, room, weapon)

// loop throught all properties

var suspects = [{
    name: "Rusty",
    color: "orange"
}, {
    name: "Miss Scarlet",
    color: "red"
}]

var [first, sec] = [suspects[0].color, suspects[1].color]
console.log(first, sec)

var [{
    color: first
}, {
    color: sec
}] = suspects
console.log(first, sec)

// for each 
//  THIS IS MAPPP , "EACH" NOT RETURN ANYTHINGGGGG!
const arr = ["A", "B", "X"]
const obj_A = {
        A: "HI",
        B: "Hello",
        X: "FUCK"
    }
    // _.each(arr, function(val) {
    //     console.log(val + " 5555");
    // })

console.log("FOR EACH")
const _ = {}
_.each = function(list, callback) {

    if (Array.isArray(list)) {
        for (let i = 0; i < list.length; i++) {
            callback(list[i])
        }
    }

    if (!Array.isArray(list)) {
        for (const properties in list) {
            callback(list[properties])
        }
    }

}

_.each(arr, function(val) {
    console.log("EEE" + val + "444")
})

_.each(obj_A, function(val) {
    console.log("EEE" + val + "444")
})


console.log("MAPPP")
_.map = function(list, callback) {

    if (Array.isArray(list)) {
        let result = []
        for (let i = 0; i < list.length; i++) {
            result.push(callback(list[i]));
        }
        return result
    }

    if (!Array.isArray(list)) {
        let result = []
        for (const properties in list) {
            result.push(callback(list[properties]))
        }
        return result
    }

}

console.log(_.map(arr, function(val) {
    return val + "444"
}))

console.log(_.map(obj_A, function(val) {
    return val + "444"
}))
// Function
// Function has Defination , Name , Invokation ,
// Argument(pass to function  , Invokation parts) / Parameter(varible in function , definition parts)
// Return ( things in return statement ) / Side effect ( such as console.log in function)

const videoData = [{
        name: "Miss Scarlet",
        present: true,
        rooms: [{
                kitchen: false
            },
            {
                ballroom: false
            },
            {
                conservatory: false
            },
            {
                "dining room": false
            },
            {
                "billiard room": false
            },
            {
                library: false
            },
        ],
    },
    {
        name: "Mrs. White",
        present: false,
        rooms: [{
                kitchen: false
            },
            {
                ballroom: false
            },
            {
                conservatory: false
            },
            {
                "dining room": false
            },
            {
                "billiard room": false
            },
            {
                library: false
            },
        ],
    },
    {
        name: "Reverend Green",
        present: true,
        rooms: [{
                kitchen: false
            },
            {
                ballroom: false
            },
            {
                conservatory: false
            },
            {
                "dining room": false
            },
            {
                "billiard room": false
            },
            {
                library: false
            },
        ],
    },
    {
        name: "Rusty",
        present: false,
        rooms: [{
                kitchen: false
            },
            {
                ballroom: false
            },
            {
                conservatory: false
            },
            {
                "dining room": false
            },
            {
                "billiard room": false
            },
            {
                library: false
            },
        ],
    },
    {
        name: "Colonel Mustard",
        present: true,
        rooms: [{
                kitchen: false
            },
            {
                ballroom: false
            },
            {
                conservatory: false
            },
            {
                "dining room": false
            },
            {
                "billiard room": false
            },
            {
                library: false
            },
        ],
    },
    {
        name: "Professor Plum",
        present: true,
        rooms: [{
                kitchen: false
            },
            {
                ballroom: false
            },
            {
                conservatory: false
            },
            {
                "dining room": false
            },
            {
                "billiard room": false
            },
            {
                library: false
            },
        ],
    },
];

// Task
const suspect = videoData.filter((data) => data.present);
const suspectName = suspect.map((data) => data.name);
console.log(suspectName);

// Argument keyword
// spread operator doesnt effect
// work in ES5
const createTuple = (a, b, c, d, e) => {
    console.log(arguments);
    return [
        [a, c],
        [b, d]
    ];
}
createTuple(1, 2, 3, 4, 5);

//Array like Obj
const arr = Array.prototype.slice.call(arguments)
const arr = Array.from(arguments)

// function are obj ,
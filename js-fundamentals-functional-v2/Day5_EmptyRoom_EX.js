const newDevelopment = [{
        name: "Miss Scarlet",
        present: true,
        rooms: [{
                kitchen: false
            },
            {
                ballroom: false
            },
            {
                conservatory: true
            },
            {
                "dining room": true
            },
            {
                "billiard room": false
            },
            {
                library: true
            },
        ],
    },
    {
        name: "Reverend Green",
        present: true,
        rooms: [{
                kitchen: true
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
                "billiard room": true
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
                conservatory: true
            },
            {
                "dining room": false
            },
            {
                "billiard room": true
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
                kitchen: true
            },
            {
                ballroom: false
            },
            {
                conservatory: false
            },
            {
                "dining room": true
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

// const EmptyRoom = newDevelopment.reduce((result, value, key) => {
//     // console.log(value)
//     reutrn value.rooms.filter((val) => !Object.values(val)[0]))
// }, [])
// console.log(EmptyRoom)

const NotInRoom = (suspect, result) => {
    const EmpRoom = suspect.rooms.reduce((acc, room) => {
        // console.log(Object.values(room)[0])
        if (Object.values(room)[0] === false) {
            acc.push(room)
        }
        return acc
    }, [{
        name: suspect.name
    }])

    return EmpRoom;
}
const EmptyRoom = newDevelopment.map(NotInRoom)
console.log(EmptyRoom)

//Functional Ultilities
// curried(1)(2)(3) => [1,2,3]
// curried(1,2)(3) => [1,2,3]

// Composing
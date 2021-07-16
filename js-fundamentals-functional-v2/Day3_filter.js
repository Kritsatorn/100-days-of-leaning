// Filter my version

const _ = {};
_.filter = function(arr, callback) {
    const store = [];

    // _.each(arr, function(item, i, list) {
    //     if (callback(item, i, list) === true) {
    //         store.push(item)
    //     }
    // })

    for (let i = 0; i < arr.length; i++) {
        if (callback(arr[i], i, arr) === true) {
            store.push(arr[i]);
        }
    }
    return store;
};

// import {
//     videoData
// } from "../videoData.js";
// console.log(videoData[0]);

const videoData = [{
        name: 'Miss Scarlet',
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
                'dining room': false
            },
            {
                'billiard room': false
            },
            {
                library: false
            }
        ]
    },
    {
        name: 'Mrs. White',
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
                'dining room': false
            },
            {
                'billiard room': false
            },
            {
                library: false
            }
        ]
    },
    {
        name: 'Reverend Green',
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
                'dining room': false
            },
            {
                'billiard room': false
            },
            {
                library: false
            }
        ]
    },
    {
        name: 'Rusty',
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
                'dining room': false
            },
            {
                'billiard room': false
            },
            {
                library: false
            }
        ]
    },
    {
        name: 'Colonel Mustard',
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
                'dining room': false
            },
            {
                'billiard room': false
            },
            {
                library: false
            }
        ]
    },
    {
        name: 'Professor Plum',
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
                'dining room': false
            },
            {
                'billiard room': false
            },
            {
                library: false
            }
        ]
    }
];

console.log(_.filter(videoData, function(obj) {
    return obj["present"]
}))
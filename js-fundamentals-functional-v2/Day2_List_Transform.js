// Loop Object
const object = {
    a: 1,
    b: 2,
    c: 3
};

for (const properties in object) {
    console.log(` keys : ${properties} , val : ${object[properties]} `);
}
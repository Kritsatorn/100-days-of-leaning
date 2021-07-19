// Higher-Order function and Callback
// Higher-Order function can take Fn as Argument, return Fn as Output

//Callbacks
const ifElse = (condition, isTrue, isFalse) => {
    return condition ? isTrue() : isFalse();
};
ifElse(
    true,
    () => {
        console.log("TRUE");
    },
    () => {
        console.log("FALSE");
    }
);

// HoF
const logTrue = () => {
    console.log("TRUE");
}

const logFalse = () => {
    console.log("False");
}
ifElse(false, logTrue, logFalse)

const _ = {}
_.reduce = (list, callbacks, initial) => {
    if (Array.isArray(list) === true) {
        let acc = initial;
        list.forEach(data => {
            acc += callbacks(data);
        })
        return acc;
    }
    if (Array.isArray(list) === false) {
        let acc = initial
        list.forEach(data => callbacks(data, acc))
        return acc
    }

}
const arr = [1, 23, 45, 9];
const res = _.reduce(arr, (val) => {
    return val + 1
}, 0)
console.log(res)
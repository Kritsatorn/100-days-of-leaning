// const myAlert = () => {
//     const x = "Help! I think I found a clue!";
//     let count = 0;
//     const alerter = () => {
//         alert(`${x} ${++count}`);
//     };

//     return alerter;
// };

// const funcAlert = myAlert();
// const funcAlert2 = myAlert();
// funcAlert();
// funcAlert();
// it goone be counted

// Closure is function inside function

//curring
_ = {};
_.curry = (fn) => {
    return (arg1) => {
        return (arg2) => {
            return fn(arg1, arg2);
        };
    };
};

const addList = (num1, num2) => {
    return [num1, num2];
};
console.log(_.curry(addList)([1, 2, 3])(2));

const consider = (name) => {
    return `I think it could be ${name}`
}

const exclaim = (statement) => {
    return `${statement.toUpperCase()} !`
}

_.compose = (fn1, fn2) => {
    return (name) => {
        return fn1(fn2(name));
    }
}
const blame = _.compose(consider, exclaim);
console.log(blame("you"))


// END OF JS FUND
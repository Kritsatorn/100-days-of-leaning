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
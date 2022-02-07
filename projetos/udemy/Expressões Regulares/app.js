const stringTest = "Hello Word";
const regex = /Hello/;
console.log(regex.test(stringTest));

const regexH = /H/;
const regexl = /l/;
const regexll = /ll/;

console.log(regexH.test(stringTest));
console.log(regexl.test(stringTest));
console.log(regexll.test(stringTest));
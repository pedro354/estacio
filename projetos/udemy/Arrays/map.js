//const numero = [1,4,9,16];
//const novosNumeros = numeros.map((numero)=> numero * 2);
//console.log(novosNumeros); // [2,8,18,32]
/*
const numeros = [10,20,30,40,50];
const novosNumeros = numeros.map((numero) => numero + 10);// percorre array e adiciona um novo numero
console.log(novosNumeros);

//filter() filtrar elementos de um array e gera um novo array
const numero = [1,4,9,16];
const impares = numero.filter((numer) => numer % 2 === 1);
console.log(impares);
const novosNumero = numeros.filter((numero) => numero > 25);
console.log(novosNumero)

//find() obter o primeiro valor do elmento no array e satifaz a condição
const numero = [10,15,20,25,30,35];
let numeroRetornado = numero.find((numer) => numer > 25);
console.log(numeroRetornado);
*/

const numeros = [-7,-10,-3,0,4,5,100];

let numeroRetornado = numeros.find((numero)=> numero > 0);
let indiceRetornado = numeros.findIndex((numero) => numero > 0);//retorna o index desse elemento
console.log(numeroRetornado);
console.log(indiceRetornado);
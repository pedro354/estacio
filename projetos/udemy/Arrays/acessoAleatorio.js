/*
Math.random() 
- Retorna um número de ponto flutuante entre 0 e 1;
- Incluindo o 0, mas nunca incluido o 1.
console.log(Math.random()); //0.0757930446750476
console.log(Math.random()); //0.18196633823641917
console.log(Math.random() * 3); //1.7545865741234827

Mathfloor()
Retorna o número arrendodado para baixo;
1.92323232 --> 1
0.87680332 --> 0
2.87680332 --> 2

nunca vai incluir o 3.

console.log(Math.random() * 3)); //0
console.log(Math.random() * 3)); //0
console.log(Math.random() * 3)); //1
console.log(Math.random() * 3)); //2

para incluir o 3, substitua o 3 para o próximo numero 4.

console.log(Math.random() * 4)); //3
console.log(Math.random() * 4)); //2
console.log(Math.random() * 4)); //2
console.log(Math.random() * 4)); //0

*/


//Acesso aleatorio de arrays

const nomes = ["Manuel","Edval","Bruno","Jose","Caio","Pedro"]
let indiceAleatorio = Math.floor(Math.random() * 6);
console.log(nomes[indiceAleatorio]);
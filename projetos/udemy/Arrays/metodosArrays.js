//adcionar elementos Push()
const frutas = ["Maça", "Banana"];
frutas.push("Melancia");
console.log(frutas);
frutas.push("Uva", "Mamão");
console.log(frutas);
// adcionar elementos unshift() adiciona um ou mais elementos no começo do array
const fruta = ["Maça", "Banana"];
fruta.unshift("Melancia");
console.log(fruta);
// remover o ultimo elemento pop() 
const frut = ["Melancia", "Banana", "Morango"];
frut.pop();
console.log(frut);
//remove o primeiro elemento shift()
const alimentos = ["Melancia", "Banana"];
alimentos.shift();
console.log(alimentos);
//remove um intervalo do elemento splice()
const cidades = ["Nova York", "Niterói", "Rio de Janeiro", "Brooklyn", "Liverpool"];
cidades.splice(3,2);
console.log(cidades);
//busca elemento num array indexOf()
const medicamento = ["Amoxicilina", "Dorflex", "Novalgina", "Doralgina"];
let indice1 = medicamento.indexOf("Amoxicilina");
let indice2 = medicamento.indexOf("Doralgina");
console.log(medicamento[indice1]);
console.log(medicamento[indice2]);
//ordernar array com sort()
const vitaminas = ["Vitaxon","lavitan","Vitorex","Aspargil"];
vitaminas.sort();
console.log(vitaminas);
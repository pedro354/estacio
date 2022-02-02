/* 
Metodo de acesso ao DOM 

getElementById() = 
getElementByClassName() =
getElementByTagName() = 
querySelector() =
 */
//getElementById - obtem elemento por ID. elemento = document.getElementById("id");
/*
const paleta1 = document.getElementById("paleta1");
const paleta2 = document.getElementById("paleta2");
const paleta3 = document.getElementById("paleta3");

console.log(paleta1)
console.log(paleta2)
console.log(paleta3)
*/
//getElementByClassName() acessa elementos pela classe. elemento = document.getElementsbyClassName("classe");
/*
const classePaleta = document.getElementsByClassName("paleta");
console.log(classePaleta)
console.log(classePaleta[1])
*/
//getElementByTagName acessa os elementos pelo tag. elemento = document.getElementsbyTagName("tag");

//querySelector
//Retorna o primeiro elemento dentro do documento (usando ordenação em profundidade,
// pré-ordenada e transversal dos nós do documento) que corresponde ao grupo especificado de seletores.

/* Propriedades para pecorrer DOM

parentNode()
children()
firstElementChild()
lastElementChild()
previousElmentSibling()
nextElementsSibling()

*/

// parentNode() - Retorna o elemento pai. pai = elemento.parentNode;
/*
const paleta = document.querySelector("#paleta1")
console.log(paleta1.parentNode)*/

// children - Retorna os elementos filhos
/*
const paleta_div = document.querySelector(".paletas_div")
console.log(paleta_div.children)
*/
//firstElementChild e lastElementChild - Retorna o primeiro filho - Retorna o ultimo filhos
/*
const paletas_div = document.querySelector(".paletas_div")
console.log(paletas_div.firstElementChild)
console.log(paletas_div.lastElementChild)
*/
//previousElmentSibling e nextElementsSibling -Retorna o nó que antecede o elemento especificado - Retorna o nó que sucede o elemento especificado
/*
const paleta2 = document.querySelector("#paleta2")
console.log(paleta2.previousElementSibling)
console.log(paleta2.nextElementSibling)
*/
//createElement - Cria um novo elemento - novoElemento = document.createElement("tag")
/*
const titulo = document.createElement('h1');
titulo.textContent = 'To Do List';
console.log(titulo);
*/
//insertBefore() - Adiciona um elemento no começo ou no meio dos filhos de um determinado elemento
//elemento.insertBefore(novoElemento, irmao);
/*
const titulo = document.createElement('h1');
titulo.textContent = 'To Do List';

const body = document.querySelector("body")
const paletas_div = document.querySelector("paletas_div")
body.insertBefore(titulo, paletas_div)
*/
//appendChild() -  Adiciona um elemento ao final dos elementos filhos de um determinado elemento
//elmento.appendChild(novoElemento)
const titulo = document.createElement('h1');
titulo.textContent = 'To Do List';
titulo.classList.add("titulo");
//titulo.classList.remove("titulo")

const body = document.querySelector("body")
const paletas_div = document.querySelector(".paletas_div")
body.insertBefore(titulo, paletas_div)

const paleta4 = document.createElement("div")
paletas_div.appendChild(paleta4);
console.log(paletas_div)

//classList - Lista das classes de um elemento - elemento.classelist

paleta4.classList.add("paleta");

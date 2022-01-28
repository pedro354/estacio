//Tradicional
/*
const frutas = ["Abacaxi", "Laranja", "Maça", "Limão", "Morango"];
for (let i= 0; i< frutas.length; i++){
    console.log(frutas[i])
}

//For In

const frutas = ["Abacaxi", "Laranja", "Maça", "Limão", "Morango"];
for (let indice in frutas){
    console.log(frutas[indice]);
}

//For Of
const frutas = ["Abacaxi", "Laranja", "Maça", "Limão", "Morango"];
for (let fruta of frutas){
    console.log(fruta);
}
*/
//ForEach
const frutas = ["Abacaxi", "Laranja", "Maça", "Limão", "Morango"];
frutas.forEach((fruta, indice) => {
    console.log(frutas);
    console.log("Fruta " + indice + " : " + fruta);
});
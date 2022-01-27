//contagem até 50
for(let contador = 0; contador < 10; contador++){
    console.log(contador);
}/*
/*regressiva 10 a 1
for (let cont = 10; cont > 0; cont--){
    console.log(cont);
}
console.log("feliz ano novo");
*//*
let nome = "Thaina";
let sobrenome = "Silva";
let idade = 23;
let valorEmprestimo;
let taxaJuros;
let numAnos;
let juros;
let montante;

if (idade >= 18 && idade <= 25){
    taxaJuros = 0.09
}else if (idade > 26 && idade <= 35){
    taxaJuros = 0.08
}else if (idade > 36 && idade <= 50){
    taxaJuros = 0.07
}else {
    taxaJuros = 0.06
}


for(let cont = 0; cont < 3; cont++){
    valorEmprestimo = parseInt(prompt("Digite o valor do emprestimo"));
    numAnos = parseInt(prompt("Digite o numero de anos"));
    juros = valorEmprestimo * taxaJuros * numAnos;
    montante =  valorEmprestimo + juros;
    console.log(montante);
}*/
/*
let soma = 0;
let numero;
while(soma < 100){
    numero = parseInt(prompt("Insira um número"));
    soma = soma + numero;
    console.log(soma);
}
*/
let nome = "Thaina";
let sobrenome = "Silva";
let idade = 23;
let valorEmprestimo;
let taxaJuros;
let numAnos;
let juros;
let montante;
/*
    let juros = valorEmprestimo * taxaJuros * numAnos;
    let montante =  valorEmprestimo + juros;
*/
if (idade >= 18 && idade <= 25){
    taxaJuros = 0.09
}else if (idade > 26 && idade <= 35){
    taxaJuros = 0.08
}else if (idade > 36 && idade <= 50){
    taxaJuros = 0.07
}else {
    taxaJuros = 0.06
}

//break quebra o fluxo de um laço

while(true){
    valorEmprestimo = parseInt(prompt("insira o valor do emprestimo"));
    if(valorEmprestimo === 0){
        break;
    }
    numAnos = parseInt(prompt("insira o numero de anos"));
    let juros = valorEmprestimo * taxaJuros * numAnos;
    let montante =  valorEmprestimo + juros;
    console.log(montante);

}
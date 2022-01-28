function somaTresNumeros(num1 = 2, num2 = 5, num3 = 9){
    return num1 + num2 + num3;
} 

console.log(somaTresNumeros()); // 16 soma dos numeros default 
console.log(somaTresNumeros(10)); // 24 soma dos valores default num 10 + 5 + 9
console.log(somaTresNumeros(10,8)); // 27 soma dos valores default num 10 + 8 + 9
console.log(somaTresNumeros(10,5,6)); // 21 soma dos valores 10 + 5 + 6
//*//
//Parametro Rest
function exibeNumeros(...numeros){
    console.log(numeros);
}
exibeNumeros (1);
exibeNumeros (1,2,3);
exibeNumeros (1,2,3,4,5,6,7,8,9);


//*//
let nome;
let sobrenome;
let idade;
let valorEmprestimo;
let taxaJuros;
let numAnos;
let bomPagador;

function cadastraCliente(nomeCliente, sobrenomeCliente, idadeCliente, valorEmprestimoCliente, 
    numAnosCliente = 2, bomPagadorCliente = false){
    nome = nomeCliente;
    sobrenome = sobrenomeCliente;
    idade = idadeCliente;
    valorEmprestimo = valorEmprestimoCliente;
    numAnos = numAnosCliente;
    bomPagador = bomPagadorCliente;
    taxaJuros = defineTaxa(idadeCliente);
    
}
function defineTaxa(idadeCliente){
    if (idade >= 18 && idade <= 25){
        return 0.09
    }else if (idade > 26 && idade <= 35){
        return 0.08
    }else if (idade > 36 && idade <= 50){
        return 0.07
    }else {
        return 0.06
    }
}

cadastraCliente("Manuel", "Silva", 24, 150000);
console.log("Nome:           " + " " + nome);
console.log("sobrenome:      " + " " + sobrenome);
console.log("Numero de Anos: " + " " + numAnos);
console.log("Bom Pagador:    " + " " + bomPagador);

console.log(" ")

cadastraCliente("Edval", "Silva", 56, 150000, 9);

console.log("Nome:           " + " " + nome);
console.log("sobrenome:      " + " " + sobrenome);
console.log("Numero de Anos: " + " " + numAnos);
console.log("Bom Pagador:    " + " " + bomPagador);
//
function media(num1 = 8, num2 = 6){
    return (num1 + num2)/2;
}
media();
media(10);
media(8,4);
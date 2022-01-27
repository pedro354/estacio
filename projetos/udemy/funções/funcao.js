/*console.log(calcMedia(7,8,9));
console.log(calcMedia(4,5,6));
console.log(calcMedia(5,5,5));
console.log(calcMedia(10,20,30));

function calcMedia (num1, num2, num3){
    let media = (num1 + num2 + num3) / 3;
    return media;
}

//independente onde declara a função ela funcionará

*/


let nome;
let sobrenome;
let idade;
let valorEmprestimo;
let taxaJuros;
let numAnos;
let bomPagador;

function cadastraCliente(nomeCliente, sobrenomeCliente, idadeCliente, valorEmprestimoCliente, numAnosCliente, bomPagadorCliente){
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

cadastraCliente("Manuel", "Silva", 24, 150000, 2, true);
console.log(nome);console.log(sobrenome);console.log(taxaJuros);
cadastraCliente("Edval", "Silva", 56, 150000, 9, false);
console.log(nome);console.log(sobrenome);console.log(taxaJuros);
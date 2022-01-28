//const array1 = ["Elemento0", "Elemento1", "Elemento3"] - array simples
//const lista = ["manuel", 24, true, "Silva"] // retorna [Manuel, 24, true, Silva]
//const frutas = ["Abacaxi", "Laranja", "Maça", "Limão", "Morango"]; // console.log(frutas[0]) retornará abacaxi
let nome;
let sobrenome;
let idade;
let valorEmprestimo;
let taxaJuros;
let numAnos;
let bomPagador;
let avalistas;

function cadastraCliente(nomeCliente, sobrenomeCliente, idadeCliente, valorEmprestimoCliente, 
    numAnosCliente = 2, bomPagadorCliente = false, avalistasCliente){
    nome = nomeCliente;
    sobrenome = sobrenomeCliente;
    idade = idadeCliente;
    valorEmprestimo = valorEmprestimoCliente;
    numAnos = numAnosCliente;
    bomPagador = bomPagadorCliente;
    taxaJuros = defineTaxa(idadeCliente);
    avalistas = avalistasCliente;
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


cadastraCliente("Edval", "Silva", 56, 150000, 9, true, ["Manuel", "Raphael", "Bruno"]);

function adicionaAvalista(avalista){
    avalistas.push(avalista);
}

function removeAvalista(){
    avalistas.pop();
}

function editaAvalista(nomeAvalista, indice){
    avalistas[indice] = nomeAvalista;
}

function ordenarAvalista(){
    return avalistas.sort();
}

function exibeAvalistas(){
    avalistas.forEach((avalista, indice) => {
        console.log(`O ${indice + 1}º avalista é ${avalista}`);
    });
}
// chamando a função(); para retornar ao browser
adicionaAvalista("Andrew");
adicionaAvalista("Jose");
adicionaAvalista("Marcos");
//console.log(avalistas); // [ 'Manuel', 'Raphael', 'Bruno', 'Andrew', 'Jose', 'Marcos' ]
removeAvalista();
removeAvalista();
//console.log(avalistas); //[ 'Manuel', 'Raphael', 'Bruno', 'Andrew' ]
editaAvalista("Manuel Silva", 0);//
//console.log(avalistas[0]);//Manuel Silva
//console.log(ordenarAvalista());//[ 'Andrew', 'Bruno', 'Manuel Silva', 'Raphael' ]
exibeAvalistas();


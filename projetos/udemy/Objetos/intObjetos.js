/*Objetos são coleções de propriedades
Propriedade = Chave: Valor. Valor armazena uma função ela se torna um metodo => Valor: function().*/
/*
{
    nome: "Iphone",
    marca: "Apple",
    camera: 12,
    so: "IOS 14",
    atenderLigacao: function(){
        //bloco de codigo
    },
    acessaInternet: function(){
        //bloco de codigo
    }
    reproduzMusica: function(){
        //bloco de codigo
    }
}

Acessando elementos
const carro = {
    nome: "Fiesta",
    marca: "Ford",
    cor: "Amarelo",
    ano: 2012,
    empaclado: true,
    motor: [126, 1.6]
};

Notação por pontos:
carro.nome;
carro.marca;

console.log(carro.nome); Fiesta
console.log(carro.marca); Ford

Notação por colchetes:
carro['nome'];
carro['marca'];

console.log(carro['nome']); Fiesta
console.log(carro['marca']); Ford

Objetos Aninhados

const carro = {
    nome: "Fiesta",
    marca: "Ford",
    cor: "Amarelo",
    ano: 2012,
    empaclado: true,
    motor: {
        cavalos: 126,
        cilindradas: 1.6
    }
};

console.log(carro.motor.cavalos);
console.log(carro.motor.cilindradas);
console.log(carro['motor']['cavalos']);
console.log(carro['motor']['cilindradas']);

Editando elementos:

const carro = {
    nome: "Fiesta",
    marca: "Ford",
    cor: "Amarelo",
    ano: 2012,
    empaclado: true,
    motor: {
        cavalos: 126,
        cilindradas: 1.6
    }
};

carro.cor ="Azul";
console.log(carro.cor);

*/
let nome;
let sobrenome;
let idade;
let valorEmprestimo;
let taxaJuros;
let numAnos;
let bomPagador;
let avalistas;

function cadastraCliente(nomeCliente, sobrenomeCliente, idadeCliente, valorEmprestimoCliente, numAnosCliente = 2, bomPagadorCliente = false, avalistasCliente){
/* Objetos*/cliente = {
            nome: nomeCliente,
            sobrenome: sobrenomeCliente,
            idade: idadeCliente,
            emprestimo: {
                valorEmprestimo: valorEmprestimoCliente,
                numAnos: numAnosCliente,
                bomPagador: bomPagadorCliente,
                taxaJuros: defineTaxa(idadeCliente),
                avalistas: avalistasCliente
                        }
                 }
        return cliente;
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


const cliente1 = cadastraCliente("Edval", "Silva", 56, 150000, 9, true, ["Manuel", "Raphael", "Bruno"]);

console.log(cliente1)

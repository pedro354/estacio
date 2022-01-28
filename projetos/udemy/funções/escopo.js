let nome = "Manuel";

function sauda(){
    let saudacao = "Olá Sr.: " + nome;
    return saudacao;
}

console.log(sauda());
console.log(saudacao);

//Escopo Global não pode acessar por dentro do escopo local
//Escopo Local pode acessar dentro e fora 

let Pessoa = "Thaina";

if(Pessoa !== ""){
    let saudacao = "Olá Sra.: " + Pessoa;
    console.log(saudacao); // Olá Sra. Thaina
}
console.log(saudacao);//Erro não seguira o escopo global "saudacao" criado dentro do escopo local

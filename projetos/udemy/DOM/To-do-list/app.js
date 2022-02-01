const container = document.querySelector(".container");
const listaAtivades = document.querySelector(".lista_ativades");
const input = document.querySelector("input");
const erro = document.querySelector(".erro")
const botaoCadastra = document.querySelector(".botao_adc")
const paleta1 = document.querySelector("#paleta1")
const paleta2 = document.querySelector("#paleta2")
const paleta3 = document.querySelector("#paleta3")

console.log(container);
console.log(listaAtivades);
console.log(input);
console.log(erro);
console.log(botaoCadastra);
console.log(paleta1);
console.log(paleta2);
console.log(paleta3);


function cadastraAtividade(){
    if(input.value.length > 3){
        erro.style.display = "none";
        //criaAtividade();
    }else{
        erro.style.display = "grid";
        erro.innerHTML = `${input.value} não é uma atividade válida!`
    }
    limpaInput();
}

function limpaInput(){
    input.value = "";
}

window.addEventListener("keypress", (e) => {
    if(e.key === "Enter"){
        cadastraAtividade();
    }
});


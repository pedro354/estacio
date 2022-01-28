// Loops Alinhados - um loop dentro de outro loop
const departamento = [["Financeiro", "Kilma", "Daniel"], ["Marketing", "Sarah", "Leticia"], ["Diretoria", "Keila", "Marcos"]];
quadroDefuncionarios.forEach((departamento, indiceDep) => {
    departamento.forEach((funcionario, indicieFunc) => {
        console.log(funcionario)
    })
})
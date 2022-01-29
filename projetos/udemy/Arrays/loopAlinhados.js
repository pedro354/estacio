// Loops Alinhados - um loop dentro de outro loop
const quadroDefuncionarios = [["Financeiro", "Kilma", "Daniel"], ["Marketing", "Sarah", "Leticia"], ["Diretoria", "Keila", "Marcos"]];
quadroDefuncionarios.forEach((departamento, indiceDep) => {
    departamento.forEach((funcionario, indiceDep) => {
        console.log(`${indiceDep + 1} - ${funcionario}`)
    })
})

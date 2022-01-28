/*
A|B|C
D|E|F
G|H|I
Array Bimendisionais
Coleção de itens organizados como uma matriz de linhas e colunas. (Array de Arrays)
const letras = [["A", "B", "C"], ["D", "E", "F"], ["G", "H", "I"]];
*/
const clientes = [["Livia", 24, true], ["Julia", 23, true], ["Fernando", 30, false]];
// console.table cria uma tabela
/*┌─────────┬────────────┬────┬───────┐
  │ (index) │     0      │ 1  │   2   │
  ├─────────┼────────────┼────┼───────┤
  │    0    │  'Livia'   │ 24 │ true  │
  │    1    │  'Julia'   │ 23 │ true  │
  │    2    │ 'Fernando' │ 30 │ false │
  └─────────┴────────────┴────┴───────┘*/
  console.log(clientes[1][0]); // Julia 23
  console.log(clientes[1][1]); // 23
//utilizar sempre "[]" para tabelar na matriz
  clientes.push(["Bruno", 28, false]);
  clientes.pop(); // remove o ultimo elemento
  clientes.push(["Patricia", 39, true]);
  clientes.sort();
  clientes.push(["Thaina", 23, false]);
  console.table(clientes);

  
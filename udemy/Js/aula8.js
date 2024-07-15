// Ep 19 Tipo de dados primitivos 
// String, Number, Undefined, Null, Boolean, Symbol...

// Strings
const nome = 'Luiz';
const nome1 = "Luiz";
const nome2 = `Luiz`;

// Numbers
const num1 = 10; 
const num2 = 10.52;

// Undefined
let nomeAluno; // Undefined -> não aponta para local nenhum na memória.

// Nulo
let sobrenomeAluno = null; // Nulo -> não aponta para local nenhum na memória.

// Boolean
let aprovado = true; // Boolean = true e false (Valor lógico)

console.log(typeof nome, nome);


// Array altera o valor da memoria.
const a = [1,2];
const b = a;

console.log(a,b)

b.push(3);
console.log(a, b);

// Sem array não aponta para memoria e não interfere

let c = 2;
const d = a;

console.log(c,d)

a = 4;

console.log(c,d)
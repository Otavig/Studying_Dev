// Ep 13 Variáveis

// Não podemos criar variáveis com palavras reservadas
// Exemplo errado: let if;
// Variáveis precisam ter nomes significativos
// Exemplo errado: let n = 'João'
// Não pode começar nome de uma variável com um número e não pode conter espaços ou traços
// Exemplo errado: let Nome completo = ;
// Exemplo correto: let nome_completo = 'Otávio Garcia';
// Case-sensitive
// Não podemos redeclarar vars com let

let nome; // undefined - Declarou a variável
nome = 'João'; // String - Inicializando a variável
// var: Problemas


console.log('João nasceu em 1984.');
console.log('Em 2000 João conheceu Maria.');
console.log('João casou-se com maria em 2012 .');
console.log('Maria teve 1 filho com João em 2015');
console.log('O filho de João se chama Eduardo.');
console.log(' ');
console.log(`${nome} nasceu em 1984.`);
console.log(`Em 2000 ${nome} conheceu Maria.`);
console.log(`${nome} casou-se com maria em 2012 .`);
console.log(`Maria teve 1 filho com ${nome} em 2015`);
console.log(`O filho de ${nome} se chama Eduardo.`);
// Ep 14 Constant

// Não podemos criar constantes com palavras reservadas
// Exemplo errado: const if;
// constantes precisam ter nomes significativos
// Exemplo errado: const n = 'João'
// Não pode começar nome de uma constantes com um número e não pode conter espaços ou traços
// Exemplo errado: const Nome completo = ;
// Exemplo correto: const nome_completo = 'Otávio Garcia';
// Case-sensitive
// Não podemos alter o valor da constante

const nome = 'João';
// nome = 'Otávio' # Error
console.log(nome);

let primeiroNumero = 5;
let segundoNumero = 10;

const conta = primeiroNumero * segundoNumero;

console.log(conta);
console.log(typeof (String(primeiroNumero)))
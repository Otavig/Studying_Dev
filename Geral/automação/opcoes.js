// Função de Potência
function potencia(base, expoente) {
    return Math.pow(base, expoente);
}

// Função de Verificação de Paridade
function ehPar(numero) {
    return numero % 2 === 0;
}

// Função para Encontrar o Maior Número
function maiorNumero(a, b) {
    return a > b ? a : b;
}

// Função para Converter para Maiúsculas
function converterMaiuscula(str) {
    return str.toUpperCase();
}

// Função para Inverter uma String
function inverter(str) {
    return str.split('').reverse().join('');
}

// Função de Fatorial
function fatorial(num) {
    if (num === 0 || num === 1) return 1;
    let resultado = 1;
    for (let i = num; i > 1; i--) {
        resultado *= i;
    }
    return resultado;
}

// Função de Verificação de Palíndromo
function ehPalindromo(str) {
    const reverso = str.split('').reverse().join('');
    return str === reverso;
}

// Função para Calcular a Média de um Array
function calculaMedia(arr) {
    const soma = arr.reduce((total, num) => total + num, 0);
    return soma / arr.length;
}

// Função de Conversão de Celsius para Fahrenheit
function celsiusParaFahrenheit(celsius) {
    return celsius * 9 / 5 + 32;
}

// Função para Remover Duplicatas de um Array
function removeDuplicatas(arr) {
    return [...new Set(arr)];
}

// Função para Retornar Números Pares de um Array
function retornaPares(arr) {
    return arr.filter(num => num % 2 === 0);
}

// Função para Contar Caracteres em uma String
function contaCaracter(str, char) {
    return str.split(char).length - 1;
}

// Exportação das funções para uso nos testes
module.exports = {
    potencia,
    ehPar,
    maiorNumero,
    converterMaiuscula,
    inverter,
    fatorial,
    ehPalindromo,
    calculaMedia,
    celsiusParaFahrenheit,
    removeDuplicatas,
    retornaPares,
    contaCaracter
};

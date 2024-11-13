const {
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
} = require('./opcoes');

test('Verifica a potência', () => {
    expect(potencia(2, 3)).toBe(8);
});

test('Verifica se o número é par', () => {
    expect(ehPar(4)).toBe(true);
    expect(ehPar(5)).toBe(false);
});

test('Verifica o maior número', () => {
    expect(maiorNumero(10, 20)).toBe(20);
});

test('Converte para maiúsculas', () => {
    expect(converterMaiuscula("abc")).toBe("ABC");
});

test('Inverte uma string', () => {
    expect(inverter("hello")).toBe("olleh");
});

test('Calcula o fatorial', () => {
    expect(fatorial(5)).toBe(120);
});

test('Verifica se é um palíndromo', () => {
    expect(ehPalindromo("arara")).toBe(true);
});

test('Calcula a média de um array', () => {
    expect(calculaMedia([10, 20, 30])).toBe(20);
});

test('Converte Celsius para Fahrenheit', () => {
    expect(celsiusParaFahrenheit(0)).toBe(32);
});

test('Remove duplicatas de um array', () => {
    expect(removeDuplicatas([1, 2, 2, 3])).toEqual([1, 2, 3]);
});

test('Retorna números pares de um array', () => {
    expect(retornaPares([1, 2, 3, 4])).toEqual([2, 4]);
});

test('Conta caracteres em uma string', () => {
    expect(contaCaracter("Macarronada", "a")).toBe(4);
});

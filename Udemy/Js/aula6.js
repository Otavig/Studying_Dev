// Ep 16

let nome, idade, peso, altura;
nome = 'Otávio Garcia'
idade = 18;
peso = 57;
altura = 1.60;

const imc = () => {
    console.log(`${nome} tem ${idade} anos e pesa ${peso} kg`)
    // Ou contaImc = peso / (altura * altura); console.log(contaImc)
    console.log(`Seu imc é de ${peso / (altura * altura)}.`)
    console.log(`E ${nome} nasceu em ${2024 - idade}`)
}

imc();


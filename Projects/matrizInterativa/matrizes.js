let matriz = [
    [0, 0, 0],
    [0, 0, 0],
    [0, 0, 0]
];

function getRandomInt(max) {
    return Math.floor(Math.random() * max);
}

function preencherMatrizes() {
    for (let i = 0; i < matriz.length; i++) {
        for (let j = 0; j < matriz[i].length; j++) {
            matriz[i][j] = getRandomInt(2);
        }
    }
}
function varreduraLeituraBool() {
    for (let i = 0; i < matriz.length; i++) {
        for (let j = 0; j < matriz[i].length; j++) {
            matriz[i][j] = getRandomInt(2);
        }
    }
}

preencherMatrizes();

for (let i = 0; i < matriz.length; i++) {
    console.log(matriz[i].join(' ') + '\n');
}

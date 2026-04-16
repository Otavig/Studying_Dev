const listNames = ["Jesus", "Espirito Santo", "Otávio", "Oliver", "Felipe", "Samuel", "João", "Matheus", "Pedro", "Elias", "Paulo", "Eliseu", "Metusalém", "Mequisaleque", "Potifar", "José"];
const listNumbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20];

function searchBinary(list, item) {
    list.sort((a, b) => a - b); // Ordena a lista numericamente
    let low = 0;
    let high = list.length - 1;
    let time = 0;

    while (low <= high) {
        let mid = Math.floor((low + high) / 2);
        let attempt = list[mid];

        time++;
        if (attempt === item) {
            return `In ${time} attempts we get value ${attempt}`;
        }

        if (attempt < item) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return null;
}

function searchBinaryName(list, item) {
    list.sort(); // Ordena a lista alfabeticamente
    let low = 0;
    let high = list.length - 1;
    let time = 0;

    while (low <= high) {
        let mid = Math.floor((low + high) / 2);
        let attempt = list[mid];

        time++;
        if (attempt.startsWith(item)) { // Verifica se o nome começa com a letra ou sequência desejada
            return `In ${time} attempts we get value ${attempt} at position ${mid}`;
        }

        if (attempt < item) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return `Item starting with "${item}" not found in ${time} attempts.`;
}

console.log(searchBinary(listNumbers, 13));
console.log(searchBinaryName(listNames, "Oliver"));

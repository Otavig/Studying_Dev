let lista = [];
let saida = document.getElementById('saida');

function verNumber(numb) {
    return numb !== '' && isFinite(numb);
}

function searchBinary(list, value){
    list.sort((a, b) => a - b); // Ordena a lista numericamente
    let alto, meio, baixo, tentativa;
    alto = list.length - 1;
    baixo = 0;

    while (baixo <= alto) {
        meio = Math.floor((baixo + alto) / 2); // Arredonda para baixo o valor médio
        tentativa = list[meio];

        if (tentativa === value) {
            return tentativa;
        }

        if (tentativa > value) {
            alto =  meio - 1;
        } else {
            baixo = meio + 1;
        }
    }

    return -1; // Retorna -1 se o valor não for encontrado
}

document.addEventListener('DOMContentLoaded', () => {
    let search;

    document.getElementById('btn').addEventListener('click', () => {
        search = document.getElementById('inp').value;
        let tempCheck = verNumber(search);
        let result; 

        if (!tempCheck) {
            alert('Falha, isso não é um número!');
            return;
        }

        if (lista.length > 10){
            result = searchBinary(lista, Number(search));
        }else {
            for (let i = 0; i < lista.length; i++) {
                if (lista[i] == Number(search)){
                    result = search;
                    return;
                }
                result = -1;
            }
        }

        if (result !== -1) {
            showOverlayCard(result);
        } else {
            alert(`Número ${search} não encontrado na lista.`);
        }

        document.getElementById('inp').value = '';
    });

    document.getElementById('btnAdd').addEventListener('click', () => {
        search = document.getElementById('inpAdd').value;
        let tempCheck = verNumber(search);

        if (!tempCheck) {
            alert('Falha, isso não é um número!');
            return;
        }

        lista.push(Number(search));
        document.getElementById('inpAdd').value = '';

        renderizarLista();
    });

    function renderizarLista() {
        let html = '';
        lista.sort((a, b) => a - b); // Ordena a lista numericamente
        lista.forEach((x) => {
            html += `
                <div class="card mb-3">
                    <div class="card-body">
                        <blockquote class="blockquote">
                            <img src="img/18601.png" style="margin-bottom: 20px" alt="Img perfil" height="50px">
                            <h4>${x}</h4>
                        </blockquote>
                    </div>
                </div>
            `;
        })
        saida.innerHTML = html;
    }

    function showOverlayCard(numero) {
        const overlay = document.createElement('div');
        overlay.classList.add('overlay');

        const overlayCard = document.createElement('div');
        overlayCard.classList.add('overlay-card');

        const closeButton = document.createElement('button');
        closeButton.classList.add('close-btn');
        closeButton.innerHTML = '&times;';
        closeButton.addEventListener('click', () => {
            document.body.removeChild(overlay);
        });

        overlayCard.innerHTML = `<img src="img/18601.png" alt="Img perfil" height="50px"> <h4>Número: ${numero}</h4>`;
        overlayCard.appendChild(closeButton);
        overlay.appendChild(overlayCard);
        document.body.appendChild(overlay);
    }

    renderizarLista();
});

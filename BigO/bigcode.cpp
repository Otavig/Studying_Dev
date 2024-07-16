// Os 3 Passos para calcular a complexidade:

// 1 - Levar em consideração apenas as repetições do código
// 2 - Verificar a complexidade das funções/metódos próprios da linguagem (se utilizado)
// 3 - Ignorar as constantes e utilizar o termo de maior grau

//. A rapidez de um algoritmo não é medida em segundos, mas pelo crescimento do número de operações.
//. Em vez disso,discutimos sobre o quão rapidamente o tempo de execução de um algoritmo aumenta conforme o número de elementos aumenta
//. O tempo execução em algoritmos é expresso na notação Big O.
//. O (log n) é mais rápido do que O(n), e O(log n) fica ainda mais rápido conforme a lista aumenta.

// Ignorar os constants O(1)

bool exemplo1(vector<int> v, int X){
    int size = v.size(); // O(1)
    for(int i=0; i<size; i++){ // O(N)
        if(v[i] == X) return true; // O(1)
    }
    return false; // O(1) Tudo que for constant ignora
}

// O(N) --> O(N) ou seja, linear

// https://cplusplus.com/ --> Procurar complexidade {costante}.


bool exemplo2(vector<int> v){
    int size = v.size(); // O(1)
    for(int i=0; i<size; i++){ // O(N)
        for(int j=0; j<size; j++){ // O(N)
            if(i != j && v[i] == v[j])  // O(1)
                return true; // O(1)
        }
    }
    return false; 
}

// O(N) * O(N) ---> O(N^2)


bool exemplo3(vector<int> v){
    int size = v.size(); // O(1)
    int bla = 0; // O(1)
    for(int i=0; i<size; i++){ // O(N)
        for(int j=0; j<size; j++){ // O(N)
            if(v[i] == v[j] bla++)  // O(1)
        }
    }

    // ..

    int ble = 0; // O(1)
    for(int i=0; i<size; i++){ // O(N)
        if(v[i] == 10){ // O(1)
            ble = 2*ble;
        }
    }

    // ....

    int bli = 0; // O(1)
    for(int i=0; i<size; i++){ // O(N)
        if(v[i] == 5){ // O(1)
            bli += 5;
        }
    }
}

// O(N)*O(N)+O(N)+O(N)
// O(N^2) + 2*O(N) ---- Simplificação da expressão 
// O(N^2) + O(N) ---- Ignorar constant
// O(N^2) 

bool exemplo4(vector<int> v,
              vector<int> w){
    int tamanho = v.size();
    int tamanho2 = w.size();
    for(int i=0; i<tamanho; i++){ // O(N)
        for(int j=0; j<tamanho2; j++){ // O(M)
            if(v[i] == v[j])
                return true;
        }
    }
    return false;
}

// O(N)* O(M)

// Restante dos exemplos: https://www.youtube.com/watch?v=zXBaLEGv0iM
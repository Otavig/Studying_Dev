#include <stdio.h>
#include <stdlib.h>

int main() {
    int size_matriz = 3;
    int matriz[size_matriz][size_matriz];
    int matriz_sum[size_matriz];

    for (size_t i = 0; i < sizeof(matriz) / sizeof(matriz[0]); i++){
        for (size_t j = 0; j < sizeof(matriz[i]) / sizeof(matriz[i][0]); j++){
            printf("Digite o valor da linha %ld e coluna %ld:", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (size_t i = 0; i < sizeof(matriz) / sizeof(matriz[0]); i++){
        int sum = 0;
        for (size_t j = 0; j < sizeof(matriz[i]) / sizeof(matriz[i][0]); j++){
            sum += matriz[i][j];
        }
        matriz_sum[i] = sum;
    }
    
    for (size_t i = 0; i < sizeof(matriz_sum) / sizeof(matriz_sum[i]); i++){
        printf("Posição %ld - Valor %d \n", i, matriz_sum[i]);
    }
    

    return 0;
}
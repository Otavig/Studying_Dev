#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor;
    int n = 5;

    // Aloca memória para 5 inteiros
    vetor = (int*)malloc(n * sizeof(int));

    printf("teste: %d \n", *vetor);

    if(vetor == NULL) {
        printf("Deu erro mané na alocação");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        vetor[i] = i + 1;
    }

    n = 10;
    vetor = (int*)realloc(vetor, n * sizeof(int));

    if (vetor == NULL) {
        printf("Falha na realocação de memória.\n");
        return 1;
    }

    // Preenche os novos elementos
    for (int i =  5; i < n; i++) {
        vetor[i] = i + 1;
    }


    // Imprime os valores
    for (int i = 0; i < n; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    // Libera a memória alocada
    free(vetor);    

    return 0;
}
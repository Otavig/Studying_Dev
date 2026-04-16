#include <stdio.h>
#include <stdlib.h>


void fvetor(int *vetor, size_t tamanho) { 
    for (size_t i = 0; i < tamanho; i++) { 
        printf("%d ", vetor[i]); 
    } 
    printf("\n");
}

int main() {
    int vetor[5] = {2, 3, 4, 5, 6}; // Definição do vetor
    fvetor(vetor, 5);  // Chamada correta


    // int varteste = 5;
    // int *ptr;  
    // ptr = &varteste;  
    
    // printf("Endereço de varteste: %p\n", (void *)&varteste);
    // printf("Endereço armazenado em ptr: %p\n", (void *)ptr);
    // printf("Valor apontado por ptr: %d\n", *ptr);

    return 0;
}

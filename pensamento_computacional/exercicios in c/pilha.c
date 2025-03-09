#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void realocarMemoria(int **vetor, int n){
    int *novoVetor = (int*)realloc(*vetor, n * sizeof(int));
    
    if (novoVetor == NULL) {
        if (n > 0) {
            printf("Erro ao realocar memória!\n");
        }

        free(*vetor);  
        exit(1);
    }

    // Atualiza o ponteiro
    *vetor = novoVetor;
}

void exibirValores(int *vetor, int n) {
    printf("Valores no vetor: ");
    for (size_t i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int *vetor;
    int n = 0;

    vetor = (int*)malloc(sizeof(int));

    if(vetor == NULL) {
        printf("Mané, a memoria não foi alocada corretamente");
        return 1;
    }
    
    bool continuar = true;

    do {
        int valor_digitado = 0;
        printf("(Digite -1 para remover, -2 para sair e -3 para exibir) Próximo número: \n");
        scanf("%d", &valor_digitado);
        
        if(valor_digitado == -3) {
            exibirValores(vetor, n);
            continue;
        }

        if(valor_digitado == -2) {
            exibirValores(vetor, n);
            free(vetor);  // Libera a memória alocada
            break;
        }

        if(valor_digitado == -1) {
            if (n > 0) {
                n--;
                vetor = (int*)realloc(vetor, n * sizeof(int));
                if (n > 0 && vetor == NULL) {
                    printf("Erro ao realocar memória!\n");
                    exit(1);
                }
            } else {
                printf("Não há elementos para remover.\n");
            }
            continue;
        }

        vetor[n] = valor_digitado;
        n++;
        realocarMemoria(&vetor, n);


    } while (continuar);

    return 0;
}
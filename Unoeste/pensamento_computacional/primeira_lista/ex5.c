#include <stdio.h>

float funcMedia(float s1, float s2, float p1, float p2) {
    if (p1 + p2 == 0) {
        printf("A soma dos pesos não pode ser zero!\n");
        return 0;
    }
    return ((s1 * p1) + (s2 * p2)) / (p1 + p2);
}

int main() {
    float media1 = 0, media2 = 0, peso1 = 0, peso2 = 0;

    printf("Digite a primeira média: \n");
    scanf("%f", &media1);

    printf("Digite a segunda média: \n");
    scanf("%f", &media2);

    printf("Digite o primeiro peso: \n");
    scanf("%f", &peso1);

    printf("Digite o segundo peso: \n");
    scanf("%f", &peso2);

    if (peso1 + peso2 != 0) {
        printf("Resultado final: %.2f\n", funcMedia(media1, media2, peso1, peso2));
    } else {
        printf("A soma dos pesos não pode ser zero!\n");
    }

    return 0;
}
#include <stdio.h>

float funcComposite(float t) {
    float y = t / 2 + 4;
    float x = t * 2 - 4;
    return 2 * t + 4 * y - 3 * x;
}

int main() {
    float value = 0;
    printf("Digite o valor de T: \n");
    scanf("%f", &value);

    printf("Resultado final: %.2f \n", funcComposite(value));

    return 0;
}
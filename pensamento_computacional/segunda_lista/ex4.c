#include <stdio.h>

void evenOrOdd(float value) {
    (int) value % 2 == 0 ? printf("É par \n") : printf("É impar \n");
}

int main() {
    float value = 0;
    printf("Digite um valor? \n");
    scanf("%f", &value);

    evenOrOdd(value);

    return 0;
}
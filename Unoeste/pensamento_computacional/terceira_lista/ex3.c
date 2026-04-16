#include <stdio.h>

int algoritm(int value1, int value2) {
    if(value1 == value2) {
        return value1 + value2;
    }

    return value1 * value2;
}

int main() {
    int value1, value2;
    printf("Digite um valor: \n");
    scanf("%d", &value1);

    printf("Digite outro valor: \n");
    scanf("%d", &value2);

    int resultado = algoritm(value1, value2);

    printf("Valor: %d\n", resultado);

    return 0;
}

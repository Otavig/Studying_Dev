#include <stdio.h>

float funcConvertCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    float value = 0;
    printf("Digite o valor em Fahrenheit: \n");
    scanf("%f", &value);

    printf("Resultado final: %.2f graus celsius. \n", funcConvertCelsius(value));

    return 0;
}
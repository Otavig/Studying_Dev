#include <stdio.h>
#include <stdbool.h>

bool checkValue(float a, float b, float c){
    if(a+b < c){
        return true;
    }

    return false;
}

int main() {
    float valueA, valueB, valueC;
    printf("Primeiro valor: \n");
    scanf("%f", &valueA);

    printf("Segundo valor: \n");
    scanf("%f", &valueB);

    printf("Terceiro valor: \n");
    scanf("%f", &valueC);

    printf("O valor de %.2f + %.2f é %s que %2.f \n",
        valueA, valueB, checkValue(valueA, valueB, valueC) ? "menor" : "maior", valueC);

    return 0;
}
#include <stdio.h>

float valueMax(float valueOne, float valueTwo) {
    if(valueOne < valueTwo)
        return valueTwo;

    return valueOne;
}

int main() {
    float oneInput, twoInput;
    printf("Primeiro valor? \n");
    scanf("%f", &oneInput);

    printf("Segundo valor? \n");
    scanf("%f", &twoInput);
    
    printf("O maior número entre %.1f e %.1f é %.1f \n", oneInput, twoInput, valueMax(oneInput, twoInput));

    return 0;
}
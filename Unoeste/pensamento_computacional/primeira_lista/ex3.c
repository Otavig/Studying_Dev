#include <stdio.h>

float perimeterSquare(float side) {
    return 4 * side;
}

float areaSquare(float side) {
    return side * side;
}

void factoryShowSquare(float side) {
    printf("O valor da area é de %.2f e do perimetro é de %.2f \n", areaSquare(side), perimeterSquare(side));
}

int main() {
    float sideInput = 0;

    do {
        printf("Digite o tamanho do lado do quadrado: \n");
        scanf("%f", &sideInput);
    }
    while(sideInput < 0);

    factoryShowSquare(sideInput);

    return 0;
}
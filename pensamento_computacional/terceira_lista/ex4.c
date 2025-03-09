#include <stdio.h>
#include <ctype.h>

float idealWeight(float height, char sexuality) {
    sexuality = tolower(sexuality);
    return sexuality == 'm' ? (72.7 * height) - 58 : (62.1 * height) - 44.7;
}

int main() {
    float height;
    char sexuality;

    printf("Digite sua altura: (ex: 1.70) \n");
    scanf("%f", &height);

    printf("Digite seu gênero biologico: (m/f) \n");
    scanf(" %c", &sexuality);

    printf("Seu peso ideal é de %.2f kg.\n", idealWeight(height, sexuality));

    return 0;
}

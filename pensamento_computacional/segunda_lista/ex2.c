#include <stdio.h>

float readjust(float value) {
    if(value < 800) {
        return value * 0.5;
    }
    return value * 0.3;
}

int main() {
    printf("Digite o salário para o reajuste: \n");
    float balance;
    scanf("%f", &balance);

    printf("O valor original era R$ %.2f e foi reajustado para R$ %.2f, com um aumento de %d%%.\n", 
        balance, balance + readjust(balance), balance < 800 ? 50 : 30);
 
    return 0;
}
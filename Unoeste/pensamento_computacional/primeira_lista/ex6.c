#include <stdio.h>

float feesAndRate(float deposit, float rate) {
    return deposit * (rate / 100);
}

void showFeesRate(float deposit, float rate) {
    float performance = feesAndRate(deposit, rate);
    float total = deposit + performance;
    
    printf("O valor do rendimento é de R$%.2f e o valor total com juros aplicado é de R$%.2f \n", performance, total);
}

int main() {
    float depositInput, rateInput;

    printf("Digite o tamanho do deposito: \n");
    scanf("%f", &depositInput);

    printf("Digite o tamanho do juros: \n");
    scanf("%f", &rateInput);

    showFeesRate(depositInput, rateInput);

    return 0;
}
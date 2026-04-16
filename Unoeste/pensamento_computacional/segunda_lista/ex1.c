#include <stdio.h>
#include<stdbool.h>

bool avarageNotes(float n1, float n2) {
    return (n1 + n2) / 2 > 6 ? true : false;
}

void showResult(bool result) {
    result == true ? printf("Você foi aprovado!! \n") : printf("Você foi reprovado \n");
}

int main() {
    float noteOne, noteTwo;
    printf("Primeira nota? \n");
    scanf("%f", &noteOne);

    printf("Segunda nota? \n");
    scanf("%f", &noteTwo);
    
    showResult(avarageNotes(noteOne, noteTwo));

    return 0;
}
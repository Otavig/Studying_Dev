#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool voteAllow(int age) {
    if (age >= 18 && age < 69) {
        return true;
    }

    char choose;

    if (age == 15) {
        do {
            printf("Você vai fazer aniversário ainda esse ano? (S/N)\n");
            scanf(" %c", &choose);
            choose = toupper(choose);
        } while (choose != 'S' && choose != 'N');

        return (choose == 'S');
    }

    if ((age >= 16 && age < 18) || age >= 70) {
        do {
            printf("Você quer votar? (S/N)\n");
            scanf(" %c", &choose);
            choose = toupper(choose);
        } while (choose != 'S' && choose != 'N');

        return (choose == 'S');
    }

    return false;
}

int main() {
    int age;
    printf("Digite sua idade: \n");
    scanf("%d", &age);

    printf("Você %s votar!\n", voteAllow(age) ? "pode" : "não pode");

    return 0;
}

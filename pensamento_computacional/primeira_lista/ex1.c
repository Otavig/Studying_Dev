#include <stdio.h>

int ageNow(int year, int yearBirth) {
    char response;
    printf("Já fez aniversario? (s/n) \n");
    scanf(" %c", &response);
    getchar();

    return (response == 's') ? year - yearBirth : year - yearBirth - 1;
}

int main() {
    int year, yearBirth;

    printf("Que ano você está? \n");
    scanf("%d", &year);

    printf("Que ano você nasceu? \n");
    scanf("%d", &yearBirth);

    printf("A sua idade é de %d anos. \n", ageNow(year, yearBirth));

    return 0;
}
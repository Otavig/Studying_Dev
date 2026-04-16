#include <stdio.h>

int showAge(int yearBith, int year) {
    return year - yearBith;
}

float form() {
    float t; printf("Digite o valor de T: "); scanf("%f", &t);
    float x = 2 * t - 4, y = t / 2 + 4, w = 2 * t + 4 * y - 3 * x;
    return w;
}

int main() {
    printf("%d \n", showAge(2006, 2025));

    printf("%.2f \n", form());
    return 0;
}
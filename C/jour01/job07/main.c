#include <stdio.h>

int main() {
    float a, b;
    printf("Entrez deux nombres séparés par un espace : ");
    scanf("%f %f", &a, &b);
    printf("%.3f + %.3f = %.3f\n", a, b, a + b);
    printf("%.3f - %.3f = %.3f\n", a, b, a - b);
    printf("%.3f * %.3f = %.3f\n", a, b, a * b);
    if (b != 0) {
        printf("%.3f / %.3f = %.3f\n", a, b, a / b);
    } else {
        printf("Impossible de diviser par 0.\n");
    }
    return 0;
}

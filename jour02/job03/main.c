#include <stdio.h>

float my_add(float a, float b) {
    return a + b;
}

float my_sub(float a, float b) {
    return a - b;
}

float my_mul(float a, float b) {
    return a * b;
}

float my_div(float a, float b) {
    return a / b;
}

int main() {
    float a, b, result;
    char sign;

    printf("Entrer deux nombres et un operateur (+, -, *, /): ");
    scanf("%f %f %c", &a, &b, &sign);

    switch (sign) {
        case '+':
            result = my_add(a, b);
            break;
        case '-':
            result = my_sub(a, b);
            break;
        case '*':
            result = my_mul(a, b);
            break;
        case '/':
            result = my_div(a, b);
            break;
        default:
            printf("Opérateur invalide.\n");
            return 1;
    }

    printf("%.3f %c %.3f = %.3f\n", a, sign, b, result);

    return 0;
}

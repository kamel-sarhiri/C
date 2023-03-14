#include <stdio.h>

float my_add(float a, float b) {
    float result = a + b;
    printf("%.3f + %.3f = %.3f\n", a, b, result);
    return result;
}

float my_sub(float a, float b) {
    float result = a - b;
    printf("%.3f - %.3f = %.3f\n", a, b, result);
    return result;
}

float my_mul(float a, float b) {
    float result = a * b;
    printf("%.3f * %.3f = %.3f\n", a, b, result);
    return result;
}

float my_div(float a, float b) {
    if (b == 0) {
        printf("Erreur: division par zero\n");
        return 0;
    }
    float result = a / b;
    printf("%.3f / %.3f = %.3f\n", a, b, result);
    return result;
}

int my_mod(int a, int b) {
    if (b == 0) {
        printf("Erreur: modulo par zero\n");
        return 0;
    }
    int result = a % b;
    printf("%d mod %d = %d\n", a, b, result);
    return result;
}

int main() {
    float a, b;
    printf("Entrer deux nombres: ");
    scanf("%f %f", &a, &b);
    my_add(a, b);
    my_sub(a, b);
    my_mul(a, b);
    my_div(a, b);
    int a_int = (int) a;
    int b_int = (int) b;
    my_mod(a_int, b_int);
    return 0;
}

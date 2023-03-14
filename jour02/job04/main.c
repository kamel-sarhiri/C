#include <stdio.h>
#include <math.h>

int main() {
    double base, exponent, result;
    printf("Entrez la base : ");
    scanf("%lf", &base);
    printf("Entrez l'exposant : ");
    scanf("%lf", &exponent);
    result = pow(base, exponent);
    printf("%.2lf ^ %.2lf = %.2lf", base, exponent, result);
    return 0;
}

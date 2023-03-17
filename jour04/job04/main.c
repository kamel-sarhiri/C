#include <stdio.h>

void my_swap(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int x, y;
    printf("Entrez deux entiers separes par un espace : ");
    scanf("%d %d", &x, &y);
    printf("Avant l'echange : x = %d, y = %d\n", x, y);
    my_swap(&x, &y);
    printf("Après l'echange : x = %d, y = %d\n", x, y);
    return 0;
}

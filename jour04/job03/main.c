#include <stdio.h>

int count_A(char* str) {
    int count = 0;
    while (*str != '\0') {
        if (*str == 'A' || *str == 'a') {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[] = "AaBcAd";
    int count = count_A(str);
    printf("Le nombre d'occurrences de la lettre 'A' est : %d\n", count);
    return 0;
}

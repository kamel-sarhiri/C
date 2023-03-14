#include <stdio.h>

int count_vowels(char* word) {
    int a_count = 0;
    int e_count = 0;
    int i_count = 0;

    for (int i = 0; word[i] != '\0'; i++) {
        char c = word[i];
        if (c == 'a' || c == 'A') {
            a_count++;
        } else if (c == 'e'|| c == 'E') {
            e_count++;
        } else if (c == 'i'|| c == 'I') {
            i_count++;
        }
    }

    printf("Le mot \"%s\" contient :\n", word);
    printf("- %d a\n", a_count);
    printf("- %d e\n", e_count);
    printf("- %d i\n", i_count);

    return a_count + e_count + i_count;
}

int main() {
    char word[] = "La_plateforme";
    int count = count_vowels(word);

    count = 0;
    for (int i = 0; word[i] != '\0'; i++) {
        char c = word[i];
        if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I') {
            count++;
        }
    }
    printf("Total de 'a','e','i' (avec boucle for) : %d\n", count);

    return 0;
}



#include <stdio.h>
#include <stdlib.h>

int *char_to_ascii(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    int *ascii_values = malloc(length * sizeof(int));
    for (int i = 0; i < length; i++) {
        ascii_values[i] = (int) str[i];
    }
    return ascii_values;
}

int main() {
    char str[] = "Hello, world!";
    int *ascii_values = char_to_ascii(str);
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c: %d\n", str[i], ascii_values[i]);
    }
    free(ascii_values);
    return 0;
}

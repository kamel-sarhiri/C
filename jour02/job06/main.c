#include <stdlib.h>
#include <stdio.h>

char* ascii_to_char(int* ascii_arr, int size) {
    char* char_arr = malloc(sizeof(char) * size);
    for (int i = 0; i < size; i++) {
        char_arr[i] = (char)ascii_arr[i];
    }
    return char_arr;
}

int main() {
    int ascii_arr[] = {72, 101, 108, 108, 111, 32, 87, 111, 114, 108, 100, 33};
    int size = sizeof(ascii_arr) / sizeof(int);
    char* char_arr = ascii_to_char(ascii_arr, size);
    printf("%s\n", char_arr);
    free(char_arr);
    return 0;
}

#include <stdio.h>

void findMinMax(int arr[], int size, int* minPtr, int* maxPtr) {
    if (size <= 0) {
        return;
    }
    
    int minVal = arr[0];
    int maxVal = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    
    *minPtr = minVal;
    *maxPtr = maxVal;
}

int main() {
    int arr[] = {10, 22, 1, 25, 85, 12, 35, 264, 145};
    int size = sizeof(arr) / sizeof(arr[0]);
    int minVal, maxVal;
    
    findMinMax(arr, size, &minVal, &maxVal);
    
    printf("Le minimum est : %d\n", minVal);
    printf("Le maximum est : %d\n", maxVal);
    
    return 0;
}

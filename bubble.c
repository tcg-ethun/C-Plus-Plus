#include <stdio.h>

int main() {
    int arr[7] = {51, 23, 42, 11, 2,46,24};
    int n = 7;
    int i, j, temp;

    // Bubble Sort algorithm
    for (i = 0; i < n - 1; i++) {

        for (j = 0; j < n - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

#include <stdio.h>
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n; scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Original array: \n");
    for (int x  = 0; x < n; x ++) printf("%d ", arr[x]);
    printf("\n");

    insertionSort(arr, n);

    printf("Sorted array: \n");
    for (int x  = 0; x < n; x ++) printf("%d ", arr[x]);

    return 0;
}


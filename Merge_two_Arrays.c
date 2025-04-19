#include<stdio.h>
int main() {
    int size1, size2;
    printf("Enter the size of Array1 ans Array2 : \n");
    scanf("%d %d", &size1, &size2);
    int Array1[size1], Array2[size2];
    printf("Enter the Array1 element:\n");
    for(int i = 0; i < size1; i++) {
        scanf("%d", &Array1[i]);
    }
    printf("Enter the Array2 element:\n");
    for(int i = 0; i < size2; i++) {
       scanf("%d", &Array2[i]);
    }
    int index = size1;
    int Merge[size1+size2];
    for(int i = 0; i < size1; i++) {
        Merge[i] = Array1[i];
    }
    for(int i = 0; i < size2; i++) {
        Merge[index++] = Array2[i];
    }
    for(int i = 0; i < size1+size2; i++) {
        printf("%d ", Merge[i]);
    }
    printf("\n");
}


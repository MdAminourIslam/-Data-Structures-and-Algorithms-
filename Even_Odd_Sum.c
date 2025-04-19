#include<stdio.h>
int main() {
    int size;
    printf("Enter the size of Array:\n");
    scanf("%d", &size);
    int Element[size];
    for(int i = 0; i < size; i++) {
        scanf("%d", &Element[i]);
    }
   int Odd_Sum = 0, Even_Sum = 0;
   for(int i = 0; i < size; i++) {
    if(Element[i]%2) {
        Odd_Sum += Element[i];
    } else {
        Even_Sum += Element[i];
    }
   }
  printf("Even sum = %d\nOdd sum = %d\n", Even_Sum, Odd_Sum);
}


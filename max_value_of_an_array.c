#include<stdio.h>
int main() {
    int size;
    printf("Enter the size of Array:\n");
    scanf("%d", &size);
    int Max_Value[size];
    for(int i = 0; i < size; i++) {
        scanf("%d", &Max_Value[i]);
    }
    int mx = -1000000000;
    for(int i = 0; i < size; i++) {
        if(mx < Max_Value[i]) {
            mx = Max_Value[i];
        }
    }
  printf("Max Value = %d\n", mx);
}

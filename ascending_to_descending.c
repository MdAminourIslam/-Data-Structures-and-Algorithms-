#include<stdio.h>
int main() {
  int n;
  printf("Enter size of array :");
  scanf("%d ", &n);
  int array[n];
  for(int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }
  int l = 0, r = n - 1, temp;
  while(l <= r) {
    temp = array[l];
    array[l] = array[r];
    array[r] = temp;
    l++, r--;
  }
   for(int i = 0; i < n; i++) {
    printf("%d ", array[i]);
   }
   printf("\n");

  return 0;
}


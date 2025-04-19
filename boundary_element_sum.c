#include<stdio.h>
int main() {
  int n, m;
  printf("Enter number of rows and column :");
  scanf("%d %d", &n, &m);
  int array[n][m];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
        scanf("%d", &array[i][j]);
    }
  }
  int boundary_element_sum = 0;
  for(int i = 0; i < n; i++) {
    if(i == 0 || i == n - 1) {
        for(int j = 0; j < m; j++) {
            boundary_element_sum += array[i][j];
        }
    } else {
        boundary_element_sum += array[i][0];
        boundary_element_sum += array[i][m-1];
    }
  }
  printf("boundary_element_sum : %d\n", boundary_element_sum);
  return 0;
}

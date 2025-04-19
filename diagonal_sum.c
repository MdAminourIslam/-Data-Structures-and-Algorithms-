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
  int diagonal_element_sum = 0;
  for(int i = 0; i < n; i++) {
    if(i <= m - 1) {
    diagonal_element_sum += array[i][i];
    }

    int j = m - i - 1;
    if(j >= 0 && i != j) {
    diagonal_element_sum += array[i][j];
    }
  }
  printf("Diagonal_element_sum : %d\n", diagonal_element_sum);
  return 0;
}


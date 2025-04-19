#include<stdio.h>
int main() {
  int n, m;
  printf("Enter number of rows and column :");
  scanf("%d %d", &n, &m);
  int array[n][m];
  int zero = -1, indxrow , indxcolumn;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
        scanf("%d", &array[i][j]);
        if(array[i][j] == 0) {
            zero = 1;
            indxrow = i;
            indxcolumn = j;
        }
    }
  }
  if(zero == -1) {
    printf("Zero not found!!\n");
    return 0;
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
        if(i == indxrow || j == indxcolumn) {
            array[i][j] = 0;
        }
    }
  }
   printf("Result Matrix : \n\n");
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
        printf("%d ", array[i][j]);
    }
   printf("\n");
  }
  return 0;
}


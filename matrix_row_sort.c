#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number of Size :");
    scanf("%d", &n);
    int array[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &array[i][j]);
        }
    }
    int indx, mn, temp;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 1; j++) {
            indx = -1, mn = array[i][j];
            for(int l = j + 1; l < n; l++) {
                if(array[i][l] < mn) {
                    mn = array[i][l];
                    indx = l;
                }
            }
            if(indx != -1) {
                temp = array[i][j];
                array[i][j] = mn;
                array[i][indx] = temp;
            }
            for(int j = 0; j < n; j++) {
                printf("%d ", array[i][j]);
            }
            printf("\n");
        }
    }
    printf("\n\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
        printf("%d ", array[i][j]);
     }
     printf("\n");
   }
  return 0;
}


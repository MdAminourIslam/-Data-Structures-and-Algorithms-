#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number of Size :");
    scanf("%d", &n);
    int array[n], temp;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int indx;
    for(int i = 1; i < n; i++)
    {
        temp = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > temp)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = temp;
        for(int i = 0; i < n; i++)
        {
            printf("%d ", array[i]);
        }
        printf("\n");
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}



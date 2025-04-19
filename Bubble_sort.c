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
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
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

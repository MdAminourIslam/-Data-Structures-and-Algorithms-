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
    int indx, mn;
    for(int i = 0; i < n; i++)
    {
        indx = -1, mn = array[i];
        for(int j = i + 1; j < n; j++)
        {
            if(array[j] < mn)
            {
                indx = j;
                mn = array[j];
            }
        }
        if(indx != -1)
        {
            temp = array[i];
            array[i] = mn;
            array[indx] = temp;
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


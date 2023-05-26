#include <stdio.h>

int main()
{
    int n, max;
    printf("enter the number to add in array:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the value of %d index:", i + 1);
        /* To make user comfrot we make index with 1
        and not with 0*/
        scanf("%d", &arr[i]);
    }
    printf("\t\n************\t\n");

    printf("{");

    for (int i = 0; i < n - 1; i++)
    {
        printf("%d,", arr[i]);
    }

    printf("%d}\n", arr[n - 1]);

    for (int j = 1; j < n; j++)
    {
        if (arr[j] > arr[0])
        {
            max = arr[j];
        }
        else
        {
            max = arr[0];
        }
    }

    printf("the max value in array is %d", max);

    return 0;
}
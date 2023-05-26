#include <stdio.h>

/// @brief 
/// @return 
int main()
{
    int n, src;
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
    printf("please enter element to search:");
    scanf("%d", &src);
    for (int i = 0; i < n; i++)
    {
        if (src == arr[i])
        {
            printf("element found at %d index\n", i);
        }
        else
        {
            printf("element not found at index %d\n", i);
        }
    }

    return 0;
}
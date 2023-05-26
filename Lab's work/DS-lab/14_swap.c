#include <stdio.h>
int swap(int *a, int *b, int *temp)
{
    *temp = *a;
    *a = *b;
    *b = *temp;
    return *a, *b;
}

int main()
{
    int a, b, temp;
    int *i = &a, *j = &b, *k = &temp;
    printf("Please enter a and b :");
    scanf("%d%d", &a, &b);
    printf("value of a and b before swaping are %d and %d\n", a, b);
    swap(i, j, k);
    printf("value of a and b after swaping are %d and %d\n", a, b);

    return 0;
}
#include <stdio.h>
int main()
{
    int n, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Reverse of %d Number is ", n);
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    printf("%d", rev);
    return 0;
}
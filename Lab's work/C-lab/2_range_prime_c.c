#include <stdio.h>
void main()
{
    int i, num, n, c = 0, count;
    printf("Enter the range: ");
    scanf("%d", &n);
    printf("The prime numbers in between the range 1 to %d:", n);
    for (num = 1; num <= n; num++)
    {
        count = 0;
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0 && num != 1)
        {
            printf("\n%d\n ", num);
            c += 1;
        }
    }
    printf("no of prime no are %d", c);
}
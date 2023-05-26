#include <stdio.h>
void main() {
  int i, num, n, c = 0, count;
  printf("Enter the range: ");
  scanf("%d", &n);
  printf("The prime numbers in between the range 1 to %d:\n", n);
  num = 1;
  if (n >= 2) {
    printf("2\n");

    do {
      count = 0;
      i = 2;
      do {
        if (num % i == 0) {
          count++;
          break;
        }
        i++;
      } while (i <= num / 2);
      if (count == 0 && num != 1) {
        printf("\n%d\n ", num);
        c += 1;
      }
      num++;
    } while (num <= n);

    printf("\nno of prime no are %d", c + 1);
  } else {
    do {
      count = 0;
      i = 2;
      do {
        if (num % i == 0) {
          count++;
          break;
        }
        i++;
      } while (i <= num / 2);
      if (count == 0 && num != 1) {
        printf("\n%d\n ", num);
        c += 1;
      }
      num++;
    } while (num <= n);

    printf("\nno of prime no are %d", c);
  }
}
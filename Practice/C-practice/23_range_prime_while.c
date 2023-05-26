#include <stdio.h>
void main() {
  int i, num, n, c = 0, count;
  printf("Enter the range: ");
  scanf("%d", &n);
  printf("The prime numbers in between the range 1 to %d:", n);
  num = 1;
  while (num <= n) {
    count = 0;
    i = 2;
    while (i <= num / 2) {
      if (num % i == 0) {
        count++;
        break;
      }
      i++;
    }
    if (count == 0 && num != 1) {
      printf("\n%d\n ", num);
      c += 1;
    }
    num++;
  }

  printf("no pof prime no are %d", c);
}
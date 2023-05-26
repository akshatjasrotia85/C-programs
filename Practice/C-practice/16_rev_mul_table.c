#include <stdio.h>
int main() {
  unsigned int num;
  printf("enter numnber whose table you wnat:");
  scanf("%d", &num);
  unsigned int n;
  printf("enter number upto which you wnat table:");
  scanf("%d", &n);
  while (n!=0) {
    printf("%d x %d = %d\n", num, n, num * n);
    n--;
  }
  return 0;
}
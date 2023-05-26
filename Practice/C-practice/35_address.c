#include <stdio.h>
int main() {
  int a, c, *b = &c;
  printf("enter number:");
  scanf("%d", &a);
  printf("enter number:");
  scanf("%d", b);
  printf("%u\n", &a);
  printf("%u\n", b);
  printf("%d\n", &a);
  printf("%d\n", a);
  printf("%d\n", *b);
  return 0;
}
#include <stdio.h>
int s(int n) {
  int sum = 1;
  if (n == 1) {
    return 1;
  } else {
    sum =n+s(n-1);
  }
  return sum;
}
int main() {
  int num;
  printf("enter a number upto which you wnat sum:");
  scanf("%d", &num);
  printf("%d is the sum of natural numbers upto %d number\n", s(num), num);
  return 0;
}
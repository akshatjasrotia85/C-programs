#include <stdio.h>
int s(int n) {
  int sum = 1;
  if (n == 1|| n==0) {
    return 1;
  } else {
    sum = n * s(n - 1);
  }
  return sum;
}
int main() {
  int num;
  printf("enter a number of which you wnat factorial:");
  scanf("%d", &num);
  printf("%d != %d \n", num, s(num));
  return 0;
}
#include <stdio.h>
int main() {
  int n, num;
  printf("enter number whose table you wnat:");
  scanf("%d", &num);
  printf("enter number upto which you wnat table to be:");
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    arr[i] = num * i+1;
    printf("%d X %d = %d\n", num, i+1, arr[i]);
  }
  return 0;
}
#include <stdio.h>

int main() {
  int n, a;
  printf("enter the number to add in array:");
  scanf("%d", &n);
  printf("enter the number upto which you want to add in array:");
  scanf("%d", &a);
  int arr[n];
  for (int i = 0; i < a; i++) {
    printf("enter the value of %d index:", i + 1);
    /* To make user comfrot we make index with 1
    and not with 0*/
    scanf("%d", &arr[i]);
  }
  for (int j = n - a; j < n; j++) {
    printf("do you want to add at %d in array:", j + 1);
    scanf("%d", &arr[j]);
    printf("%d blocks left in array\n", n - j - 1);
  }
  printf("\t\n************\t\n");

  printf("{");

  for (int i = 0; i < n - 1; i++) {
    printf("%d,", arr[i]);
  }

  printf("%d}\n", arr[n - 1]);
  return 0;
}
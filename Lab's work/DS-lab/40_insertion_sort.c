#include <stdio.h>
int main() {
  int n, sort = 0;

  printf("Enter number of elements:");
  scanf("%d", &n);
  int a[n], i;
  printf("Enter %d Numbers:\n", n);
  for (int o = 0; o < n; o++)
    scanf("%d", &a[o]);
  int key, j;
  for (i = 1; i < n; i++) {
    key = a[i];
    j = i - 1;

    /* Move elements of arr[0..i-1], that are
      greater than key, to one position ahead
      of their current position */
    while (j >= 0 && a[j] > key) {
      a[j + 1] = a[j];
      j = j - 1;
    }
    a[j + 1] = key;
  }
  for (i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  return 0;
}
#include <stdio.h>
int main() {
  int n;
  printf("enter size of array:");
  scanf("%d", &n);
  int arr[n];
  int i = 0;
  while (i < n) {
    printf("enter a[%d]:", i + 1);
    scanf("%d", &arr[i]);
    i++;
  }
  for (int j = 0; j < n; j++) {
    for (int k = j + 1; k < n; k++) {
      if (arr[j] >= arr[k]) {
        int temp;
        temp = arr[j];
        arr[j] = arr[k];
        arr[k] = temp;
      }
    }
  }
  int l = 0;
  while (l < n) {
    printf("%d ", arr[l]);
    l++;
  }
  return 0;
}
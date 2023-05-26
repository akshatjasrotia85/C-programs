#include <stdio.h>
void pos(int a[], int n) {
  for (int i = 0; i < n; i++) {
    if (a[i] >= 0) {
      printf("%d ", a[i]);
    }
  }
}
int main() {
  int n;
  printf("enter size of array:");
  scanf("%d", &n);
  int arr[n];
  printf("enter %d elements:\n", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  pos(arr, n);
  return 0;
}
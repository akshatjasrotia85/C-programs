#include <stdio.h>
int main() {
  // makingt array
  int n, a;
  printf("Enter the number of elements to add:");
  scanf("%d", &n);
  int arr[n], i = 0;
  while (i < n) {
    printf("Enter the %dth element:", i + 1);
    scanf("%d", &arr[i]);
    i++;
  }
  // sorting array in descending order
  for (i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {

      if (arr[i] > arr[j]) {
        a = arr[i];
        arr[i] = arr[j];
        arr[j] = a;
      }
    }
  }
  i = 0;
  while (i < n) {
    printf("%d\n", arr[i]);
    i++;
  }
  //   binary searching code snippet
  int key;
  printf("Enter value to find:");
  scanf("%d", &key);
  int low = 0;
  int high = n - 1;
  int mid = (low + high) / 2;
  while (low <= high) {
    if (arr[mid] < key)
      low = mid + 1;
    else if (arr[mid] == key) {
      printf("%d found at location %d\n", key, mid + 1);
      break;
    } else
      high = mid - 1;
    mid = (low + high) / 2;
  }
  if (low > high)
    printf("Not found! %d isn't present in the list\n", key);
  return 0;
}

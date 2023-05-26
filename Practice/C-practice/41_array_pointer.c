#include <stdio.h>
int main() {
  int arr[10] = {1, 2, 3};
  int *ptr = &arr[0]; //*ptr=arr<-array name is  itself is pointer constant at
                      // base address;
  printf("%d->*ptr+2 = %d->arr[2]\n", *(ptr + 2), arr[2]);
  return 0;
}
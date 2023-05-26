#include <stdio.h>
#include <stdlib.h>
int main() {
  int n;
  printf("enter size of array:");
  scanf("%d", &n);
  int *ptr;
  //   ptr = (int *)malloc(n,sizeof(int));
  ptr = (int *)calloc(n, sizeof(int));
  int i = 0;
  while (i < n) {
    printf("enter element at %d:", i + 1);
    scanf("%d", &ptr[i]);
    i++;
  }
  i = 0;
  while (i < n) {
    printf("element at %d=%d\n", i, ptr[i]);
    i++;
  }
  int m;
  printf("enter new size:");
  scanf("%d", &m);
  ptr=realloc(ptr, m * sizeof(int));
  i = 0;
  while (i < m) {
    printf("enter element at %d:", i + 1);
    scanf("%d", &ptr[i]);
    i++;
  }
  i = 0;
  while (i < m) {
    printf("element at %d=%d\n", i, ptr[i]);
    i++;
  }
  return 0;
}
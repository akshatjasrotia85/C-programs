#include <stdio.h>
#include <stdlib.h>
int main() {
  int n;
  printf("enter size of array:");
  scanf("%d", &n);
  float *p;
  // DMA...
  p = malloc(n * sizeof(float));
  if (p == NULL) {
    printf("memory can't be allocted\n");
  } else {
    int i = 0;
    while (i < n) {
      printf("enter %d elment:", i + 1);
      scanf("%f", p + i);
      i++;
    }
    i = 0;
    while (i < n) {
      printf("%.f\n", (*p + i));
      i++;
    }
  }
  // FREEING MEMORY...
  free(p);
  // GARBAGE OUTPUT....
  int i = 0;
  while (i < n) {
    printf("%f\n", (*p + i));//or (*p+1) or *p..
    i++;
  }
  return 0;
}
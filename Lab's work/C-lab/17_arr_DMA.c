#include <stdio.h>
#include <stdlib.h>
int main() {
  int n;
  printf("enter size of array:");
  scanf("%d", &n);
  float *p;

  // p = malloc(n * sizeof(float)); // DMA
  p = calloc(n, sizeof(float)); // DMA
  if (p == NULL) {
    printf("memory can't be allocted\n");
  } else {
    int i = 0;
    while (i < n) {
      printf("enter %d elment:", i + 1);
      scanf("%f", &p[i]);
      i++;
    }
    i = 0;
    while (i < n) {
      printf("%f\n", p[i]); // or (*p+1) or *p..
      i++;
    }
    free(p);
  }
  return 0;
}
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
      printf("%.f\n", *(p + i)); // or (*p+i) or *p++
      i++;
    }
  }
  // FREEING MEMORY...
  free(p);
  p = realloc(p, 10*sizeof(int));
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
      printf("%.f size=%lu\n", *(p + i),sizeof(*p++)); // or (*p+i) or *p++
      i++;
    }
  }
  free(p);
  return 0;
}
#include <stdio.h>
float area(float x) { return x * x; }
int main() {
  float a;
  printf("enter side of square:");
  scanf("%f", &a);
  printf("%f\n", area(a));
  return 0;
}
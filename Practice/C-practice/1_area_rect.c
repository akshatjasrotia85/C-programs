#include <stdio.h>
int main() {
  float width, breath;
  printf("PLEASE ENTER WIDTH:");
  scanf("%f", &width);
  printf("PLEASE ENTER BREATH:");
  scanf("%f", &breath);
  float area = width * breath;
  printf("THE AREA OF RECTANGLE IS:%.3f\n", area);
  return 0;
}
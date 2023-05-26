#include <stdio.h>
float g(float m) { return m * 9.8; }
int main() {
  float mass;
  printf("enter mass:");
  scanf("%f", &mass);
  printf("%f is the force of gravity"
         "on object of mass %f thrown from up to earth's ground\n",
         g(mass), mass);

  return 0;
}
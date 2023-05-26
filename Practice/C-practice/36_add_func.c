#include <stdio.h>
void add(int i) { printf("%u\n", &i); }
int main() {
  int i;
  printf("%d\n", &i);
  printf("%u\n", &i);
  add(i);
  return 0;
}
#include <stdio.h>
void gm();
void ga() { printf("Good Afternoon\n"); }
void ge() { printf("Good Evening\n"); }
int main() {
  gm();
  ga();
  ge();
  return 0;
}
void gm() { printf("Good Morning\n"); }
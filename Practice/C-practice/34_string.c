#include <stdio.h>
#define and &&
int main() {
  char name1[45] = {'a', 'n', 'd'};
  char name2[45] = {'a', 'n', 'd', '\0'};
  int i = 0;
  while (name1[i] != '\0') {
    printf("%c", name1[i]);
    i++;
  }
  printf("\n");
  i = 0;
  while (name2[i] != '\0') {
    printf("%c", name2[i]);
    i++;
  }
  printf("\n");
  return 0;
}
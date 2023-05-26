#include <stdio.h>
int main() {
  char fname[10];
  printf("enter file name:");
  fgets(fname, 1000, stdin);

  FILE *p = fopen(fname, "w");
  if (p == NULL) {
    printf("file doesn't exist\n");
  } else {
    unsigned int num;
    printf("enter numnber whose table you wnat:");
    scanf("%d", &num);
    unsigned int n;
    printf("enter number upto which you wnat table:");
    scanf("%d", &n);
    int i = 01;
    while (i <= n) {
      fprintf(p, "%d x %d = %d\n", num, i, num * i);
      i++;
    }
    fclose(p);
  }
  return 0;
}
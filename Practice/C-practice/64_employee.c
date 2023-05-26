#include <stdio.h>
typedef struct employee {
  int salary;
  char name[100];
} emp;

int main() {
  char fname[10];
  printf("enter file name:");
  fgets(fname, 1000, stdin); // gets(fname)..

  FILE *p = fopen(fname, "w");
  if (p == NULL) {
    printf("file doesn't exist\n");
  } else {
    int n;
    printf("enter number of employee:");
    scanf("%d", &n);

    emp a[n];
    int i = 0;
    while (i < n) {
      printf("enter name of employee:");
      scanf(" ");
      fgets(a[i].name, 1000, stdin); // gets(a[i].name)..
      unsigned int num;
      printf("enter salary:");
      scanf("%d", &a[i].salary);
      i++;
    }
    i = 0;
    while (i < n) {
      fprintf(p, "Name=%s,salary=%d\n\n", a[i].name, a[i].salary);

      i++;
    }
    fclose(p);
  }
  return 0;
}
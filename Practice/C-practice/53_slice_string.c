#include <stdio.h>
// user define function.......
void slice(char a[], int n) {
  char slice[n];
  for (int i = 0; i < n; i++) {
    slice[i] = a[i];
    printf("%c", slice[i]);
  }
  printf("\n");
}
//__init_main___
int main() {
  int n;
  printf("enter length of string:");
  scanf("%d", &n);
  char string[n];
  printf("enter a string:");
  scanf(" ");
  fgets(string, n, stdin); // to replace gets in LINUX
  int m;
  printf("enter slicing part:");
  scanf(" ");
  scanf("%d", &m);
  slice(string, m);

  return 0;
}

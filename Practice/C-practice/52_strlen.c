#include <stdio.h>
int strln(char a[]) {
  int i = 0;
  while (a[i] != '\0') {
    i++;
  }
  return i;
}
int main() {
  int n;
  printf("enter length of string:");
  scanf("%d", &n);
  char string[n];
  printf("enter a string:");
  scanf(" ");
  fgets(string, n, stdin); // to replace gets in LINUX
  printf("%d is the length of string", strln(string));
  return 0;
}
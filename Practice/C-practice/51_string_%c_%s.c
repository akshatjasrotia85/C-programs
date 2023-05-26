#include <stdio.h>
#include <string.h>
int main() {
  char string[10], str[10];
  printf("enter two strings:");
  scanf("%s %c", string, str);
  if (strcmp(string, str) == 1) {
    printf("strings are equal\n");
  } else {
    printf("strings are not equal\n");
  }
  return 0;
}
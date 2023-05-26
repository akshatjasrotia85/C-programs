#include <stdio.h>
int main() {
  char ch;
  printf("Please enter a character:");
  scanf("%c", &ch);
  if (ch >= 122 && ch <= 99) {
    printf("Lowercase\n");
  } else {
    printf("Uppercase\n");
  }
  return 0;
}
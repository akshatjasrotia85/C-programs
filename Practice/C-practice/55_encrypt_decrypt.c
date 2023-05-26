#include <stdio.h>
void encrypt(char *p) {
  int i = 0;
  while (p[i] != '\0') {
    printf("%c", (p[i]) + 1);
    i++;
  }
  printf("\n");
}
void decrypt(char *p) {
  int i = 0;
  while (p[i] != '\0') {
    printf("%c", (p[i]));
    i++;
  }
  printf("\n");
}
int main() {
  char *p;
  printf("enter string:");
  fgets(p, 100000000, stdin);
  printf("\n");
  encrypt(p);
  decrypt(p);

  return 0;
}
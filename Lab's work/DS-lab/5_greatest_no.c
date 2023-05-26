#include <stdio.h>

int main() {
  int a, b, c;
  printf("please enter a b c;");
  scanf("%d%d%d", &a, &b, &c);

  if (a > b && a > c) {

    printf("a is the greatest no\n");

    if (a == b) {
      printf("also a and b are equa\n");
    }
    if (a == c) {
      printf("also a and c are equal \n");
    }
    if (c == b) {
      printf("also c and b are equal \n");
    }
  }

  else if (b > c && b > a) {

    printf("b is the greatest no\n");

    if (a == b) {
      printf("also a and b are equal \n");
    }
    if (a == c) {
      printf("also a and c are equal \n");
    }
    if (c == b) {
      printf("also c and b are equal \n");
    }
  }

  else if (c > a && c > b) {

    printf("c is the greatest no\n");

    if (a == b) {
      printf("also a and b are equal \n");
    }
    if (a == c) {
      printf("also a and c are equal \n");
    }

    if (c == b) {
      printf("also c and b are equal \n");
    }
  } else {
    printf("all are equal\n");
  }

  return 0;
}
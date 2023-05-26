#include <stdio.h>
typedef struct node {
  int x;
  int y;
} nd;
int sumvect(nd a[], int i) {
  int sum = 0;
  int sum_x = 0;
  int sum_y = 0;
  while (i > 0) {
    sum_x += a[i].x + a[i - 1].x;
    sum_y += a[i].y + a[i - 1].y;
    sum += sum_x + sum_y;
    i--;
  }
  return sum;
}
int main() {
  int n;
  printf("enter number of vectors:");
  scanf("%d", &n);
  nd a[n];
  int i = 0;
  printf("\n");
  while (i < n) {
    printf("enter %d vector x-coord.=", i + 1);
    scanf("%d", &a[i].x);
    // printf("\t");
    printf("enter %d vector y-coord.=", i + 1);
    scanf("%d", &a[i].y);
    // printf("\n");
    printf("\n");
    ++i;
  }
  printf("\nPRINTING\n");
  printf("******************************\n\n");
  i = 0;
  while (i < n) {
    printf("%d vector x-coord.=%d\t", i + 1, a[i].x);
    printf("%d vector y-coord.=%d\n", i + 1, a[i].y);
    printf("\n");
    i++;
  }
  printf("\n\nenter number of vectors to add=");
  scanf("%d", &i);
  int j = i - 1;
  if (i > 1) {
    printf("\n\nSum of these vectos=%d\n\n", sumvect(a, j));
  } else {
    printf("\n\nSum can't happen\n\n");
  }
  return 0;
}
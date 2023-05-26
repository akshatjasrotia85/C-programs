#include <stdio.h>
int main() {
  int m1, n1;

  printf("Enter the rows for 1st matrix:");
  scanf("%d", &m1);
  printf("Enter the columns for 1st matrix:");
  scanf("%d", &n1);

  int i = 0, j = 0, r, c, a[m1][n1];

  printf("\nEnter elements of 1st matrix:\n");
  while (i < m1) {
    int j = 0;
    while (j < n1) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
      j++;
    }
    ++i;
  }

  // printing matrix
  i=0;
  while(i < m1) {
    j=0;
    while(j < n1) {
      printf("%d   ", a[i][j]);
      j++;
    }
    printf("\n");
    i++;
  }
}
#include <stdio.h>
int main() {
  int m1, n1, m2, n2;

  printf("Enter the rows for 1st matrix:");
  scanf("%d", &m1);
  printf("Enter the columns for 1st matrix:");
  scanf("%d", &n1);
  printf("Enter the rows for 2st matrix:");
  scanf("%d", &m2);
  printf("Enter the columns for 2st matrix:");
  scanf("%d", &n2);

  int i, j, a[m1][n1], b[m2][n2];

  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < m1; ++i)
    for (j = 0; j < n1; ++j) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < m2; ++i)
    for (j = 0; j < n2; ++j) {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }

  // printing matrices
  printf("1st & 2nd Matrices are.....\n");
  for (i = 0; i < m1; ++i) {
    for (j = 0; j < n1; ++j) {
      printf("%d   ", a[i][j]);
    }
    printf("\n");
  }

  printf("\n");

  for (i = 0; i < m2; ++i)
    for (j = 0; j < n2; ++j) {
      printf("%d   ", b[i][j]);
      if (j == n2 - 1) {
        printf("\n");
      }
    }

  // multipling two matrices
  if (n1 == m2) {
    int mut[m1][n2];

    for (i = 0; i < n1; ++i)
      for (j = 0; j < m2; ++j) {
        mut[i][j] = 0;

        for (int k = 0; k < m1; k++) {

          mut[i][j] += a[i][k] * b[k][j];
        }
      }

    // printing the result
    printf("\nMultiplication of two matrices: \n");
    for (i = 0; i < m1; ++i)
      for (j = 0; j < n; ++j) {
        printf("%d   ", mut[i][j]);
        if (j == n2 - 1) {
          printf("\n");
        }
      }
  } else {
    printf("Multiplication not possible becasue matrices have non equal "
           "post-row and "
           "pre-column\n");
  }

  return 0;
}

#include <stdio.h>
void mul(int, int, int, int);
void add(int, int, int, int);
void trans(int, int, int, int);
int main() {
  int m1, n1, m2, n2;
  printf("enter size of 1st matrix:");
  scanf("%d%d", &m1, &n1);
  printf("enter size of 2st matrix:");
  scanf("%d%d", &m2, &n2);

  int ch;
  printf("1-MUL,2-ADD,3-TRANS\n");
  printf("enter a choice:");
  scanf("%d", &ch);

  if (ch == 1) {
    mul(m1, n1, m2, n2);
  }

  if (ch == 2) {
    add(m1, n1, m2, n2);
  }
  if (ch == 3) {
    trans(m1, n1, m2, n2);
  }
  return 0;
}
void mul(int m1, int n1, int m2, int n2) {
  int a[m1][n1], b[m2][n2], mut[n1][m2], i, j, k;
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
      for (j = 0; j < n2; ++j) {
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
}

void add(int m1, int n1, int m2, int n2) {
  int a[m1][n1], b[m2][n2], sum[n1][m2], i, j;
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

  if (m1 == m2 && n1 == n2) {
    int sum[m1][n1];

    for (i = 0; i < m1; ++i)
      for (j = 0; j < n1; ++j) {
        sum[i][j] = a[i][j] + b[i][j];
      }

    // printing the result
    printf("\nSum of two matrices: \n");
    for (i = 0; i < m1; ++i)
      for (j = 0; j < n1; ++j) {
        printf("%d   ", sum[i][j]);
        if (j == n1 - 1) {
          printf("\n");
        }
      }
  } else {
    printf("Addition not possible becasue matrices have non equal row and "
           "column\n");
  }
}

void trans(int m1, int n1, int m2, int n2) {
  int a[m1][n1], b[m2][n2], t[n1][m1], tr[n2][m2], i, j;
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
  for (i = 0; i < m1; ++i)
    for (j = 0; j < n1; ++j)
      t[j][i] = a[i][j];

  printf("\n");

  for (i = 0; i < m2; ++i)
    for (j = 0; j < n2; ++j)
      tr[j][i] = b[i][j];

  printf("Transpose............\n");
  for (i = 0; i < n1; ++i) {

    for (j = 0; j < m1; ++j) {
      printf("%d ", t[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  for (i = 0; i < n2; ++i) {

    for (j = 0; j < m2; ++j) {
      printf("%d ", tr[i][j]);
    }
    printf("\n");
  }
}

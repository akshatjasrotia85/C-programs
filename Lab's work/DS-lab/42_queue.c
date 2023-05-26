#include <stdio.h>

void enqueue(int a[], int *r, int val, int *n) {
  a[*r] = val;
  *r = *r + 1;
  *n = *n + 1;
}

void dequeue(int a[], int *f, int *n) {
  printf("\"The dequeue value is %d\"", a[*f]);
  *f = *f + 1;
  // *n = *n - 1;
}

void dispaly(int a[], int *n, int f) {
  while (f < *n) {
    printf("%d ", a[f]);
    f++;
  }
}

int main() {
  int n, m, *no = &n;
  printf("\n");
  printf("enter size of queue:");
  scanf("%d", &n);
  //   printf("\n");
  //   printf("enter element to add in queue:");
  //   scanf("%d", &m);
  int que[n];

  //   if (m > n) {
  //     printf("\n");
  //     printf("\'Invalid\'\n");
  //   }

  //   else {
  printf("\n");
  printf("\"enter %d elements:\"\n", n);

  int front = 0, *f = &front, rear = 0, *r = &rear;
  while (rear < n) {
    scanf("%d", &que[rear]);
    rear++;
  }
  while (1) {
    char ch;
    char c;
    printf("\nenter choice:\n");
    printf("\"A or a to enqueue\"\n");
    printf("\"B or b to dequeue\"\n");
    printf("\"C or c to dispaly\"\n");
    scanf(" ");
    ch = getchar();

    if (ch == 'a' || ch == 'A') {
      int val;
      printf("enter value to enqueue:");
      scanf("%d", &val);
      enqueue(que, r, val, no);
      printf("\n0 to break or any number to continue\n");
      scanf(" ");
      scanf("%c", &c);
      if (c == '0') {
        break;
      } else {
        continue;
      }

    }

    else if (ch == 'b' || ch == 'B') {
      dequeue(que, f, no);
      printf("\n0 to break or any number to continue\n");
      scanf(" ");
      scanf("%c", &c);
      if (c == '0') {
        break;
      } else {
        continue;
      }
    }

    else if (ch == 'c' || ch == 'C') {
      dispaly(que, no, front);
      printf("\n0 to break or any number to continue\n");
      scanf(" ");
      scanf("%c", &c);
      if (c == '0') {
        break;
      } else {
        continue;
      }
    }

    else {
      printf("\'Invalid\'\n");
      printf("\n0 to break or any number to continue\n");
      scanf(" ");
      scanf("%c", &c);
      if (c == '0') {
        break;
      } else {
        continue;
      }
    }
  }
  //   }

  return 0;
}
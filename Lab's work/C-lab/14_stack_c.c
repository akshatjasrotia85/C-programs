
// stack operations
//  Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
void push(int *p) {
  int x;
  printf("enter element in the stack:");
  scanf("%d", &x);
  *p = x;
}
void pop(int *p1) { printf("elemt poped = %d\n", *p1); }
void show(int b[], int mx, int top) {
  int i;
  printf("stack elements are:\n");
  for (i = top; i >= 0; i--)
    printf("%d\n", b[i]);
}

int main() {
  // Write C code here
  int max;
  printf("enter size of stack:");
  scanf("%d", &max);
  int a[max], c, top = -1, n;
  printf("enter 1 for continue any other key to exit from the program:");
  scanf("%d", &n);
  while (n == 1) {
    printf("enter - 1 for stack push - 2 for pop - 3 for show\n");
    scanf("%d", &c);
    switch (c) {
    case 1:
      if (top == max - 1) {
        printf("Stack is full\n");
      } else {
        top = top + 1;
        push(&a[top]);
      }
      break;
    case 2:
      if (top == -1) {
        printf("stack in underfull\n");
      } else {
        pop(&a[top]);
        top = top - 1;
      }
      break;
    case 3:
      show(a, max, top);
      break;
    case 4:
      exit(0);
    default:
      printf("wrong choice");
    }
    printf("enter 1 for continue any other key to exit from the program:");
    scanf("%d", &n);
  }
  return 0;
}

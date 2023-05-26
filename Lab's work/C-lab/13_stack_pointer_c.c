#include <stdio.h>
void push(int *x, int *y) { *x = *y; }
int main() {
  int max;
  printf("enter max elemnt in stack:");
  scanf("%d", &max);
  int n;
  printf("enter number of element in stack:");
  scanf("%d", &n);
  if (max < n) {
    printf("can't happen\n");
  } else {
    int arr[max], top = -1;
    printf("enter %d elements in stack:", n);
    for (int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
      top = top + 1;
    }
    int ch;
    printf("to add press 1 or 0 to exit:");
    scanf("%d", &ch);
    while (ch == 1) {
      if (top == max - 1) {
        printf("stack is full\n");
      } else {
        int item;
        printf("enter item to add:");
        scanf("%d", &item);
        top++;
        push(&arr[top], &item);
        printf("To continue press 1 or 0 to exit:");
        scanf("%d", &ch);
      }
    }
    for (int i = top; i >= 0; i--) {
      printf("%d\n", arr[i]);
    }
  }
  return 0;
}

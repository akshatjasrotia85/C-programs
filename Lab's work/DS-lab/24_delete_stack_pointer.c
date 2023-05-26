#include <stdio.h>
int main() {
  unsigned int n, max; //<--------------------------------This helps in
                       // preventing user to put negative values....
  printf("Enter the max size of stack:");
  scanf("%d", &max);
  int arr[max], i;
  printf("Enter the size of stack to use:");
  scanf("%d", &n);
  int *top = &arr[0];
  int item;
  if (n > max) {
    printf("Can't happen...sorry\nBecause size of stack can't be more than max "
           "size\n");
  } else {
    // add some element in stack....
    i = n - 1;
    while (i >= 0) {
      printf("Enter element:");
      scanf("%d", &item);
      *top = item; // or arr[i] = item;
      top = top + 1;
      i--;
    }
    // printing stack.....
    printf("\n");
    printf("TOP->");
    for (i = n - 1; i >= 0; i--) {
      printf("\t%d\n", arr[i]);
    }
    // giving choice....
    int ch;
    printf("\nDo you want to delete elements from top then enter 1 or 0 :");
    scanf("%d", &ch);
    if (ch == 1) {
      int c = 1;
      int fix = n;
      while (c == 1) {
        // condition for underflow....
        if (top == &arr[0]) {
          printf("Stack underflow\n");
          printf("No more elements can be deleted\n");
          break;
        }
        // deleting elements.....
        else {
          int ntd;
          printf("Enter number of elements to delete:");
          scanf("%d", &ntd);
          if (ntd <= n) {
            for (i = n - 1; i > (n - 1) - ntd; i--) {
              top = top - 1;
            }
            printf("\n");
            printf("TOP->");
            for (i = n - 1 - ntd; i >= 0; i--) {
              printf("\t%d\n", arr[i]);
            }
            n -= ntd;
            if (n <= 0) {
              printf("NULL\n");
              printf("Underflow\n");
              break;
            } else {
              printf("\n");
              printf("Value at top is %d\n", *(top - 1));
              printf("Do you wnat to continue 1toY or 0toN:");
              scanf("%d", &c);
            }
          } else if (ntd > n) {
            printf("This much element can't be deleted\n");
            printf("Do you wnat to continue 1toY or 0toN:");
            scanf("%d", &c);
          }
        }
      }
    } else if (ch == 0) {
      printf("Thank you\n");
      printf("\n");
      printf("Value at top is %d\n", *(top - 1));
    }
    return 0;
  }
}
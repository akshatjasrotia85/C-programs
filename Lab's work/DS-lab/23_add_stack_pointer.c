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
    printf("\nDo you want to add more elements then enter 1 or 0 :");
    scanf("%d", &ch);
    if (ch == 1) {
      int c = 1;
      int more = 0, m, l = 0, o = 0;
      while (c == 1) {
        i = n + more; // <------------THINK...........!!!!!!!!!!!!
        if (n == max || max == i) { //<----top==&arr[max]
          printf("Stack overflow\n");
          printf("More elements can't be added\n");
          break;
        }
        // how many more to add...
        else {
          printf("Enter number of element to add: ");
          scanf("%d", &m);
          more += m;
          more-=o;
          o = 0;
          i = n + more; // <------------THINK...........!!!!!!!!!!!!
          if (i <= max) {
            while (i - 1 >= n + l) {
              printf("Enter element to add:");
              scanf("%d", &item);
              *top = item; // or arr[i-1] = item;
              top = top + 1;
              i--;
            }
            l = l + m;
            printf("\n");
            printf("TOP->");
            for (i = (n + more) - 1; i >= 0; i--) {
              printf("\t%d\n", arr[i]);
            }
            printf("\n");
            printf("Value at top is %d\n", *(top - 1));
            printf("Do you want to continue press 1toY or 0toN:");
            scanf("%d", &c);
          } else {
            printf("This much element can't be added\n");
            o += m;
            printf("Do you want to continue press 1toY or 0toN:");
            scanf("%d", &c);
          }
        }
      }
      printf("Thank you\n");
      printf("\n");
      printf("Value at top is %d\n", *(top - 1));
    } else if (ch == 0) {
      printf("Thank you\n");
      printf("\n");
      printf("Value at top is %d\n", *(top - 1));
    }
  }
  return 0;
}
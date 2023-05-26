#include <stdio.h>
#include <stdlib.h>
// declaring structure....
struct linlist {
  int value;
  struct linlist *next;
};
typedef struct linlist nd;
//...init_main.......
int main() {
  // size of array...
  int n, c = 1, i;
  printf("\nenter number of students:");
  scanf("%d", &n);
  // main code.....
  nd a[n], *head = &a[0];
  for (i = 0; i <= n - 1; i++) {
    printf("\nenter value at a[%d]:", i);
    scanf("%d", &a[i].value);
    a[i].next = &a[i + 1];
  }
  a[n - 1].next = NULL;
  int ch;
  while (c == 1) {
    printf("\nenter 1-traverse,2-add\n");
    scanf("%d", &ch);
    // TRAVERSE.....
    if (ch == 1) {
      nd *k = head;
      i = 0;
      printf("\n");
      // while (k != NULL) {
      // while (k != NULL && i < n) {
      while (i < n) {
        printf("%d-", a[i].value);
        printf("%p-->", a[i].next);
        k = a[i].next;
        i++;
      }
      printf("\n1-continue,2-end\n");
      scanf("%d", &c);
      system("clear");
    }
    // ADDING.....ONLY AT START AND IN-BETWEEN....
    if (ch == 2) {
      int j;
      printf("\nenter where to add:");
      scanf("%d", &j);
      for (i = n - 1; i >= j; i--) {
        a[i + 1].value = a[i].value;
        a[i - 1].next = &a[i];
      }
      printf("\nenter value:");
      scanf("%d", &a[j].value);
      // ADDRESSING..............
      // if (j > 1) {
      //   a[j - 1].next = &a[j];
      // } else {
      //   head = &a[j];
      // }
      n++;
      a[n].next = NULL;
      printf("\n1-continue,2-end\n");
      scanf("%d", &c);
      system("clear");
    }
  }
  return 0;
}
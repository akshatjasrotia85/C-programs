#include <stdio.h>
#include <string.h>
int main() {
  int i, count = 0;
  char str[100];
  printf("enter A STRING:");
  scanf("%s", &str);
  char stk[100];
  for (i = 0; i < strlen(str); i++) {
    stk[i] = str[i];
    count = count + 1;
  }
  for (i = count - 1; i >= 0; i--) {
    printf("%c\n", stk[i]);
  }
  int c = 1;
  while (c == 1) {
    printf("\n1 to add   2 to delete:");
    int choice;
    scanf("%d", &choice);
    if (choice == 1) {
      printf("enter new character:");
      scanf(" ");
      scanf("%c", &stk[count]);
      count++;

      printf("DO you want to continue 0toN or 1toY:");
      scanf("%d", &c);
      if (c == 1) {
        continue;

      } else {
        break;
      }
    }
    if (choice == 2) {
      printf("do you want to delete a new character in string 1toY or 0toN:");
      int ch;
      scanf("%d", &ch);
      fflush(stdin);
      if (ch == 1) {
        if (count == 0) {
          printf("STACK IS EMPTY\n");
          break;
        } else {
          count = count - 1;
        }
        printf("DO you want to continue 0toN or 1toY:");
        scanf("%d", &c);
        if (c == 1) {
          continue;

        } else {
          break;
        }
      } else {
        break;
      }
    } else {
      printf("THANK YOU\n");
    }
  }
  printf("REVERSE OF STRING IS\n");
  for (i = count - 1; i >= 0; i--) {
    printf("%c", stk[i]);
  }
  printf("\n");
  return 0;
}
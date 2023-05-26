#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int priority(char opr) {
  if (opr == '^') {
    return 3;
  } else if (opr == '*' || opr == '/') {
    return 2;
  } else if (opr == '+' || opr == '-') {
    return 1;
  } else if (opr == '(' || opr == ')') {
    return 0;
  }
  return 0;
}

void infix_to_postfix(char a[], char stk[], int top) {
  int i = 0;
  while (a[i] != '\0') {
    if (a[i] == '(') {
      top++;
      stk[top] = a[i];
    } else if (a[i] == '^' || a[i] == '*' || a[i] == '/' || a[i] == '+' ||
               a[i] == '-') {
      if (priority(a[i]) <= priority(stk[top])) {
        printf("%c↓\n", stk[top]);
        stk[top] = a[i];
      } else {
        top++;
        stk[top] = a[i];
      }
    } else {
      if (a[i] == ')') {
      } else {

        printf("%c↓\n", a[i]);
      }
    }
    i++;
  }
  while (top >= 0) {
    printf("%c↓\n", stk[top]);
    top--;
  }
}

void infx_to_prefix(char rev[], char stk[], int top) {

  int k = 0;
  while (rev[k] != '\0') {
    k++;
  }

  char a[k];
  int o = k - 1;
  int j = 0;
  while (o >= 0) {
    a[j] = rev[o];
    j++;
    o--;
  }
  a[k] = '\0';
  int i = 0;
  while (a[i] != '\0') {
    if (a[i] == ')') {
      top++;
      stk[top] = a[i];
    } else if (a[i] == '^' || a[i] == '*' || a[i] == '/' || a[i] == '+' ||
               a[i] == '-') {
      if (priority(a[i]) <= priority(stk[top])) {
        printf("%c↑\n", stk[top]);
        stk[top] = a[i];
      } else {
        top++;
        stk[top] = a[i];
      }
    } else {
      if (a[i] == '(') {
      } else {

        printf("%c↑\n", a[i]);
      }
    }
    i++;
  }
  while (top >= 0) {
    printf("%c↑\n", stk[top]);
    top--;
  }
  printf("\n");
}
void postfix_to_infix(char a[], char stk[], int top) {
  int i = 0;
  while (a[i] != '\0') {
    if (a[i] == '^' || a[i] == '*' || a[i] == '/' || a[i] == '+' ||
        a[i] == '-') {
      if (top >= 1) {
        printf("%c%c%c", stk[top - 1], a[i], stk[top]);
        top -= 2;
      } else if (top == 0) {
        printf("%c%c", a[i], stk[top]);
        top--;
      }
    } else if (a[i] == '(' || a[i] == ')') {
    } else {
      top++;
      stk[top] = a[i];
      // printf("%c\n", stk[top]);
    }
    i++;
  }
}

int main() {
  char choice;
  int c = 1;
  char inf[100];
  char postf[100];
  char pref[100];
  char stack[100];
  int top = -1;
  while (c == 1) {
    printf("enter choice:\n");
    printf("a or A-infix to postfix\n");
    printf("b or B-postfix to infix\n");
    printf("c or C-infix to prefix\n");
    scanf(" ");
    choice = getchar();
    if (choice == 'A' || choice == 'a') {

      printf("enter infix expression:");
      scanf(" ");
      fgets(inf, 100, stdin);

      printf("\"POSTFIX EXPRESSION \n FROM UP TO DOWN \n IGNORING SPACES AND "
             "BRACKETS ARE:\"\n");
      infix_to_postfix(inf, stack, top);

      printf("enter 0 to exit or 1 to continue\n");
      scanf(" ");
      scanf("%d", &c);
      if (c == 0) {
        c = 0;
      } else {
        system("clear");
        continue;
      }
    }

    else if (choice == 'B' || choice == 'b') {
      printf("enter postfix expression:");
      scanf(" ");
      fgets(postf, 100, stdin);

      postfix_to_infix(postf, stack, top);

      printf("\nenter 0 to exit or 1 to continue\n");
      scanf(" ");
      scanf("%d", &c);
      if (c == 0) {
        c = 0;
      } else {
        system("clear");
        continue;
      }
    } else if (choice == 'C' || choice == 'c') {
      printf("enter infix expression:");
      scanf(" ");
      fgets(inf, 100, stdin);

      printf("\"PREFIX EXPRESSION \n FROM DOWN TO UP \n IGNORING SPACES AND "
             "BRACKETS ARE:\"\n");
      infx_to_prefix(inf, stack, top);

      printf("enter 0 to exit or 1 to continue\n");
      scanf(" ");
      scanf("%d", &c);
      if (c == 0) {
        c = 0;
      } else {
        system("clear");
        continue;
      }
    }

    else {
      printf("Invalid choice");

      printf("\nenter 0 to exit or 1 to continue\n");
      // scanf(" ");
      scanf("%d", &c);
      if (c == 0) {
        c = 0;
      } else {
        system("clear");
        continue;
      }
    }
  }
  return 0;
}
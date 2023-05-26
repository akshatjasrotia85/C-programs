#include <stdio.h>
#include <stdlib.h>
struct node {
  int value;
  struct node *next;
};
typedef struct node node; 

void traverse(node *ptr) {
  while (ptr != NULL) {
    printf("%d", ptr->value);
    printf(" with address %p\n", ptr->next);
    ptr = ptr->next;
  }
}

void insertathead(node *ptr, node *newnode) {
  // while (ptr->value != 3) {
  // ptr = ptr->next;
  node *temp;
  temp = ptr->next;
  ptr->next = newnode;
  newnode->next = temp;
  // }
}
void deletehead(node *ptr) { free(ptr); }

void insertatend(node *ptr, node *newend) {
  node *temp;
  ptr->next = newend;
  newend->next = NULL;
}

void deleteend(node *ptr, node *prev) {
  free(ptr);
  prev->next = NULL;
}

void insertloc(int v, node *ptr, node *newnode1) {
  node *i = ptr;
  while (i != NULL) {
    if (i->value == v) {
      newnode1->next = i->next;
      i->next = newnode1;
    }
    //  else {
    //   printf("enter item not found\n");
    // }
    i = i->next;
  }
}

void deleteloc(node *ptr, int v) {
  node *i = ptr;

  while (i != NULL) {
    if (i->value == v) {
      if (i->next == NULL) {
        printf("\nCan't happen\n");
      } else {

        node *temp = i->next;
        i->next = i->next->next;
        free(temp);
      }
      // else {
      //   printf("enter item not found\n");
      // }
    }
    i = i->next;
  }
}

int main() {
  node *head, *one, *two;
  head = malloc(sizeof(node));
  one = malloc(sizeof(node));
  two = malloc(sizeof(node));
  head->value = 0;
  head->next = one;
  one->value = 1;
  one->next = two;
  two->value = 2;
  two->next = NULL;
  printf("\n");
  traverse(head);
  printf("\n");

  node *newnode = malloc(sizeof(node));
  newnode->value = 3;
  insertathead(head, newnode);
  printf("\n");
  traverse(head);

  deletehead(head);
  printf("\n");
  traverse(newnode);

  node *newend = malloc(sizeof(node));
  newend->value = 4;
  insertatend(two, newend);
  printf("\n");
  traverse(newnode);

  deleteend(newend, two);
  printf("\n");
  traverse(newnode);

  printf("\n");
  int item;
  printf("enter item next to where you want to add:");
  scanf("%d", &item);
  int val;
  printf("enter item:");
  scanf("%d", &val);
  node *newnode1;
  newnode1 = malloc(sizeof(node));
  newnode1->value = val;
  insertloc(item, newnode, newnode1);
  printf("\n");
  traverse(newnode);

  printf("\n");
  printf("enter item next to where you want to delete:");
  scanf("%d", &item);
  deleteloc(newnode, item);
  printf("\n");
  traverse(newnode);

  return 0;
}
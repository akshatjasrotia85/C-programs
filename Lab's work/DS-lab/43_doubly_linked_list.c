#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};

typedef struct node Node;

void insert_at_beginning(Node **head, int value) {
  Node *new_node = (Node *)malloc(sizeof(Node));
  new_node->data = value;
  new_node->next = *head;
  *head = new_node;
}

void insert_at_end(Node **head, int value) {
  Node *new_node = (Node *)malloc(sizeof(Node));
  new_node->data = value;
  new_node->next = NULL;

  if (*head == NULL) {
    *head = new_node;
  } else {
    Node *current = *head;
    while (current->next != NULL) {
      current = current->next;
    }
    current->next = new_node;
  }
}

void insert_at_position(Node **head, int value, int position) {
  Node *new_node = (Node *)malloc(sizeof(Node));
  new_node->data = value;
  new_node->next = NULL;

  if (position == 1) {
    new_node->next = *head;
    *head = new_node;
    return;
  }

  Node *current = *head;
  int i;
  for (i = 1; i < position - 1 && current != NULL; i++) {
    current = current->next;
  }

  if (current == NULL) {
    printf("Error: Invalid position\n");
    return;
  }

  new_node->next = current->next;
  current->next = new_node;
}

void delete_at_position(Node **head, int position) {
  if (*head == NULL) {
    printf("Error: List is empty\n");
    return;
  }

  Node *temp = *head;

  if (position == 1) {
    *head = temp->next;
    free(temp);
    return;
  }

  int i;
  for (i = 1; i < position - 1 && temp != NULL; i++) {
    temp = temp->next;
  }

  if (temp == NULL || temp->next == NULL) {
    printf("Error: Invalid position\n");
    return;
  }

  Node *next_node = temp->next->next;
  free(temp->next);
  temp->next = next_node;
}

void print_list(Node *head) {
  Node *current = head;
  while (current != NULL) {
    printf("%d ", current->data);
    current = current->next;
  }
  printf("\n");
}

int main() {
  Node *head = NULL;

  insert_at_beginning(&head, 10);
  insert_at_beginning(&head, 20);
  insert_at_end(&head, 30);
  insert_at_end(&head, 40);
  insert_at_position(&head, 50, 3);

  print_list(head);

  delete_at_position(&head, 4);
  delete_at_position(&head, 1);

  print_list(head);

  return 0;
}

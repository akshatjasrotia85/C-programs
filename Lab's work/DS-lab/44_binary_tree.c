#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *left;
  struct node *right;
};

typedef struct node Node;

Node *new_node(int data) {
  Node *new_node = (Node *)malloc(sizeof(Node));
  new_node->data = data;
  new_node->left = NULL;
  new_node->right = NULL;
  return new_node;
}

Node *insert(Node *root, int data) {
  if (root == NULL) {
    return new_node(data);
  }

  if (data < root->data) {
    root->left = insert(root->left, data);
  } else {
    root->right = insert(root->right, data);
  }

  return root;
}

void inorder_traversal(Node *root) {
  if (root != NULL) {
    inorder_traversal(root->left);
    printf("%d ", root->data);
    inorder_traversal(root->right);
  }
}

void preorder_traversal(Node *root) {
  if (root != NULL) {
    printf("%d ", root->data);
    preorder_traversal(root->left);
    preorder_traversal(root->right);
  }
}

void postorder_traversal(Node *root) {
  if (root != NULL) {
    postorder_traversal(root->left);
    postorder_traversal(root->right);
    printf("%d ", root->data);
  }
}

int is_bst_util(Node *root, int min, int max) {
  if (root == NULL) {
    return 1;
  }

  if (root->data < min || root->data > max) {
    return 0;
  }

  return is_bst_util(root->left, min, root->data - 1) &&
         is_bst_util(root->right, root->data + 1, max);
}

int is_bst(Node *root) { return is_bst_util(root, -2147483648, 2147483647); }

int main() {
  Node *root = NULL;

  root = insert(root, 10);
  root = insert(root, 5);
  root = insert(root, 15);
  root = insert(root, 3);
  root = insert(root, 7);

  printf("Inorder Traversal: ");
  inorder_traversal(root);
  printf("\n");

  printf("Preorder Traversal: ");
  preorder_traversal(root);
  printf("\n");

  printf("Postorder Traversal: ");
  postorder_traversal(root);
  printf("\n");

  if (is_bst(root)) {
    printf("The tree is a Binary Search Tree\n");
  } else {
    printf("The tree is not a Binary Search Tree\n");
  }

  return 0;
}

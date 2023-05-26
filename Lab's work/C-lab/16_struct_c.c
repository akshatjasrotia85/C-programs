#include <stdio.h>
struct name {
  int marks;
  char name[10];
};
void show(struct name a, struct name b, struct name c) {
  printf("\n");
  printf("name:%s\n", a.name);
  printf("marks:%d\n", a.marks);
  printf("\n");
  printf("name:%s\n", b.name);
  printf("marks:%d\n", b.marks);
  printf("\n");
  printf("name:%s\n", c.name);
  printf("marks:%d\n", c.marks);
  printf("\n");
}
int main() {
  typedef struct name NM;
  NM a;
  NM b;
  NM c;
  printf("enter name of first person:");
  scanf("%s", a.name);
  printf("enter marks of first person:");
  scanf("%d", &a.marks);
  printf("enter name of second person:");
  scanf("%s", b.name);
  printf("enter marks of second person:");
  scanf("%d", &b.marks);
  printf("enter name of third person:");
  scanf("%s", c.name);
  printf("enter marks of third person:");
  scanf("%d", &c.marks);
  show(a, b, c);
}

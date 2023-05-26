#include<stdio.h>
#include <stdlib.h>
struct{
    int x;
}*ptr;
int main(){
  ptr=malloc(sizeof(int));
    printf("enter a value:");
    scanf("%d",&ptr->x);
    // ptr->x=2;
    printf("%d\n",ptr->x);

    return 0;
}
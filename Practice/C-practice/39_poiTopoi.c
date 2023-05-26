#include<stdio.h>
int main(){
    int a,*p=&a,**po=&p;
    printf("enter number:");
    scanf("%d",&a);
    
    printf("%d\n",**po);
    printf("%d\n",*p);
    printf("%d\n",*(&a));
    return 0;
}
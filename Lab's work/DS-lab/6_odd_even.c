#include<stdio.h>

int main(){
    int a;
    printf("please enter a;");
    scanf("%d",&a);

if ((a/2)*2==a)
{
    printf("%d is even no",a);
}

else
{
    printf("%d is odd no",a);
}

    return 0;
}
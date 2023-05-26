#include<stdio.h>
int main(){
    int a=5444,d=100;
    int *b=&a;
    int *c=&d;
    printf("b=%u\n",b);
    b+=3;
    printf("b+=3==>%u\n",b);
    b-=4;
    printf("b-=4==>%u\n",b);
    printf("c=%u\n",c);
    c-=b;
    printf("c-=b==>%u\n",c);
    if (c<b) {
        printf("c=%u b=%u",c,b);
    
    }

    return 0;
}
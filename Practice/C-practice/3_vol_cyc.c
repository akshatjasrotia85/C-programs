#include<stdio.h>
int main(){
    float radius,height,pi=22.0/7.0;
    printf("PLEASE ENTER RADIUS:");
    scanf("%f",&radius);
    printf("PLEASE ENTER HEIGHT:");
    scanf("%f",&height);
    float vol=pi*radius*radius*height;
    printf("THE VOL. OF CIRCLE IS %.3f\n",vol);
    return 0;
}
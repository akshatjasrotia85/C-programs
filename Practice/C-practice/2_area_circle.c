#include<stdio.h>
int main(){
    float radius,pi=22.0/7.0;
    printf("PLEASE ENTER RADIUS:");
    scanf("%f",&radius);
    float area=pi*radius*radius;
    printf("THE AREA OF CIRCLE IS %.3f\n",area);
    return 0;
}
#include<stdio.h>
int main(){
    float pri,rate,time;
    printf("PLEASE ENTER PRI:");
    scanf("%f",&pri);
    printf("PLEASE ENTER RATE:");
    scanf("%f",&rate);
    printf("PLEASE ENTER TIME:");
    scanf("%f",&time);
    float _int=(pri*rate*time)/100;
    printf("THE AREA OF CIRCLE IS %.3f\n",_int);
    return 0;
}
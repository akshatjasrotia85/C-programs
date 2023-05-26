#include<stdio.h>
float temp(float c){
    return c*9/5+32;
}
#include<stdio.h>
int main(){
    float cel;
    printf("enter temperature in celeius:");
    scanf("%f",&cel);
    printf("(%f F) is temprature in farenheit\n",temp(cel));
    return 0;
}
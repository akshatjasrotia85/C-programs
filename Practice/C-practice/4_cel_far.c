#include<stdio.h>
int main(){
    float cel;
    printf("PLEASE ENTER TEMPERATURE IN CELCIUS:");
    scanf("%f",&cel);
    float far= cel * 9/5 + 32;
    printf("THETEMPERATURE IN FAHERENIT:%.3f\n",far);
    return 0;
}
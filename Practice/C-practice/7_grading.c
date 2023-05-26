#include<stdio.h>
int main(){
    printf("PLEASE ENTER YOUR PERCENTAGE:");
    float per;
    scanf("%f",&per);
    if( per<=100&&per>90){
        printf("A GRADE\n");
    }
    else if (per<=90&&per>80) {
        printf("B GRADE\n");    
    }
    else if (per<=80&&per>70) {
        printf("C GRADE\n");    
    }
    else if (per<=70&&per>60) {
        printf("D GRADE\n");    
    }
    else {
        printf("F GRADE\n");     
    }   
    return 0;
}
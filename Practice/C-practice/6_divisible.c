#include<stdio.h>
int main(){
    printf("PLEASE ENTER A NUM:");
    int num;
    scanf("%d",&num);
    if(num%97==0){
        printf("%d IS DIVISIBLE BY 97\n",num);
    }
    else{
        printf("%d IS NOT DIVISIBLE BY 97\n",num);
    }
    return 0;
}
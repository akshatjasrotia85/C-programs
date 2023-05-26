#include<stdio.h>

int main(){
    int n,i=1;
    printf("please enter a value :");
    scanf("%d",&n);
    while(i<=n){
        int j=1;
        while (j<=i)
        {
            printf("*");
            j++;
        }
        i++;
        printf("\n");        
    }
    return 0;
}
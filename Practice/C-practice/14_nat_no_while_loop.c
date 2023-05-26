#include<stdio.h>
int main()
{
	int n,i=1;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("First %d natural numbers are:\n",n);
	while(i<=n){
	
		printf("%d ",i);
        i++;
	}
	return 0;
}
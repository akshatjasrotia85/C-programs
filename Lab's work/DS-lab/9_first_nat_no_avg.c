# include <stdio.h> 
int main() 
{ 
 int n, i ; 
 float sum = 0, avg ;
 printf("Enter the limit : ") ; 
 scanf("%d", &n) ; 
 for(i = 1 ; i <= n ; i++) 
  sum = sum + i ; 
 avg = sum / n ; 
 printf("\nAverage of first %d numbers is : %.2f", n, avg) ; 

return 0;
} 
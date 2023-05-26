#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    float x1,x2,d;
    printf("enter a b c;");
    scanf("%d %d %d",&a,&b,&c);
    d=b*b-4*a*c;
    x1=(-b+sqrt(d))/2*a;
    x2=(-b-sqrt(d))/2*a;
     
    printf("Discrimant of eq. %dx^2+%dx+%d is %f\n",a,b,c,d);

    if(d>0)
    {
        printf("roots of eq. %dx^2+%dx+%d are %f and %f\n",a,b,c,x1,x2);
    }

    else if (d==0)
    {
        printf("roots of eq. %dx^2+%dx+%d are equal i.e %f and %f\n",a,b,c,x1,x2);
    }
    
    else
    {
       
        x1=(sqrt(-d))/2*a;
        x2=(sqrt(-d))/2*a;
         printf("roots of eq. %dx^2+%dx+%d are imaginary i.e -%d-i%f and -%d+i%f\n",a,b,c,b,x1,b,x2);
    }

    return 0;
}
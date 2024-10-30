//program to find roots of a quadratic equation
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,dis,x,y;
	printf("enter the value of a,b,c for quadratic eq. respectively\n");
	scanf("%f%f%f",&a,&b,&c);
	dis=b*b-4*a*c ;
	x=(-b+sqrt(dis))/(2*a);
	y=(-b-sqrt(dis))/(2*a);
	if(dis>=0)
	{
	printf("roots are real\n");
	printf("root 1 is %f\n ",x);
	printf("root 2 is %f",y);
	}
else
{printf("roots are imaginary");
	}	
	
	
	
	
	
	
	
}
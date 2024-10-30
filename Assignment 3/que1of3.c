//program to practise math functions such as sin(),cos(),log(),pow(),sqrt 
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,angle,x,y;
	a=pow(2,5);
	b=sqrt(225);
	printf("2 to the power 5 is %f\n",a);
	printf("square root of 225 is %f\n",b);
	
	printf("enter angle in degree\n");
	scanf("%f",&angle);
	x=angle*3.14/180;
	printf("sine of %f is %f\n",angle,sin(x));
	printf("cosine of %f is %f\n",angle,cos(x));
	y=log(100);
	printf(" log 100 base e is  %f",y);
	
	
	
	
	
	
	
	
	
	
}
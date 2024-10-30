#include<stdio.h>
int main()
{
int a;
	printf("enter year=");
	scanf("%d",&a);
	if(a%4==0 && a%100!=0 || a%400==0)
	{
	printf("%d is Leap year ",a);
    }
    else 
    {
   	printf("%d is Not a leap year",a);
	}
	return 0;	
	
	
	
	
	
	
	
}
#include<stdio.h>
int main()
{
	int n,i,x=0;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			x=1;
		}
	}
		if(x==1)
		{
			printf("%d is not prime number",n);
		}
		else
		{
			printf("%d is prime number",n);
		}
			
	
}
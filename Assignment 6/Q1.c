#include<stdio.h>
int main()
{
	int n,fact=1,i;
	printf("Enter the number to find its factorial:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("factorial of %d is %d ",n,fact);
	return 0;
}
#include<stdio.h>
int main()
{
	int n;
	printf("enter number greater than ten  =");
	scanf("%d",&n);
	
	if( n%2!=0 && n%3!=0 && n%4!=0 && n%5!=0 && n%6!=0 && n%7!=0 && n%8!=0 && n%9!=0)
	{
		printf("Prime number");
		
	}
	else 
	{
	printf("not prime");
    }
	return 0;
}
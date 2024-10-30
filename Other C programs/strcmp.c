#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],b[50];
	gets(a);
	gets(b);
	if(strcmpi(a,b)==0)
	{
		printf("same");
	}
	else if (strcmp(a,b)>0)
	{
		printf("greater");
	}
	else
	printf("b is less");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
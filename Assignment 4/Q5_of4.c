#include<stdio.h>
int main()
{
	char x;
	printf("Enter a charcter ");
	scanf("%c",&x);
	if('A'<=x && x<='Z')
	{
		printf("%c  is CAPITAL LETTER",x);
	
    }
	else if('a'<=x && x<='z')
	{
		printf("%c is small letter",x);
	
	
    }
	else if('1'<=x && x<='9')
	{
	printf("%c is digit",x);
	
	
	}
	else
	{
		printf("%c is a special chacter ",x);
		
	}
	
	
	
	
	
	
}
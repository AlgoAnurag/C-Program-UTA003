#include<stdio.h>
int main()
{
	int a,c;
	float b;
	printf("Enter the value of hardness\n");
	scanf("%d",&a);
	printf("Enter the value of Carbon content\n");
	scanf("%f",&b);
	printf("Enter the value of tensile strength\n");
	scanf("%d",&c);
	if(a>50 && b<0.7 && c>5600)
	{
		printf("Grade is 10");
	}
	 else if(a>50 && b<0.7)
	{
		printf("Grade is 9");
	}
	 else if(b<0.7 && c>5600)
	{
		printf("Grade is 8");
	}
	else if(a>50 && c>5600)
	{
		printf("Grade is 7");
	}
	else if(a>50 || b<0.7 || c>5600)
	{
		printf("Grade is 6");
	}
	else 
	{
		printf("Grade is 5");
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int i;
	float a ,b;
	printf("enter two number\n");
	scanf("%f%f",&a,&b);
	printf("enter 1 for addition\n");
	printf("enter 2 for substraction\n");
	printf("enter 3 for division\n ");
	printf("enter 4 for multiplication\n");
	printf("enter 5 for reminder\n");
	scanf("%d",&i);
	switch(i)
	{
		case 1:
			printf("addition is %.2f",a+b);
			break;
		case 2:
			printf("substraction is %.2f",a-b);
			break;
		case 3 :
			printf("division is %.2f",a/b);
			break;
		case 4:
		    printf("multiplication is %.2f",a*b);	
		case 5:
		    printf("reminder is %d",(int)a%(int)b);	
	}
	return 0;
}
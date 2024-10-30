#include<stdio.h>
int main()
{
	float a,b;
	int id;
	char name[20];
	printf("Name:Anurag Singh Sisodiya\n ");
    printf("Roll no. / Application no. = 9899\n");
	printf("Enter the user id of user:");
	scanf("%d",&id);
	printf("Enter name of user:");
	scanf("%s",name);
	printf("Enter number of units consumed by user:");
	scanf("%f",&a);
	if(a<=100)
	a=a*1;
	else if(a>100 && a<=300)
	a=a*2;
	else if(a>300)
	a=a*3;
	
	if(a>1000)
	b=(a*15)/100;
	a=a+b;
	 printf("Charge details\n");
	 printf("%d %s %.2f",id,name,a);
	 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
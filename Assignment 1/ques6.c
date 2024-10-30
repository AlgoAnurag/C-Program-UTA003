//program to calculate gross salary 
//created by: anurag singh
#include<stdio.h>
int main()
{
int gross_salary,basic,da,ta;
da= (basic*10)/100;
ta=(basic*12)/100;
gross_salary=basic+da+ta;
printf("enter your basic salary\n");
scanf("%d",&basic);	
printf("your gross salary is %d",gross_salary);


	

	
}
//program for compound interest
#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,n,ci;
	printf("enter the principal amount,rate and time(in years),n respectively\n");
	scanf("%f%f%f%f",&p,&r,&t,&n);
	ci=pow(p*(1+r/n),n*t);
	printf("compound intrest is %f",ci);
	
	
	
	
	
	
	
	
}
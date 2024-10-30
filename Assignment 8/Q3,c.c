#include<stdio.h>
int main()
{
	int a[100],b[100],i;
	printf("Enter numbers in array A\n");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	for(i=0;i<5;i++)
	b[i]=a[i];
	printf("elemnets of b after copy array A\n");
	for(i=0;i<5;i++)
	printf("%d\n",b[i]);
	return 0;	
	
}
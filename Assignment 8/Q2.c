#include<stdio.h>
int main()
{
	//insert an element to array
	int a[10],i,loc,element;
	printf("enter nine numbers\n");
	for(i=0;i<9;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter index for inserting:");
	scanf("%d",&loc);
	printf("Enter element:");
	scanf("%d",&element);
	for(i=8;i>=loc;i--)
	a[i+1]=a[i];
	a[loc]=element;
	printf("Array after insertion is\n");
	for(i=0;i<10;i++)
	printf("%d\n",a[i]);
	
	return 0;
}
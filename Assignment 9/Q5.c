#include<stdio.h>
void main()
{
	char a[50];
	gets(a);+
	int i,count=0;
	for(i=0;a[i];i++)
	{
		if(a[i]=='a'|| a[i]=='e'|| a[i]=='i' || a[i]=='o'|| a[i]=='u')
		count++;
	}
	printf("%d",count);
	
	
	
	
	
	
	
	
	
	
	
	
}
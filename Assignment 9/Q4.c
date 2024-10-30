#include<stdio.h>
int main()
{
	char a[50],b[50];
	int i,flag=0;
	gets(a);
	gets(b);
	for(i=0;a[i]!='\0'||b[i]!='\0';i++)
	{
		if(a[i]!=b[i])
		flag=1;
		break;
    }
    if(flag==1)
    printf("not same");
    else
    printf("same string");
    return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
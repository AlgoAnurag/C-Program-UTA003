#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	int flag,i,l;
	printf("Enter string \n");
    gets(a);
	l=strlen(a);
	for(i=0;i<a[i];i++)
	{
		if(a[i]!=a[l-1-i])
		flag=1;
	}
	if(flag)
	printf("%s is not palindrome",a);
	else
	printf("%s is palindrome",a);
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
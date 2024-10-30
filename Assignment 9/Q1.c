#include<stdio.h>
int main()
{
	
	int i;
	char str1[100]={'A','B','C','D'},str2[100];
	for(i=0;str1[i];i++)
	str2[i]=str1[i];
	printf("%s",str2);
	return 0;

}
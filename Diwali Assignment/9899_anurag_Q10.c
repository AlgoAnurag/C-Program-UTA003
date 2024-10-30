#include<stdio.h>
int main()
{
	int a,mark;
	char name[30];
	printf("Name:Anurag Singh Sisodiya\n ");
    printf("Roll no. / Application no. = 9899\n");
    printf("Enter roll no. of student:");
    scanf("%d",&a);
	printf("Enter name of student:");
	scanf("%s",name);
	printf("Enter Mark of student:");
	scanf("%d",&mark);	
	if(mark>=90)
	printf("%d %s %d A ",a,name,mark);	
	else if (mark<50)
	printf("%d %s %d Fail",a,name,mark);
	else if (mark<90 && mark>=70)
	printf("%d %s %d B",a,name,mark);
	else if (mark<70 && mark>=50)
	printf("%d %s %d C",a,name,mark);
	
	
	
	
	
	
	
	
	
	
	
}
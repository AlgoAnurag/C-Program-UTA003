#include <stdio.h>
int main()
{
	//x raised power n
	int x,n,i,p=1;
	printf("Enter number and its power\n");
	scanf("%d%d",&x,&n);
	for(i=1;i<=n;i++)
	{
		p=p*x;	
	}
	
	printf("%d to the power %d is %d",x,n,p);
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
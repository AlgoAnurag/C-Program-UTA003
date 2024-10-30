#include<stdio.h>
void smith(int n)
{
int tmp ,sd=0,sf=0,i,t,c,j;
tmp=n;
while(tmp>0)
{
sd=sd+(tmp%10);
tmp/=10;
	}	
	tmp=n;
	while(tmp>1)
	{
	for(i=2;i<=tmp;i++)	
	{if(tmp%i==0)
	break;
	}
	c=0;
	t=i;
	for(j=1;j<=i;j++)
	{
	if(i%j==0)
	c++;		
	}
	if(c==2)
	{
	while(i>0)
	{sf=sf+(i%10);
	i=i/10;
	}
		
	}
	tmp=tmp/t;	
	}
	if(sd==sf)
	printf("given number is smith number");
	else
	printf("given number is not a smith number");
}
int main()
{
	int n;
	printf("Name:Anurag Singh Sisodiya\n ");
    printf("Roll no. / Application no. = 9899\n");
	printf("enter the number:");
	scanf("%d",&n);
	smith(n);	

	}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
  
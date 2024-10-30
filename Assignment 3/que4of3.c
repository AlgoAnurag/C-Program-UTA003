//program to implement assignment operators such as += ,-= , /= , *= ,%= etc
#include<stdio.h>
int main()
{
//  a+=c means a=a+c	
	int a,b;
	printf("enter a and b \n");
	scanf("%d%d",&a,&b);
	printf("%d\n",a+=b);
	printf("%d\n",a-=b);
	printf("%d\n",a*=b);
	printf("%d\n",a/=b);
	printf("%d\n",a%=b);
	
	
	
	
	
	
}
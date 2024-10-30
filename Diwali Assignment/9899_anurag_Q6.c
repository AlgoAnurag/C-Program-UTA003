#include <stdio.h>
#include <math.h>
int main() {
int n,a,x,y;    
   int count=0;  
   printf("Name:Anurag Singh Sisodiya\n ");
   printf("Roll no. / Application no. = 9899\n");
   
   printf("Enter a number:");  
   scanf("%d",&n);  
   a=n;
   while(n!=0)  
   {  
       n=n/10;  
       count++;  
   }  
   
x=(a*a)/pow(10,count);

y= (a*a)% (int)pow(10,count);

if (a == x+y)
printf("entered number is kaperaker");
else 
printf("not kaperaker");
    return 0;
}
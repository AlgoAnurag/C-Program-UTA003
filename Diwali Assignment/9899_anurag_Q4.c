
#include <stdio.h>

int main() {
int a,b,c,d;  
float x;
printf("Name:Anurag Singh Sisodiya\n ");
printf("Roll no. / Application no. = 9899\n");
printf("enter price of old scooter:");
scanf("%d",&a);
printf("enter repair amount: ");
scanf("%d",&b);
printf("enter selling price of scooter after repair:");
scanf("%d",&c);
 d=c-(a+b);
 x=(float)(d*100)/(a+b);
 printf("gain percentage is %.2f",x);
   
    return 0;
}
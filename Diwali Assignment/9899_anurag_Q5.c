#include <stdio.h>

int main() {
    int age;
    printf("Name:Anurag Singh Sisodiya\n ");
    printf("Roll no. / Application no. = 9899\n");
    
    printf("Enter your age:");
    scanf("%d",&age);
    if( 0 <= age && age<18)
    printf("ALLOWED\n");
    else if(18<=age && age<=100)
    printf("NOT ALLOWED\n ");
   else
   printf("INVALID INPUT ");
   
   
   if(0<= age && age <=3)
   printf("TODDLER");
   else if (4<= age && age <=12)
   printf("JUNIORS");
   else if (13<= age && age<=17 )
   printf("TEENAGER");
 
    return 0;
}

#include <stdio.h>

int main() {
    int a,b,c,d;
    printf("Name:Anurag Singh Sisodiya\n ");
    printf("Roll no. / Application no. = 9899\n");

    printf("enter the no. of students in class:");
    
    scanf("%d",&a);
   printf("enter no. of teams:");
   scanf("%d",&b);
   c=a/b ;
   d=a%b;
   printf("the number of student in each team is %d and left out is %d",c,d);
   
    return 0;
}
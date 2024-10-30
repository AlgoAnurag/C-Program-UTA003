
#include <stdio.h>

int main() {
    int i;
    float a,b;
    printf("Name:Anurag Singh Sisodiya\n ");
    printf("Roll no. / Application no. = 9899\n");
    printf("Enter first value:");
    scanf("%f",&a);
    printf("Enter second value:");
    scanf("%f",&b);
    printf("Enter choice from the menu\n");
    printf("1.Addition\n 2. substraction\n 3. multiplication\n 4. Division\n");
    scanf("%d",&i);
    switch(i)
    {
        case 1:
        printf("value after addition is %f",a+b);
        break;
        case 2:
        printf("value after subtraction is %f",a-b); break;
        case 3:
        printf("value after multiplication is %f",a*b);break;
        case 4:
        printf("value after devision is %f",a/b);
        
        
        
    }
   
  
    return 0;
}
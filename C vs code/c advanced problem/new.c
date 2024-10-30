#include <stdio.h>
int main()
{
    // program to check whether a number is divisible by 3 and 2
    int x;
    printf("enter the number\n");
    scanf("%d", &x);
    if (x % 2 == 0 && x % 3 == 0)
    {
        printf("%d divisible by 2 and 3", x);
    }
    else
    {
        printf("not divisible");
    }
    return 0;
}
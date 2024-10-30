#include <stdio.h>
int main()
{
    int a, b, area;
    printf("enter the dimensions of rectangle\n");
    scanf("%d%d", &a, &b); // LEARN THIS
    area = a * b;
    printf("area of rectangle is %d", area);
    return 0;
}
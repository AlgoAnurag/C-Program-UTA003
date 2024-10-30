#include <stdio.h>
main()
{
    int a, i = 0;
    printf("enter a number\n");
    scanf("%d", &a);
    do
    {
        i=i+1;
        printf("HELLO WORLD\n");
    } while (i < a);
}
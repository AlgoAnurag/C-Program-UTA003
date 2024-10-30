#include <stdio.h>

int main()
{
    int num;
    printf("Name:Anurag Singh Sisodiya\n ");
    printf("Roll no. / Application no. = 9899\n");
    
    printf("Enter any number: ");
    scanf("%d", &num);

    if(num & 1)
    {
        printf("%d is odd.", num);
    }
    else
    {
        printf("%d is even.", num);
    }

    return 0;
}

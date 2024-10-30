#include <stdio.h>
main()
{
    // check whether a given character is alphabet,digit, or special character
    char x;
    printf("enter the charater\n");
    scanf("%c", &x);
    if (x >= 'A' && x <= 'Z')
    {
        printf("uppercase alphabet ");
    }
    else if (x >= 'a' && x <= 'z')
    {
        printf("lower case aplphabet");
    }
    else if (x >= '0' && x <= '9')
    {
        printf("digit");
    }
    else
    {
        printf("special character");
    }

    return 0;
}
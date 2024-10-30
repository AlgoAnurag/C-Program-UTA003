#include <stdio.h>
int main()
{
    int a;

    printf("press 1 if you passed in math\n press 2 if you passed in science\n press 3 if you passed in both math and scinece\n");
    scanf("%d", &a);
    if (a == 1)
    {
        printf("congratulations, you won 30 rupees");
    }
    else if (a == 2)
    {
        printf("Congo!you won 15 rupees");
    }
    else if (a == 3)
    {
        printf("congratulations, you won 45 rupees");
    }
    else
        printf("Enter a valid number ");

    return 0;
}
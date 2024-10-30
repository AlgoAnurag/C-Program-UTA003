#include <stdio.h>
main()
{
    // switch case program
    int x;
    printf("enter the atomic mumber of element between 1 to 5\n");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
        printf("HYDROGEN");
        break;
    case 2:
        printf("HELIUM");
        break;
    case 3:
        printf("LITHIUM");
        break;
    case 4:
        printf("BERELIUM");
        break;
    case 5:
        printf("BORON");
        break;

    default:
        printf("enter number between 1 and 5");
    }
}
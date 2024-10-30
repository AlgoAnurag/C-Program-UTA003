#include<stdio.h>
main()
{ //program for prize disurbution
char subject,math,science,both;
printf("which exam do you qualify? 1)math\n 2)science\n 3) both\n");
scanf("%c",&subject);

if (subject==math)
{
    printf("congraltulation you win  15 rupees");
}
else if (subject==science)
{
printf("you won 15 rupees for science");


}
else if ( subject==both )
{
printf("congratulations you win 45 rupees");   
}
else { 
    printf("you got nothing");
}
return 0 ;

}

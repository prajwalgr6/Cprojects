//Write macro definitions with arguments for calculation of Simple
//Interest and Amount. Store these macro definitions in a file called
//“interest.h”. Include this file in your program, and use the macro
//definitions for calculating simple interest and amount
#include <stdio.h>
#include "Example1209.h"

int main()
{
    int p,r,t;
    printf("Enter Pinciple amount , rate and time\n");
    scanf("%d %d %d",&p,&r,&t);
    printf("Simple Interestis %d\n",SIM(p,r,t));
    printf("Amount is %d\n",AMOUNT);

    return 0;
}

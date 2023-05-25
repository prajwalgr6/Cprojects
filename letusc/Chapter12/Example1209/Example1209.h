//Write macro definitions with arguments for calculation of Simple
//Interest and Amount. Store these macro definitions in a file called
//“interest.h”. Include this file in your program, and use the macro
//definitions for calculating simple interest and amount
#include<stdio.h>
#define SIM(p,r,t) (p*r*t)/100
#define AMOUNT (p*r*t/100)+p

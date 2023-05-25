//Write down macro definitions for the following:
//1. To find arithmetic mean of two numbers.
//2. To find absolute value of a number.
//3. To convert a upper case alphabet to lower case.
//4. To obtain the bigger of two numbers.
#include<stdio.h>
#include<math.h>
#define ARITH(a,b) (a+b)/2
#define ABSO(a) abs(a)
#define UPP(c) c+32
#define BIG(a,b) (a>b?printf("%d is greater than %d\n",a,b):printf("%d is greater than %d\n",b,a))


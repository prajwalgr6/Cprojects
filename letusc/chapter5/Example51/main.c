#include <stdio.h>
#include<math.h>
/*Write a program to calculate overtime pay of 10 employees.
Overtime is paid at the rate of Rs. 12.00 per hour for every hour
worked above 40 hours. Assume that employees do not work for
fractional part of an hour */

int main()
{
    int sal,h;
    printf("enter the working hours ");
    scanf("%d",&h);
    while (h>40){
        sal=sal+12;
        h--;
    }
    printf(" overtime pay of 10 employees is %d",sal*10);
    return 0;
}

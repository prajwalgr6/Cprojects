#include <stdio.h>
/*Any year is entered through the keyboard, write a program to
determine whether the year is leap or not. Use the logical operators
&& and ||.*/

int main()
{
    int year;
    printf("enter the year");
    scanf("%d",&year);
    if((year%4==0 && year%400==0) || (year%100!=0 &&  year%4==0)){
        printf("%d is leap year",year);
    }
    else{
        printf("%d is leap year",year);
    }

    return 0;
}

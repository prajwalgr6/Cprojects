#include <stdio.h>
/*Any year is input through the keyboard. Write a program to
determine whether the year is a leap year or not*/

int main()
{
    int year;
    printf("enter the year");
    scanf("%d",&year);

    if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                printf("%d is Leap year",year);
            }
            else
            {
                printf("%d is not  Leap year",year);
            }
        }
        else{
            printf("%d is leap year",year);
        }
    }
    else{
        printf("%d is not  Leap year",year);
    }


    return 0;
}

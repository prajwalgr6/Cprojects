#include <stdio.h>
/*Any year is entered through the keyboard. Write a function to
determine whether the year is a leap year or not. */
void leap(int y);
int main()
{
    int year;
    printf("enter the year");
    scanf("%d",&year);
    leap(year);
    return 0;
}
void leap(int y){
    if(y%4==0){
        if(y%100==0){
            if(y%400==0){
                printf("%d is Leap year",y);
            }
            else{
                printf("%d is not  Leap year",y);
            }
        }
        else{
            printf("%d is Leap year",y);
        }
    }
    else{
        printf("%d is not Leap year",y);
    }

}

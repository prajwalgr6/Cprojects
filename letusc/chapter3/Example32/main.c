#include <stdio.h>
/*The current year and the year in which the employee
joined the organization are entered through the keyboard. If the
number of years for which the employee has served the organization is
greater than 3, then a bonus of Rs. 2500/- is given to the employee. If
the years of service are not greater than 3, then the program should do
nothing.*/

int main()
{
    int const cur=2023;
    int joi,bonus;
    printf("enter the employee joined year");
    scanf("%d",&joi);
    if(cur-joi>3){
        bonus=2500;
        printf(" bonus of %d- is given to the employee",bonus);

    }
    else {
        bonus=0;
        printf("Bonus is %d",bonus);
    }

    return 0;
}

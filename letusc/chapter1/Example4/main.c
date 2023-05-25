#include <stdio.h>
/*The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance in
meters, feet, inches and centimeters.*/

int main()
{
    int km;
    printf("Enter the distance ");
    scanf("%d",&km);
    printf("km to meter is %d\n",km*1000);
    printf("km to feet is %f\n",km*3280.84);
    printf("km to inches is %f\n ",km*39370.1);
    printf("km to inches is %d\n ",km*100000);

    return 0;
}

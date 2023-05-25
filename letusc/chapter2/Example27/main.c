#include <stdio.h>
#include <math.h>
/*Wind chill factor is the felt air temperature on exposed skin due to
wind. The wind chill temperature is always lower than the air
temperature, and is calculated as per the following formula:
wcf = 35.74 + 0.6215t + ( 0.4275t - 35.75 ) * v 0.16
where t is the temperature and v is the wind velocity. Write a
program to receive values of t and v and calculate wind chill factor
(wcf). */

int main()
{
    int temp,vel;
    float wcf;
    printf("enter the temperature and velocity");
    scanf("%d%d",&temp,&vel);
    wcf=35.74+0.6215*temp + (0.4275*temp-35.75)*pow(vel,0.16);
    printf("wind chill factor is %f",wcf);

    return 0;
}

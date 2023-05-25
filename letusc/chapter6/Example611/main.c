#include <stdio.h>
/*Population of a town today is 100000. The population has increased
steadily at the rate of 10 % per year for last 10 years. Write a
program to determine the population at the end of each year in the
last decade*/

int main()
{
    int y=100000;
    for(int x=9;x>=1;x--){
       printf("population  %d  years back is ",x);
            y=y-(y/10);
       printf("%d\n",y);
   }
    return 0;
}

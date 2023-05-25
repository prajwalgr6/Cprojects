#include <stdio.h>
/*According to a study, the approximate level of intelligence of a
person can be calculated using the following formula:
i = 2 + ( y + 0.5 x )
Write a program that will produce a table of values of i, y and x,
where y varies from 1 to 6, and, for each value of y, x varies from
5.5 to 12.5 in steps of 0.5.*/

int main()
{
    float i;
    for(int x=1;x<=6;x++){
        for(float y=5.5;y<=12.5;y+=0.5){
            i = 2 + ( y + 0.5 * x ) ;
            printf("%d  |  %f | %f\n",x,y,i);

        }
    }
    return 0;
}

#include <stdio.h>
#define PI 3.14
# define AND &&
# define OR ||
# define ARANGE ( a > 25 AND a < 50 )
int main( )
{
    int f = 6, x = 4, y = 90,a=9 ;
    if ( ( f < 5 ) AND ( x <= 20 OR y <= 45 ) )
        printf ( "Your PC will always work fine...\n" ) ;
    else if ARANGE
        printf ( "In front of the maintenance man\n" ) ;
    else
        printf("NTG\n");
    return 0 ;
    float b;
    a=PI*PI;
    printf("%f",b);
    return 0;
}

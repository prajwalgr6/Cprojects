#include <stdio.h>
#define AREA(x) 3.14*x*x
int main()
{
    float r1=3.89,r2=5.23,a;
    a=AREA(r1);
    printf("%f\n",a);
    a=AREA(r2);
    printf("%f\n",a);
    return 0;
}

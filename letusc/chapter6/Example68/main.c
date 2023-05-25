#include <stdio.h>
#include<math.h>
/*When interest compounds q times per year at an annual rate of
r % for n years, the principal p compounds to an amount a as per
the following formula
a = p ( 1 + r / q ) nq
Write a program to read 10 sets of p, r, n & q and calculate the
corresponding as.*/

int main()
{

    float a,p,r,q,m;
        int n;
    for(int x=1;x<=10;x++){

        printf("enter the input p ,r ,n,q");
        scanf("%f%f%d%f",&p,&r,&n,&q);
        m=n*q;
        a =pow( p * ( 1 + r / q ),m);
        printf("%f\n",a);

    }
    return 0;
}

#include <stdio.h>
#include<math.h>
/*Write a program to receive Cartesian co-ordinates (x, y) of a point
and convert them into polar co-ordinates (r, pi).Hint: r = sqrt ( x2+ y2) and pi=tan-1( y / x )*/

int main()
{
    int x,y;
    printf("enter cartesian co ordinates");
    scanf("%d%d",&x,&y);
    float r,pi;
    r=sqrt(x*x+y*y);
    pi=atan(y/x);

    printf(" polar co-ordinates (%f,%f)",r,pi);
    return 0;
}

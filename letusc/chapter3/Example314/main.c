#include <stdio.h>
#include <math.h>
/*Given the coordinates (x, y) of center of a circle and its radius, write
a program that will determine whether a point lies inside the circle,on the circle or outside the circle.
 (Hint: Use sqrt( ) and pow( )functions) */


int main()
{
    int x,y,r,p;
    printf(" enter the coordinates (x, y) of center of a circle and its radius");
    scanf("%d%d%d",&x,&y,&p);
    r=sqrt(pow(x,2)+pow(y,2));
    if(r==p){
        printf("centre");
    }
    else if(r>p){
        printf("outside");

    }
    else {
        printf("inside");
    }
    return 0;
}

#include <stdio.h>
/*Given a point (x, y), write a program to find out if it lies on the Xaxis, Y-axis or on the origin.*/


int main()
{
    int x,y;
    printf("enter the x y");
    scanf("%d%d",&x,&y);
    if(x==0 && y==0){
        printf("x & y lies on origin");

    }
    else if(x==0){
        printf("point lies in y axis");

    }
    else if(y==0){
        printf("point lies in x axis");

    }
    else
    {
        printf("invalid");
    }
    return 0;
}

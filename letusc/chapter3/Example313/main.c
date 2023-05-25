#include <stdio.h>
/*Given three points (x1, y1), (x2, y2) and (x3, y3), write a program
to check if all the three points fall on one straight line.*/

int main()
{
    int x1,y1,x2,y2,x3,y3;
    printf("enter three points (x1, y1), (x2, y2) and (x3, y3) ");
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
    if(y1==x2 && y2==x3){
        printf(" all the three points fall on one straight line");
    }
    else
    {
        printf(" all the three points not fall on one straight line");
    }
    return 0;
}

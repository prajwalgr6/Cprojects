#include <stdio.h>
/*Given the length and breadth of a rectangle, write a program to find
whether the area of the rectangle is greater than its perimeter. For
example, the area of the rectangle with length = 5 and breadth = 4
is greater than its perimeter*/

int main()
{
    int l,b,a,p;
    printf("enter length and breadth of a rectangle");
    scanf("%d%d",&l,&b);
    a=l*b;
    p=2*(l+b);
    if(a>p){
        printf("the area of the rectangle with length and breadth is greater than its perimeter is %d",a);
    }
    else if(p>a){
        printf("the area of the rectangle with length and breadth is less than its perimeter is %d",p);

    }
    else{
        printf("the area of the rectangle with length and breadth is equal its perimeter");
    }
    return 0;
}

#include <stdio.h>
/*If the three sides of a triangle are entered through the keyboard,
write a program to check whether the triangle is isosceles,
equilateral, scalene or right angled triangle*/

int main()
{
    int a,b,c;
    printf("enter 3 sides");
    scanf("%d %d %d",&a,&b,&c);
    if(a == b == c){
        printf("equilateral");
    }
    else if(a == b || b == c || c==a){
        printf("isosceles");
    }
    else{
         printf("scalene");
    }

    return 0;
}

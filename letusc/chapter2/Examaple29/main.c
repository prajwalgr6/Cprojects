#include <stdio.h>
/*Two numbers are input through the keyboard into two locations C
and D. Write a program to interchange the contents of C and D.*/

int main()
{
    int a,b,t;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    printf("before%d and %d",a,b);
    t=a;
    a=b;
    b=t;
    printf("after %d and %d",a,b);
    return 0;
}

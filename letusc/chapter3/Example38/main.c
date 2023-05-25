#include <stdio.h>
/*A five-digit number is entered through the keyboard. Write a
program to obtain the reversed number and to determine whether
the original and reversed numbers are equal or not */

int main()
{
    int a,n,r;
    printf("enter the five digit number");
    scanf("%d",&a);
    for(int i=1;i<=5;i++){
        n=a%10;
        r=r*10+n;
        a=a/10;
    }
    printf("reverse is %d",r);
    return 0;
}

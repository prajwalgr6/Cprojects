#include <stdio.h>
/*If a five-digit number is input through the keyboard, write a
program to reverse the number*/

int main()
{
    int a,n,r;
    printf("Enter the number");
    scanf("%d",&a);
    for(int i=1;i<=5;i++){
        n=a%10;
        a=a/10;
        r=r*10+n;

    }
    printf("%d",r);
    return 0;
}

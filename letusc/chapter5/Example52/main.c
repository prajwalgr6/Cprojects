#include <stdio.h>
/*Write a program to find the factorial value of any number entered
through the keyboard*/

int main()
{
    int n,f=1;
    printf("enter the number");
    scanf("%d",&n);
    while(n>0){
        f=f*n;
        n--;
    }
    printf("factorial of number is %d",f);
    return 0;
}

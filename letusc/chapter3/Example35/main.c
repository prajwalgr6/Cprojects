#include <stdio.h>
/*Any integer is input through the keyboard. Write a program to find
out whether it is an odd number or even number.*/


int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n%2==0){
        printf(" %d is even number ",n);
    }
    else{
         printf(" %d is odd number ",n);
    }
    return 0;
}

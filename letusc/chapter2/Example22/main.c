#include <stdio.h>
/*If a five-digit number is input through the keyboard, write a
program to calculate the sum of its digits. (Hint: Use the modulus
operator ‘%’) */

int main()
{
    int a,n,r;
    printf("enter a");
    scanf("%d",&a);
    for(int i=1;i<=5;i++){
        n=a%10;
        a=a/10;
        r=r+n;
    }
    printf("sum of digits %d\n",r);
    return 0;
}

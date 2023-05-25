#include <stdio.h>
/*A 5-digit positive integer is entered through the keyboard, write a
recursive and a non-recursive function to calculate sum of digits of
the 5-digit number.*/

int pos(int );
int main()
{
    int a,sum;
    printf("enter 5 digit positive integer");
    scanf("%d",&a);
    sum=pos(a);
    printf("Sum of integer is %d",sum);


    return 0;
}
int pos(int n){
    int r=0,sum;
    while(n>0){
        r=n%10;

        sum=r+pos(n/10);


       return(sum);
    }

}

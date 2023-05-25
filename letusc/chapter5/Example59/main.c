#include <stdio.h>
/*Write a program to find the range of a set of numbers entered
through the keyboard. Range is the difference between the smallest
and biggest number in the list*/

int main()
{
    int a,n,r,temp=0,tem;
    printf("Enter the numbers");
    scanf("%d",&a);
    printf("enter the elements\n");
    while(a>0){
        scanf("%d",&n);


        if(temp<n){
            temp=n;
        }

        if (tem>n){
            tem=n;
            }

        a--;

    }
    r=temp-tem;
    printf("range is %d",r);


    return 0;
}

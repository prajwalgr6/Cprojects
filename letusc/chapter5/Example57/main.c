#include <stdio.h>
/*Write a program to enter numbers till the user wants. At the end it
should display the count of positive, negative and zeros entered.*/

int main()
{
    int a,n=0,b,c=0,d=0,e=0;
    printf("enter the number size");
    scanf("%d",&a);
    while(n<a){
        printf("enter the number");
        scanf("%d",&b);
        n++;
        if(b>0){
            c=c+1;


        }
        else if(b<0){
            d=d+1;


        }
        else if(b==0){
            e=e+1;


        }
        }
    printf("Positive number is %d",c);
    printf("negative number is %d",d);
    printf("zeros number is %d",e);




    return 0;
}

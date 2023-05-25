#include <stdio.h>
/*Write a program to receive an integer and find its octal equivalent*/



int main()
{
    int a,r,t,temp,x=0,y;
    printf("enter the number ");
    scanf("%d",&a);

    while(a>0){

        r=a/8;
        t=a%8;
        temp=temp*10+t;


        a=a/8;
    }


    while(temp>0){

        y=temp%10;
        x=x*10+y;
        temp=temp/10;

    }

     printf("%d",x);

    return 0;
}

#include <stdio.h>
/*The marks obtained by a student in 5 different subjects are
input through the keyboard. The student gets a division as per the
following rules:
Percentage above or equal to 60 - First division
Percentage between 50 and 59 - Second division
Percentage between 40 and 49 - Third division
Percentage less than 40 - Fail
Write a program to calculate the division obtained by the student*/

int main()
{
    int a,b,c,d,e,per;
    printf("enter the marks ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    per=(a+b+c+d+e)/5;
    if(per>=60){
        printf("First division");
    }
    else if(per>=50 && per<=59){
        printf("second division");
    }
    else if(per>=40 && per<=49){
        printf("Third division");
    }
    else{
        printf("Fail");
    }
    return 0;
}

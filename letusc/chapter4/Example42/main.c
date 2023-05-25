#include <stdio.h>
/*: A company insures its drivers in the following cases:
 If the driver is married.
 If the driver is unmarried, male & above 30 years of age.
 If the driver is unmarried, female & above 25 years of age.
In all other cases, the driver is not insured. If the marital status, sex and
age of the driver are the inputs, write a program to determine whether
the driver should be insured or not.*/

int main()
{
    int age;
    char ms,g;
    printf("enter age ,ms and gender ");
    scanf("%d %c %c",&age,&ms,&g);
    if(ms=='m'){
        printf("the driver should be insured");
    }
    else if(ms=='u'){
        if((g=='m' && age<30) || (g=='f' && age<25)){
             printf("the driver should be insured");
        }
        else{
             printf("the driver should be not insured");
        }
    }
    else{
        printf("the driver should be not insured");

    }
    return 0;
}

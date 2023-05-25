#include <stdio.h>
/*While purchasing certain items, a discount of 10% is
offered if the quantity purchased is more than 1000. If quantity and
price per item are input through the keyboard, write a program to
calculate the total expenses*/

int main()
{
    float p,q;
    printf("total quntity and purchse");
    scanf("%f%f",&q,&p);
    if(q>1000){

        printf("Total amount is %f",p*q);
        printf("amount to be paid is %f",(p*q)-((p*q)/100)*10);


    }
    else
        printf("No discount%f",p*q);

    return 0;
}

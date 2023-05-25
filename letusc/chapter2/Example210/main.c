#include <stdio.h>

/*Consider a currency system in which there are notes of seven
denominations, namely, Re. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If
a sum of Rs. N is entered through the keyboard, write a program to
compute the smallest number of notes that will combine to give Rs. N */

int main()
{
    int amount,h00,f0,t0,f,t,o,total;
    printf("enter the amount");
    scanf("%d",&amount);
    h00=amount/100;
    amount=amount%100;
    f0=amount/50;
    amount=amount%50;
    t0=amount/10;
    amount=amount%10;
    f=amount/5;
    amount=amount%5;
    t=amount/2;
    amount=amount%2;
    o=amount/1;
    total=h00+f0+t0+f+t+o ;
    printf("smallest number of notes%d",total);


    return 0;
}

#include <stdio.h>
/*Ramesh’s basic salary is input through the keyboard. His dearness
allowance is 40% of basic salary, and house rent allowance is 20% of
basic salary. Write a program to calculate his gross salary */

int main()
{
    int salary,Da,Hra,gross;
    printf("enyter the salary");
    scanf("%d",&salary);
    Da=(salary/100)*40;
    Hra=(salary/100)*20;
    gross=salary+Da+Hra;
    printf("net pay salary is %d",gross);
    return 0;
}

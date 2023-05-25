#include <stdio.h>
/*Write a program to print out all Armstrong numbers between 1 and
500. If sum of cubes of each digit of the number is equal to the
number itself, then the number is called an Armstrong number. For
example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 ).*/

int main()
{
    int a =1,temp,rem,sum;

    while(a<=500)
    {
        sum=0;
        temp = a;
        while(temp!=0)
        {
            rem = temp % 10;
            sum = sum + (rem * rem * rem);
            temp = temp / 10;
        }
        if(sum == a)
        {
            printf("%d\n",a);
        }
        a++;
    }



    return 0;

}

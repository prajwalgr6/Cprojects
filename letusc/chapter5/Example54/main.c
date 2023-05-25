#include <stdio.h>
/*Write a program to print all the ASCII values and their equivalent
characters using a while loop. The ASCII values vary from 0 to 255*/


int main()
{
    int a;

    while(a<=255){
        printf("%c is ",a);
        printf("%d",a);
        a++;
    }
    return 0;
}

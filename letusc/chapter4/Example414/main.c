#include <stdio.h>
/*Write a program to find the greatest of the three numbers entered
through the keyboard. Use conditional operators*/

int main()
{
    int a,b,c;
    printf("enter 3 numbers");
    scanf("%d%d%d",&a,&b,&c);
    ((a>b>c)?printf("greatest numberis %d",a):(b>c>a)?printf("greatest numberis %d",b):printf("greatest numberis %d",c));

    return 0;
}

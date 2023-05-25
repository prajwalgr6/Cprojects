#include <stdio.h>
#include<math.h>
/*If value of an angle is input through the keyboard, write a program
to print all its Trigonometric ratios*/

int main()
{
    int angle;
    printf("enter the input");
    scanf("%d",&angle);
    printf("sin is %f",sin(angle));
    printf("cos is %f",cos(angle));
    printf("tan is %f",tan(angle));
    printf("cot is %f",atan(angle));
    printf("cosec is %f",asin(angle));
    printf("sec is %f",acos(angle));
    return 0;
}

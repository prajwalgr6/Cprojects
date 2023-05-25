#include <stdio.h>
/*If the three sides of a triangle are entered through the keyboard,
write a program to check whether the triangle is valid or not. The
triangle is valid if the sum of two sides is greater than the largest of
the three sides.*/

int main()
{
    int a,b,c;
    printf("enter the 3 sides");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b && b<c){

        if((a+b)>c ){
        printf("triangle is valid");
    }
    else
    {
        printf("triangle is not valid");
    }
   }
    else if(b<a && c<a){

    if((b+c)>a ){
        printf("triangle is valid");
    }
    else
    {
        printf("triangle is not valid");
    }
    }
   else if(a<b && c<b){

    if((a+c)>b ){
        printf("triangle is valid");
    }
    else
    {
        printf("triangle is not valid");
    }
    }
    return 0;
}

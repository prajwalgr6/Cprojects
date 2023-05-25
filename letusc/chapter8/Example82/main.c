#include <stdio.h>
#include<math.h>
/*Write a function power ( a, b ), to calculate the value of a raised to
b.
*/
int power(int a,int b);
int main()
{
    int x,y;
    printf("enter a input x,y");
    scanf("%d %d",&x,&y);
    power(x,y);

    return 0;
}
int power(int a,int b){
    int p;
     p=pow(a,b);
    printf("%d",p);
     return 0;
}

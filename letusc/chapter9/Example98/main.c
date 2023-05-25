#include <stdio.h>
#include<math.h>
void area(int *,int *,int *,float *);
int main()
{
    int a,b,c;
    float x;
    printf("enter a ,b ,c");
    scanf("%d %d %d",&a,&b,&c);
    area(&a,&b,&c,&x);
    printf("%f",x);
    return 0;
}
void area(int *a,int *b,int *c,float *x){
    float s;
    s=(*a+*b+*c) /2.0;
    *x=sqrt(s*(s-*a)*(s-*b)*(s-*c));
}

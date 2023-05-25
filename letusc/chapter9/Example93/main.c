#include <stdio.h>

void area(float,float*,float*);
int main()
{
    float r,a,p;
    printf("enter the radius ");
    scanf("%f",&r);

    area( r,&a,&p);
    printf("%f\n",a);
    printf("%f\n",p);

    return 0;
}
void area(float r,float *a,float *p){
    *a = 3.14 * r * r;
    *p = 2 * 3.14 * r;

}

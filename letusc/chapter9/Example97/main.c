#include <stdio.h>
/*Given three variables x, y, z write a function to circularly shift their
values to right. In other words if x = 5, y = 8, z = 10, after circular
shift y = 5, z = 8, x =10. Call the function with variables a, b, c to
circularly shift values*/
void var(int *,int *,int *);
int main()
{
    int a,b,c;
    printf("enter 3 integer");
    scanf("%d%d%d",&a,&b,&c);
    printf("a=%d ,b=%d ,c=%d",a,b,c);
    var(&a,&b,&c);
    printf("a=%d, b=%d, c=%d",a,b,c);

    return 0;
}
void var(int *x,int *y,int *z){
    int temp;
    temp=*x;
    *x= *z;
    *z= *y;
    *y=temp;
}

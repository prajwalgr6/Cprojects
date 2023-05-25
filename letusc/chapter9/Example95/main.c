
#include <stdio.h>

int main()
{
    int a=3,*b,**c;
    b=&a;
    c=&b;
    printf("addr of a  %u\n",&a);
    printf("addr of a  %u\n",b);
    printf("value of a  %d\n",*b);
    printf("adree of b  %d\n",&b);

    printf("addr of a  %u\n",&(*b));
    printf("addr of  a %u\n",*(&b));
    printf("addr of a  %u\n",*c);
    printf("value of a  %d\n",**c);
    printf("addr of a  %u\n",&(**c));
    printf("addr of c  %u\n",&c);
    printf("addr of b %u\n",c);

    return 0;
}

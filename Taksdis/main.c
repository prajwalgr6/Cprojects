#include <stdio.h>
void fun(int *);
int main()
{
    int num=3;
    int *ptr;
    ptr=&num;
    fun(&num);
    return 0;
}
void fun(int *p)
{
        printf("%d\n",p);
        *p=*p+1;
        printf("%d\n",*p);

}

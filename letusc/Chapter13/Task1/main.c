#include <stdio.h>

int main()
{
    int a[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        printf("Value of a[%d] is %d\n",i,a[i]);
        printf("adress of a[%d] is %u\n",i,&a[i]);

    }
    return 0;
}

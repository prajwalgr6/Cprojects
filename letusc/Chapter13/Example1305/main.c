#include <stdio.h>

int main()
{
    int num[]={11,22,33,4,5,6};
    int *ptr;
    ptr=&num[0];
    for(int i=0;i<=5;i++){
        printf("%u is adresss of %d\n",ptr,*ptr);
        ptr++;
    }
    return 0;
}

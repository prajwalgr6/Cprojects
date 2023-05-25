#include <stdio.h>

int main()
{
    int arr[]={10,11,12,3,4,334};
    int i=4,*j,*k,*l;
    j=&arr[0];
    k=&arr[2];
    printf("%p\n",j);
    printf("%p\n",k);
    printf("%d\n",*j-*k);
    l=(arr+2);
    printf(" adress of l %p \n",l);
    printf(" adress of arr+2 %p \n",arr+2);
    printf(" adress of k %p\n ",k);

    if(k==l){
        printf("Two pointer adress is same\n");
    }
    else{
        printf("different adress\n");
    }


    return 0;
}

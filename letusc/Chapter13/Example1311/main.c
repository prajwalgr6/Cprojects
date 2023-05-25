#include <stdio.h>

int main()
{
    int a[25];
    int *ptr,small=999;

    printf("enter 25 integers");
    for(int i=0;i<25;i++){
        scanf("%d",&a[i]);
    }
    ptr=a;
    for(int i=0;i<25;i++){

        if(*ptr<small){
            small=*ptr;

        }
        ptr++;

    }
printf("small number is %d",small);


    return 0;
}

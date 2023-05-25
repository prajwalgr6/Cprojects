#include <stdio.h>

int main()
{
    int a[25];
    printf("enter the 25 numbers");
    for(int i=0;i<25;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<25;i++){
        if(a[i]>0){
            if(a[i]%2==0){
                printf("%d is even positive number\n",a[i]);

            }
            else {
                printf("%d is odd positive number \n",a[i]);
            }
        }
        else{
            printf("%d is negative number\n",a[i]);
        }
    }
    return 0;
}

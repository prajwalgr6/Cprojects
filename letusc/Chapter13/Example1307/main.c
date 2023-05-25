#include <stdio.h>

int main()
{
    int a[5]={1,2,3,4,5};
    int b[5];
    for(int i=4;i>=0;){
        for(int j=0;j<=4;j++){
            b[j]=a[i];
            i--;

        }
    }
    for(int i=0;i<=4;i++){
        printf("%d ",b[i]);
    }
    return 0;
}

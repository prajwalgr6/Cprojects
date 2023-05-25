#include <stdio.h>
int modify(int *n);
int main()
{
    int a[10];
    printf("Enter elemnt");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    modify(&a);
    for(int i=0;i<10;i++){
        printf("%d\n",a[i]);
    }


    return 0;
}
int modify(int *n){
    for(int i=0;i<10;i++){
        n[i]=n[i]*3;
    }



}

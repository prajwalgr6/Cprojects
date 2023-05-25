#include <stdio.h>

int main()
{
    int n;

    printf(" number of element u 12 8r ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]==a[i+1]){
            printf("a[%d] is equal to a[%d]\n",i,i+1);
        }
    }
    return 0;
}

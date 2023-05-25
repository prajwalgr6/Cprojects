#include <stdio.h>

int main()
{
    int a,n[10]={1,1,3,2,3,2,4,8,7,7};
    printf("enter the number");
    scanf("%d",&a);
    int count=0;
    for(int i=0;i<=10;i++){
        if(a==n[i]){
            count++;

        }

    }
    if(count==0){

            printf("%d is not found\n",a);

    }
    else{


    printf("%d is found  %d times in array\n",a,count);
    }

    return 0;
}

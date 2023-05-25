#include <stdio.h>

int main()
{
    int n[5],temp;
    printf("enter the number");
    for(int i=0;i<5;i++){
        scanf("%d",&n[i]);
    }
    for(int i=0;i<5; i++){
        for(int j=i+1;j<=4;j++){
            if(n[i]>n[j]){
               // printf("%d %d\n",n[i],n[j]);

                temp=n[i];
                n[i]=n[j];
                n[j]=temp;




        }
    }
    }

    for(int i=0;i<5;i++){


        printf("%d\n",n[i]);
    }

    return 0;
}

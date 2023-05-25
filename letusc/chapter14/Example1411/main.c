#include <stdio.h>

int main()
{
    int a[6][6],b[6][6],sum[6][6];
    printf("enter a[6][6] values");
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){

            scanf("%d ",&a[i][j]);
        }

    }
    printf("enter b[6][6] values");
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){

            scanf("%d ",&b[i][j]);
        }

    }
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){

           sum[i][j]=a[i][j]+b[i][j];
        }

    }
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){

           printf("%d",sum[i][j]);
        }

    }
    return 0;
}

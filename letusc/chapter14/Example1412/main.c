#include <stdio.h>

int main()
{
    int rowa,cola,rowb,colb;
    printf("enter the size array a");
    scanf("%d%d",&rowa,&cola);
    printf("enter the size array b");
    scanf("%d%d",&rowb,&colb);
    printf("rowa=%u\n cola= %u\n rowb=%u\n colb=%u\n",&rowa,&cola,&rowb,&colb);

    int a[rowa][cola],b[rowb][colb];
    int pro[rowa][colb];
    printf("array a=%u\n array b= %u\n array pro=%u\n ",&a,&b,&pro);


    if(cola==rowb){


    printf("enter array a values\n");

    for(int i=0;i<rowa;i++){
        for(int j=0;j<cola;j++)
        {

            scanf("%d",&a[i][j]);
            printf("%d adress is  %d ",a[i][j],&a[i][j]);
        }

    }
    printf("enter array b values\n");
    for(int i=0;i<rowb;i++)
    {
        for(int j=0;j<colb;j++){

            scanf("%d",&b[i][j]);

        }

    }

    for(int i=0;i<rowa;i++){
        for(int j=0;j<colb;j++){
            int temp=0;
            for(int k=0;k<rowb;k++){

            temp=temp+a[i][k]*b[k][j];

            }
            pro[i][j]=temp;
            printf("%d   ",pro[i][j]);
        }
        printf("\n");

    }
    }
    else
    {
    printf("Number of a columns not equal to number rows in b");
    }
    return 0;
}

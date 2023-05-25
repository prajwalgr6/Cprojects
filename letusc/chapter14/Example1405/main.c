 #include <stdio.h>

int main()
{
    int a[3][3][3]={ {{1,2,3},{3,4,5},{1,2,3}},
                        {{1,2,3},{3,4,5},{1,2,3}},
                      {{1,2,3},{3,4,5},{1,2,3}}};
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<3;k++){
                printf("%d   ",a[i][j][k]);

            }
            printf("\n");
        }
        printf("\n");
    }
    printf("%d ",a[0][0][0]);
    printf("%d ",a[2][2][2]);
    return 0;
}

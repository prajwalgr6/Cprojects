#include <stdio.h>
//Write a program to obtain transpose of a 3 x 5 matrix. The
//        transpose of a matrix is obtained by exchanging the elements of
//            each row with the elements of the corresponding column

int main()
{
    int a[3][5]={{1,2,3,4,7},
                    {4,5,6,3,4},
                   {7,8,9,10,11}};
    int b[5][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            b[j][i]=a[i][j];

        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            printf("%d ",b[i][j]);

        }
        printf("\n");
    }

    return 0;
}

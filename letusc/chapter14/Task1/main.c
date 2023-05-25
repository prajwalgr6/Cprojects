#include <stdio.h>

int main()
{
    int a[2][5]={{1,2,3,4,5},{6,7,8,9,1}};
    for(int i=0;i<2;i++){
        for(int j=0;j<5;j++){
        printf("Value of a[%d][%d] is %d\n",i,j,a[i][j]);
        printf("adress of a[%d][%d] is %u\n",i,j,&a[i][j]);
        }
    }
    return 0;
}

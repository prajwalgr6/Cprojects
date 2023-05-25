#include <stdio.h>

int main()

{
    int a[5][5]={{1,2,3,4,5},
                 {4,5,6,7,8},
                 {2,0,4,5,9},
                 {2,3,45,5,1},
                 {1,2,3,4,5}};
    int small=a[0][0];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i][j]<small){
                small=a[i][j];
            }
        }

    }
    printf("small number is %d\n",small);
    int large=a[0][0];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i][j]>large){
                large=a[i][j];
            }
        }

    }
    printf("large number is %d\n",large);
    return 0;
}

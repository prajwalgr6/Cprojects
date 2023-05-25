#include<stdio.h>
int main(){
    int a[3][3]={{1,1,1},{1,1,1},{1,1,1}};
    int t[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            t[j][i]=a[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){

            printf("%d ",t[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){

            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    int count=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){

            if(a[i][j]==t[i][j]){
                count++;

        }

    }

}
    if(count==9){
    printf("Square matrix is symmetric\n");
}
    else{
    printf("Square matrix is not symmetric\n");
    }
}

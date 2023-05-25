#include <stdio.h>
/*Write a program to produce the following output:
1
2 3
4 5 6
7 8 9 10 */

int main()

{
    int a=1;
    for(int i=0;i<4;i++){

        for(int j=0;j<=3-i;j++){
            printf(" ");

        }
        for(int k=1;k<=i;k++){
            printf("%d ",a++);
        }
        printf("\n");


    }
    return 0;
}

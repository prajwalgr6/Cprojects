#include <stdio.h>


int main()
{
    int n;
    for(int i=1;i<300;i++){
        n=1;
        for(int j=1;j<=i/2;j++){

            if(i%j==0){

                n++;
            }
        }
        if(n==2){

        printf("%d\n",i);

        }
    }
    return 0;
}


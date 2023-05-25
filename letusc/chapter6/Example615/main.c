#include <stdio.h>

int main()
{
    char a;
    a='A';


    for(int i=1;i<=7;i++){



        for(int j=7;j>=i;j--){

        printf("%c ",a);
        a++;

    }
    for(int s=0;s<=i*2-3;s++)
    {
        printf("  ");
    }
     for(int k=7;k>=i;--k){
      printf("%c ",a);
        a--;

    }

    printf("\n");
    }
    return 0;
}

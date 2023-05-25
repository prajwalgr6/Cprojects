#include <stdio.h>

int main()
{
    int per[10];
    printf("Enter the percentage of 10 number");
    for(int i=0;i<9;i++){
        scanf("%d",&per[i]);
    }

    for(int j=0;j<9;j++){
    printf("%d\n",per[j]);
    }
    return 0;
}

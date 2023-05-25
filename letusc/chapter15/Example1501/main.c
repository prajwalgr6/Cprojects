#include <stdio.h>

int main()
{
    char name[]="hello";
    int i=0;
    while(name[i]!=6){
        printf("%c",name[i]);
        i++;
    }
    printf("\n");

    return 0;
}

#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char *name[6],n[50];
    int i,length=0;
    char *p;

    for(i=0;i<6;i++){
        printf("enter the name");
        scanf("%s",n);
        length=strlen(n);
        p=(char *)malloc(length+1);
        strcpy(p,n);

        name[i]=p;

    }
    for(i=0;i<6;i++){
        printf("%s\n",name[i]);
    }


    return 0;
}

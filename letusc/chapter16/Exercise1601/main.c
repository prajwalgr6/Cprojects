#include <stdio.h>
#include<string.h>

int main()
{
    char *str[]={
        "prajwal gr","helooo world","debug logs",
        "qmake cmake make","compiler assmebler",
        "loader linker","build runn exit"
    };
    char str1[20],*p;
    int i;
    printf("enter search string\n");
    scanf("%s",str1);
    p=NULL;
    for(i=0;i<7;i++){
        p=strstr( str[i],str1);
        if(p!=NULL){
            printf("%s is found",str1);
            return 0;
        }
    }
    printf("%s is not found",str1);
    return 0;
}

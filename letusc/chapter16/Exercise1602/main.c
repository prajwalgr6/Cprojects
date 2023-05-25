#include <stdio.h>
#include <string.h>

int main()
{
    char *str[]={
        "prawjal","atharv","gowda",
        "hello","boss"
    };
    char *p;
    int i,j;
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){

            if(strcmp(str[i],str[j])>0){
                p=str[i];
                str[i]=str[j];
                str[j]=p;

            }
        }
    }
        for(i=0;i<5;i++){
        printf("%s\n",str[i]);
        }
    return 0;
}

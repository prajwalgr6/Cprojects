#include <stdio.h>
#include<string.h>

int main()
{
    char a[10];
    int num=0,i;
    printf("enter the string");
    scanf("%s",&a);
    for(i=0;i<strlen(a);i++){
        if(a[i]>=48 && a[i]<=57){
            num=num*10+(a[i]-48);
        }
        else{
            printf("Not valid");
            return 1;
        }

    }
    printf(" string to int is %d",num);
    return 0;
}

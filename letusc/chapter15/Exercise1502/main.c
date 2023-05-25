#include <stdio.h>
#include<string.h>
int main()
{
    char isb[10];
    int num=0;
    printf("enter the isb number");
    scanf("%s",isb);
    for(int i=0;i<10;i++){
        if(isb[i]>=48 && isb[i]<=57){
            num=num+(isb[i]-48)*(i+1);

        }
        else{
            printf("enter the digits");
        }
    }
    if(num%11==0){
        printf("%s is ISBN number",isb);
    }
    else{
        printf("%s is not ISBN number",isb);
    }

    return 0;
}

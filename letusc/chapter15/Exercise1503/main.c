#include <stdio.h>
#include<string.h>


int main()
{
    char c[20];
    int cr=0,cr1=0;
    printf("enter the credit card number");
    scanf("%s",c);

    for(int i=0;i<16;){
           int num=0;
        num=(c[i]-48)*2;
        if(num>9){
                num=num-9;
            }
        cr=cr+num;
            i=i+2;
        }
    for(int i=1;i<16;){

        cr1=cr1+(c[i]-48);
            i=i+2;

        }
    if((cr+cr1)%10==0){
        printf(" Valid Credit card number %s",c);
        }
    else{
        printf("Not  Valid Credit card number %s",c);
    }

    return 0;
}

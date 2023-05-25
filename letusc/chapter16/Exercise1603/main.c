#include <stdio.h>
#include<string.h>
void reverse(char *rev);
int main()
{
    int i;
    char revers[][30]={
        "helloo this is prajwal","hello world","hello c",
        "let us c"
    };
    for(i=0;i<4;i++){
        reverse(revers[i]);
        printf("%s\n",revers[i]);

    }
    return 0;
}
void reverse(char *rev ){
    int l,i;
    char *t,temp;
    l=strlen(rev);
    t=rev+l-1;
    for(i=1;i<=l/2;i++){
        temp=*rev;
        *rev=*t;
        *t=temp;
        rev++;
        t--;
    }

}

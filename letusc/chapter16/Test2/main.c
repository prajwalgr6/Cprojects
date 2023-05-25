#include <stdio.h>
#include<string.h>
void reverse(char *);
int length(char *);
int main()
{
    char source[]="Hello world";
    int length1 = 0;
    printf("%s\n",source);

    reverse(source);

    length1=length(source);
    printf("\n length is %d\n",length1);
    return 0;
}
void reverse(char *final){   
    if(*final!='\0'){
        printf("the adress of final %u ======= %c\n",final,*final);
        reverse(final+1);

        printf("%c",*final);
    }
}
int length(char *source1){
    int static length2;
    if(*source1!='\0'){
        length(source1+1);
    }
    return length2++;
}


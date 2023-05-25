#include <stdio.h>
/* Write a program to fill the entire screen with a smiling face. The
smiling face has an ASCII value 1.*/

int main()
{
    int a=1;
    for(int i=0;i<=300;i++){
            for(int j=0;j<=30;j++){
        printf("%c",a);
        }
    }
    printf("Hello World!\n");
    return 0;
}

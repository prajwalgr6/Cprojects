#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fs,*ft;
    char ch;

    fs=fopen("C:/Training/Let Us C/chapter18/Example1803/file2.txt","r");
    if(fs==NULL){
        puts("Cannot open source file");
        exit(1);
    }
    ft=fopen("C:/Training/Let Us C/chapter18/Example1803/file3.txt","w");
    if(ft==NULL){
        puts("Cannot open source file");
        fclose(ft);
        exit(2);
    }
    while(1){
        ch=fgetc(fs);
        if(ch==EOF)
            break;
        else
            fputc(ch,ft);
    }
    fclose(fs);
    fclose(ft);

    return 0;
}

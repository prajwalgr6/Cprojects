#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    char str[70];
    char ch;
    fp=fopen("C:/Training/Let Us C/chapter19/Example1904/file.txt","w");
    if(fp==NULL){
        printf("Cannot open file");
        exit(1);
    }
    printf("\n enter few lines\n");
    while(strlen(gets(str))>0){
        fputs(str,fp);
        fputs("\n",fp);
    }
    fclose(fp);
    fp=fopen("C:/Training/Let Us C/chapter19/Example1904/file.txt","r");
    while(1){
        ch=fgetc(fp);
        if(ch==EOF)
            break;
        printf("%c",ch);
    }
    printf("\n");
    fclose(fp);
    return 0;
}

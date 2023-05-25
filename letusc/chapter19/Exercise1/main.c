#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char s[200];
    int line_num=1;
    fp=fopen("C:/Training/Let Us C/chapter19/Exercise1/demo.txt","w");
    if(fp==NULL)
    {
        puts("Cannot open file(1)\n");
        exit(1);
    }
    printf("Enter the string\n");
    while(strlen(gets(s))>0)
    {
        fputs(s,fp);
        fputs("\n",fp);
    }
    fclose(fp);
    printf("Reading the file demo\n");
    fp=fopen("C:/Training/Let Us C/chapter19/Exercise1/demo.txt","r");
    if(fp==NULL)
    {
        puts("Cannot open file(2)\n");
        exit(2);
    }
    while(fgets(s,199,fp)!=NULL)
    {
        printf("%d : %s",line_num,s);
        line_num++;
    }

    fclose(fp);

    return 0;
}

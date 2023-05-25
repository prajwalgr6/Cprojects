#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp,*ft;
    char str[200];
    fp=fopen("C:/Training/Let Us C/chapter19/Exercise2/demo1.txt","r");
    if(fp==NULL){
        printf("cannot open file1\n");
        exit(1);
    }
    while(fgets(str,199,fp)!=NULL)
    {
        printf("%s",str);
    }
    printf("\n");
    fclose(fp);

    ft=fopen("C:/Training/Let Us C/chapter19/Exercise2/demo1.txt","r");
    if(ft==NULL){
        printf("cannot open file2\n");
        exit(2);
    }
    while(fgets(str,199,ft)!=NULL)
    {
        printf("%s",str);
    }
    printf("\n");

    fclose(ft);
    return 0;
}

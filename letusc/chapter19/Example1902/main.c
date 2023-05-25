#include <stdio.h>

int main()
{
    FILE *f;
    char ch;
    int nol=0,noc=0,nob=0,not=0;
    f=fopen("C:/Training/Let Us C/chapter18/Exercise1802/file2.txt","r");
    while (1) {
        ch=fgetc(f);
        if(ch==EOF)
            break;
        printf("%c",ch);
        noc++;
        if(ch==' '){
            nob++;
        }
        if(ch=='\n'){
            nol++;
        }
        if(ch=='\t'){
            not++;
        }
    }
    printf("\n");
    fclose(f);
    printf("Number of character is %d\n",noc);
    printf("Number of blanks is %d\n",nob);
    printf("Number of tabs is %d\n",not);
    printf("Number of lines is %d\n",nol);
    return 0;
}

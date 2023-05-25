#include <stdio.h>
void xstrcpy(int *,int *);
int main()
{
    char cp[6]="hello",p[5];
    printf("original %s\n",cp);
    xstrcpy(cp,p);


    printf(" xstrscpy is %s\n",p);


    return 0;
}
void xstrcpy(int *t,int *p){

    while(*t!='\0'){
        *p=*t;
        p++;
        t++;

    }
    if(*t=='\0'){
    *p='\0';
}


}

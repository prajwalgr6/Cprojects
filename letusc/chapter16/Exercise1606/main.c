#include <stdio.h>

int main()
{
    char v[80];
    printf("enter the string\n");
    gets(v);
    int i;
    for(i=0; v[i]!= '\0';i++){

        if(v[i]=='t' || v[i]=='T' &&  v[i+1]=='h' || v[i+1]=='H' && v[i+2]=='e' || v[i+2]=='E' ){
            v[i]=' ';
            v[i+1]=' ';
            v[i+2]=' ';
        }

    }

    printf("%s\n",v);

    return 0;
}

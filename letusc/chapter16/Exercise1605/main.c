#include <stdio.h>

int main()
{
    char v[]={  "Hammer and tongs Tooth and nail spit and polishYou and c"};
    int i;
    for(i=0;v[i]!='\0';i++){
        if(v[i]=='a' || v[i]=='e' || v[i]=='i' || v[i]=='o' || v[i]=='u'
            ||v[i]=='A' || v[i]=='E' || v[i]=='I' || v[i]=='O' || v[i]=='U'){

         v[i]=' ';

        }

    }
    printf("%s\n",v);
    return 0;
}

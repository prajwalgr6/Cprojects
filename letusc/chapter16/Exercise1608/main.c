#include <stdio.h>

int main()
{
    char v[]={  "Hammer and tongs Tooth and nail spit and polishYou and c"};
    int i,count=0;
    for(i=0;v[i]!='\0';i++){
        if(v[i]=='a' || v[i]=='e' || v[i]=='i' || v[i]=='o' || v[i]=='u'
            ||v[i]=='A' || v[i]=='E' || v[i]=='I' || v[i]=='O' || v[i]=='U'){
            if(v[i+1]=='a' || v[i+1]=='e' || v[i+1]=='i' || v[i+1]=='o' || v[i+1]=='u'
                ||v[i+1]=='A' || v[i+1]=='E' || v[i+1]=='I' || v[i+1]=='O' || v[i+1]=='U'){



                printf("%c%c\n",v[i],v[i+1]);
                count++;
            }

        }

    }
    printf("Number of occurences of two vowles is %d\n",count);

    return 0;
}

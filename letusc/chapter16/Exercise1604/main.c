#include <stdio.h>

int main()
{
    char *mess[]={
        "Hammer and tongs","Tooth and nail",
        "spit and polish","You and c"
    };
    printf("%llu\n",sizeof(mess));
    char me[4][17]={
        "Hammer and tongs","Tooth and nail",
        "spit and polish","You and c"
    };
   printf("%llu\n",sizeof(me));
    return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
    char a[]="Jerry",b[]="Ferry";
    printf("%s\n",a);
    int i,j,k;
    i=strcmp(a,"Jerry");
    j=strcmp(a,b);
    k=strcmp(a,"Jerry boy");
    printf("compre two strings %d\n",i);
    printf("compre two strings %d\n",j);
    printf("compre two strings %d\n",k);
    return 0;
}
